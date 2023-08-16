#pragma once
#ifdef RCK_PLATFORM_WINDOWS 

extern Reckon::Application* Reckon::CreateApplication();

int main(int argc,char** argv)
{
	Reckon::Log::Init();
	RCK_CORE_WARN("Init successful");
	RCK_INFO("hello duniya ke humans");
	int a = 78;
	RCK_TRACE("Var={0}", a);
	auto app = Reckon::CreateApplication();
	app->Run();
	delete app;
}

#endif