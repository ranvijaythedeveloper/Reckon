#pragma once

#ifdef RCK_PLATFORM_WINDOWS 

extern Reckon::Application* Reckon::CreateApplication();
int main(int argc, char** argv)
{
	ReckonEngine::Log::Init();
	RCK_CORE_WARN("Unreal is a failure in front of our grand ultra mega gigachad super sonic ultra fast highly capable game engine");
	int a = 5;
	RCK_CORE_INFO("Hello Var={0}",a);
	auto app = Reckon::CreateApplication();
	app->Run();
	delete app;
}
#endif 