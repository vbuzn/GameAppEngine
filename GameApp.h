#pragma once
#include <SFML\Graphics.hpp>
#include <GL\glut.h>
#include <string>
#include <Windows.h>

#include "Global.h"

class GameApp
{
public:
	GameApp(const std::string, unsigned int, unsigned int, int);
	//GameApp(const std::string, unsigned int, unsigned int, int, sf::ContextSettings);
	GameApp(const GameApp&);

	void Run(void);

	virtual ~GameApp();

protected:
	virtual bool Init(void) = 0;
	virtual void Update(sf::Time &time) = 0;
	virtual void Render(sf::Time &time) = 0;
	virtual void Cleanup(void) = 0;    

	GameApp &operator=(const GameApp&);

private:
	sf::RenderWindow _window;
	sf::Time _time;
	sf::Clock _clock;
};

