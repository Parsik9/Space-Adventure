#pragma once

#include <SFML/Graphics.hpp>

namespace sa
{
	class Application
	{
	public:
		Application();

		void Run();

	private:
		void TickInternal(float deltaTime);
		void RenderInternal();

		virtual void Tick(float deltaTime);
		virtual void Render();

		sf::RenderWindow m_Window;
		float mTargetFrameRate;
		sf::Clock mTickClock;
	};
}