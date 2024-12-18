#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern CustomEngine::Application* CustomEngine::SetupApplication();

int main(int argc, char** argv)
{
	auto app = CustomEngine::SetupApplication();
	app->Run();
	delete app;
}

#endif