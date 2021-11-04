#pragma once
#include "SFML/Graphics.hpp"
#include "Collider.h"

class Box
{
public:
	Box(sf::Texture* texture, sf::Vector2f size, sf::Vector2f position);
	~Box();
	
	void OnCollision(sf::Vector2f direction);
	void Draw(sf::RenderWindow& window);

	sf::Vector2f GetPosition() { return body.getPosition(); }
	Collider GetCollider() { return Collider(body); }

private:
	sf::RectangleShape body;
	unsigned int row;

	sf::Vector2f gravity;
};