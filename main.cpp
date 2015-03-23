#include "stdafx.h"

const void inline setUIconsole(void)
{
	setlocale(LC_ALL, "RUS");
	SetConsoleTitle(_T("Loger Pocket Chef"));
}

unsigned int getresolution(const int mode)
{
	unsigned int temp;
	switch (mode)
	{
	case PX:
		temp = (GetSystemMetrics(SM_CXSCREEN) / 2);
		return temp;
	case PY:
		temp = (GetSystemMetrics(SM_CYSCREEN) / 2);
		break;
	default:
		return 1;
	}
}

int _tmain(int argc, _TCHAR argv[])
{
	setUIconsole(); 

	std::cout << "" << std::endl;
	
	PocketChefApp game("Pocket Chef", getresolution(PX), getresolution(PY), sf::Style::Default);
	game.Run();

	return 0;
}