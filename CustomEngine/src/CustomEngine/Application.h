#pragma once

#include "Core.h"

namespace CustomEngine
{
	class CE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* SetupApplication();
}

