#pragma once
#ifdef RCK_PLATFORM_WINDOWS 

extern Reckon::Application* Reckon::CreateApplication();

int main(int argc,char** argv)
{
	printf("hello am i still zinda?");
	auto app = Reckon::CreateApplication();
	app->Run();
	delete app;
}

#endif