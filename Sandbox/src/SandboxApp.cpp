
#include <ReckonEngine.h>

class SandBox : public Reckon::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};
Reckon::Application* Reckon::CreateApplication()
{
	return new SandBox;
}

