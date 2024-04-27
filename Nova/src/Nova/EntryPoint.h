#pragma once

#ifdef NOVA_PLATFORM_WINDOWS
	extern Nova::Application* Nova::CreateApplication();
	
	int main(int argc, char** argv)
	{
		Nova::Log::init();
		NV_CORE_WARN("initialized");
		NV_INFO("working");
		Nova::Log::GetCoreLogger()->trace("goood");
		auto app = Nova::CreateApplication();
		app->run();
		delete app;

	}

#endif
