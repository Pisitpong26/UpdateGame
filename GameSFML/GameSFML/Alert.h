#pragma once
#include "SFML/Graphics.hpp"
#include "Collider.h"
class Alert
{
public:
	Alert(sf::Texture* texture, sf::Vector2f size, sf::Vector2f position);
	~Alert();

	void OnCollision(sf::Vector2f direction);
	void Draw(sf::RenderWindow& window);
	Collider GetCollider() { return Collider(body); }

private:
	sf::RectangleShape body;
	unsigned int row;
	sf::Vector2f gravity;
};

