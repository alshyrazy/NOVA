#include <Nova.h>
class sandbox : public Nova::Application
{
public:
	sandbox()
	{
		
	}
	~sandbox()
	{

	}
};

Nova::Application* Nova::CreateApplication()
{
	return new sandbox;
}