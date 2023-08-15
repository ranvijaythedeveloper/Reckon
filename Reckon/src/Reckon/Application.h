#pragma once

#include "Core.h"
namespace Reckon
{

	class RECKON_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	// to be defined in client
	Application* CreateApplication();
	

	
}

