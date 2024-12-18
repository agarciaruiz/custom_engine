#include <CustomEngine.h>

class Sandbox : public CustomEngine::Application 
{
public: 
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}
};

CustomEngine::Application* CustomEngine::SetupApplication()
{
	return new Sandbox();
}