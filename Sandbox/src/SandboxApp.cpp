
#include <ReckonEngine.h>

class ExampleLayer : public Reckon::Layer
{
public:
	ExampleLayer()
		: Layer("example")
	{

	}

	void OnUpdate() override
	{
		RCK_INFO("ExampleLayer::Update");
	}

	void OnEvent(Reckon::Event& event) override
	{
		RCK_TRACE("{0}", event);
	}
};


class SandBox : public Reckon::Application
{
public:
	SandBox()
	{
		PushLayer(new ExampleLayer());
	}
	~SandBox()
	{

	}
};
Reckon::Application* Reckon::CreateApplication()
{
	return new SandBox;
}

