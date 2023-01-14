#include "ctime";
#include <SFML/Graphics.hpp>
#include "Function.h"
#include "settings.h"
#include "BAT.h"
#include "BALL.h"
using namespace sf;

int main()
{
	srand(time(0));
	// Îáúåêò, êîòîðûé, ñîáñòâåííî, ÿâëÿåòñÿ ãëàâíûì îêíîì ïðèëîæåíèÿ
	RenderWindow window(VideoMode(width, height), title);
	window.setVerticalSyncEnabled(true);
	Bat bat;
	batInit(bat);
	//ШАР
	Ball ball;
	ballInit(ball);
	// Ãëàâíûé öèêë ïðèëîæåíèÿ. Âûïîëíÿåòñÿ, ïîêà îòêðûòî îêíî
	while (window.isOpen()) {
		checkEvents(window);
		updateGame(bat, ball);
		//игра закончилась?- прервать цикл
		if (ball.shape.getPosition().y >= height - 2 * ballradius)
			break;
		checkCollision();
		drawGame(window, bat, ball);
			
	}
	return 0;
}