#include <Titanium.h>

class Sandbox : public Titanium::Application {
public:
	Sandbox() {}
	~Sandbox() {}
};

Titanium::Application* Titanium::CreateApplication() {
	return new Sandbox();
}