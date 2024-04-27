#include <nvpch.h>
#include "Application.h"
#include "Nova/Events/ApplicationEvent.h"
#include "Nova/Log.h"

namespace Nova {

	Application::Application()
	{

	}

	Application::~Application()
	{
		
	}
	void Application::run() {
		WindowResizeEvent e(1280, 720);
		NV_TRACE(e);
		while (true);
	}
	
	
}
