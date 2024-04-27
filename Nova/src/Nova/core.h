#pragma once

#ifdef NOVA_PLATFORM_WINDOWS
	#ifdef NV_BUILD_DLL 
		#define NOVA_API __declspec(dllexport)
	#else 
		#define NOVA_API __declspec(dllimport)
	#endif
#else
	#error nove is just supported in windows!
#endif

#define BIT(x) (1 << x)