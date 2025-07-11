#pragma once

#ifdef TI_PLATFORM_WINDOWS

extern Titanium::Application* Titanium::CreateApplication();

int main(int argc, char** argv) {
	auto app = Titanium::CreateApplication();
	app->Run();
	delete app;
}
#endif