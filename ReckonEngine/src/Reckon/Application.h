#pragma once
#include "Core.h"

#include "LayerStack.h"
#include "Events/Event.h"
#include "Reckon/Window.h"
#include "Events/ApplicationEvent.h"

namespace Reckon
{
	class RCK_API Application
	{
	public:
		Application();
		virtual~Application();
		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);
	private:
		bool OnWindowClosed(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};
	// to be defined in client
	Application* CreateApplication();

}