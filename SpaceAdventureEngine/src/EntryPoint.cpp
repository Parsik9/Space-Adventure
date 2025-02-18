#include "EntryPoint.h"
#include "framework/Application.h"
int main()
{
	sa::Application* app = GetApplication();
	app->Run();
	delete app;
}