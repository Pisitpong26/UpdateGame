#include "Background.h"

Background::Background(sf::Texture* texture, float speed)
{
	this->speed = speed;
	this->size = sf::Vector2f(1920.0f, 6000.0f);

	body[0].setSize(size);
	body[1].setSize(size);
	body[0].setTexture(texture);
	body[1].setTexture(texture);

}

void Background::Update(float deltaTime)
{

		position = body[0].getPosition();

		body[0].move(0, speed * deltaTime);

		if (position.y <= -size.y && speed < 0)
			body[0].setPosition(0.0f, -position.y - 4.0f);
}

void Background::Draw(sf::RenderWindow& window)
{
	window.draw(body[0]);

}
