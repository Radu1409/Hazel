#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application(); // make "virtual" because this class will actually be inherited worldsuck ( sau worlsubclass ? )last by our actual
								// sandbox application
		void Run(); // this is basicically going to run our application
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

