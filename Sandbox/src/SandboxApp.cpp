
#include <Reckon.h>

class Sandbox : public Reckon::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Reckon::Application* Reckon::CreateApplication()
{
	return new Sandbox;
}