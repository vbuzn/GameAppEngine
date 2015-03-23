#include "PocketChefApp.h"


PocketChefApp::PocketChefApp(const std::string name, unsigned int w, unsigned int h, int style)
	: GameApp(name, w, h, style)
{  }

//GameApp::GameApp(const std::string name, unsigned int w, unsigned int h, int style, sf::ContextSettings settings)
//	: GameApp(name, w, h, style, settings)
//{  }


bool PocketChefApp::Init(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	return true;
}

void PocketChefApp::Update(sf::Time &time)
{
}

void PocketChefApp::Render(sf::Time &time)
{
	glClear(GL_COLOR_BUFFER_BIT);
}

void PocketChefApp::Cleanup()
{

}

PocketChefApp::~PocketChefApp()
{

}
