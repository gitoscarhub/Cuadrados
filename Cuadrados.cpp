#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

using namespace sf;

Texture rojo;
Texture amarillo;
Texture azul;
Texture negro;
Sprite cuad_red;
Sprite cuad_yellow;
Sprite cuad_blue;
Sprite cuad_black;


int main(){

	negro.loadFromFile("cuad_chessb.png");
	rojo.loadFromFile("cuad_red.png");
	amarillo.loadFromFile("yellow.png");
	azul.loadFromFile("cuad_blue.png");
	cuad_yellow.setTexture(amarillo);
	cuad_red.setTexture(rojo);
	cuad_blue.setTexture(azul);
	cuad_black.setTexture(negro);
	
	sf::RenderTexture cuadrados;
	cuadrados.create(400, 400);
	cuadrados.draw(cuad_red);
	cuadrados.draw(cuad_yellow);
	cuadrados.draw(cuad_blue);
	cuadrados.draw(cuad_black);
	sf::Sprite cuadradoCombinado(cuadrados.getTexture());
	cuadradoCombinado.setPosition(200, 200);
	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"Cuadrados");
	

	while (App.isOpen()){

		App.clear();
		App.draw(cuadradoCombinado);
		App.display();
	}
	return 0;
}
