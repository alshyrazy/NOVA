#pragma once
#include "core.h"
#include "Nova/Events/Event.h"

namespace Nova {

	class NOVA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
		
	};

	Application* CreateApplication();

	
}

