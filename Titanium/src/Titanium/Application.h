#pragma once

#include "Core.h"

namespace Titanium {
	class TITANIUM_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}