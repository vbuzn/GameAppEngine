#include "GameApp.h"

GameApp::GameApp(const std::string name, unsigned int w, unsigned int h, int style)
{
	if (w != 0 || h != 0) 
		_window.create(sf::VideoMode(w, h), name, style);
}
//
//GameApp::GameApp(const std::string name, unsigned int w, unsigned int h, int style, sf::ContextSettings settings)
//{
//	_window.create(sf::VideoMode(h, w), name, style, settings);
//}

void GameApp::Run(void)
{
	if (!Init())
	{
		int h = MessageBoxA(NULL, "Something went Wrong!\nPlease restart the game or contact the developer for help.", 
			"Error initialization POCKET CHEF!", MB_OK | MB_ICONERROR | MB_DEFBUTTON2 | MB_TASKMODAL);
		if (h == IDOK) GameApp::~GameApp();
	}

	while (_window.isOpen())
	{
		sf::Event event;
		while (_window.pollEvent(event))
		{
			if (event.type = sf::Event::Closed)
				_window.close();
		}
		_time = _clock.restart();

		Update(_time);
		Render(_time);

		_window.display();
	}
	Cleanup();
}

bool GameApp::Init(void)
{
	return true;
}

void GameApp::Update(sf::Time &time)
{

}

void GameApp::Render(sf::Time &time)
{

}

void GameApp::Cleanup()
{

}

GameApp::~GameApp()
{

}
