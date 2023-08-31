#include "rckpch.h"
#include "Application.h"
#include "Log.h"
#include "Events/ApplicationEvent.h"

namespace Reckon
{
	Application::Application()
	{

	}
	Application::~Application()
	{

	}
	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		RCK_TRACE(e);
		while (true);

	}
}