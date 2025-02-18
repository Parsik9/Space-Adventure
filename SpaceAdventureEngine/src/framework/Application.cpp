#include "framework/Application.h"
#include "framework/Core.h"

namespace sa
{
	Application::Application()
		:m_Window{ sf::VideoMode({800,600}),"My Window" },
		mTargetFrameRate{ 60.f },
		mTickClock{}
	{

	}
	void Application::Run()
	{
		mTickClock.restart();
		float accumulatedTime = 0.f;
		float targetDeltaTime = 1.f / mTargetFrameRate;
		while (m_Window.isOpen())
		{
			while (const std::optional<sf::Event> event = m_Window.pollEvent())
			{
				if (event->is<sf::Event::Closed>())
				{
					m_Window.close();
				}
			}
			accumulatedTime += mTickClock.restart().asSeconds();

			while (accumulatedTime > targetDeltaTime)
			{
				accumulatedTime -= targetDeltaTime;
				TickInternal(targetDeltaTime);
				RenderInternal();
			}
		}

	}
	void Application::TickInternal(float deltaTime)
	{
		LOG("ticking at framerate: %f", 1.f / deltaTime);
		Tick(deltaTime);
	}
	void Application::RenderInternal()
	{
		m_Window.clear();
		Render();
		m_Window.display();
	}
	void Application::Tick(float deltaTime)
	{
	}
	void Application::Render()
	{
		sf::Vector2f rectangleSize(50.f, 50.f);
		sf::RectangleShape rect(rectangleSize);
		rect.setFillColor(sf::Color::Blue);
		rect.setOrigin(rectangleSize / 2.f); // Merkez origin

		// Pencere boyutunu al ve float'a çevir
		sf::Vector2f windowSize = static_cast<sf::Vector2f>(m_Window.getSize());

		// Konumu ayarla
		rect.setPosition(sf::Vector2f(windowSize.x/2.f,windowSize.y/2.f));
		m_Window.draw(rect);
	}
}
