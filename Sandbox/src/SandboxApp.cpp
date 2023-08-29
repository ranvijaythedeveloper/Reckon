
#include <ReckonEngine.h>

class SandBox : public ReckonEngine::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};
ReckonEngine::Application* ReckonEngine::CreateApplication()
{
	return new SandBox;
}

