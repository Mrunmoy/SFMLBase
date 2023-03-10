#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window.hpp>

int main(int argc, char* argv[])
{
	sf::Window window(sf::VideoMode({300, 200}), "SFMLBase");

	while(window.isOpen())
	{
		sf::Event Event;
		while(window.pollEvent(Event))
		{
			if (Event.type == sf::Event::Closed)
				window.close();

			if (Event.type == sf::Event::KeyPressed)
			{
				if (Event.key.code == sf::Keyboard::Escape)
					window.close();
			}
		}
		window.display();
	}

	return 0;
}