#include "Game.h"


Game::Game(){}

Game::~Game(){}

// starts the game loop running
int Game::run()
{

	sf::RenderWindow window(sf::VideoMode(200, 200), "Gravity++");
	sf::CircleShape shape(100.0f);

	sf::Clock clock;
	

	Scene scene;

	std::vector<int> gameStates;

	while (window.isOpen())
	{
		sf::Time elapsed = clock.restart();
		float dt = elapsed.asSeconds();

		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		scene.update(dt);


		window.clear();
		scene.draw(&window);
		window.display();
	}
	return 0;
}
