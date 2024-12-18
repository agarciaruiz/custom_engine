#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern CustomEngine::Application* CustomEngine::SetupApplication();

int main(int argc, char** argv)
{
	CustomEngine::Log::Init();
	CE_CORE_WARN("Initialized Engine Logger");
	int a = 5;
	CE_INFO("Hello! Var={0}", a);

	auto app = CustomEngine::SetupApplication();
	app->Run();
	delete app;
}

#endif