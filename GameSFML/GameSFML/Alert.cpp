#include "Alert.h"

Alert::Alert(sf::Texture* texture, sf::Vector2f size, sf::Vector2f position)
{
	body.setSize(size);
	body.setOrigin(size / 2.0f);
	body.setTexture(texture);
	body.setPosition(position);
}

void Alert::OnCollision(sf::Vector2f direction)
{
	if (direction.x < 0.0f)
	{
		gravity.x = 0.0f;
	}
	else if (direction.x > 0.0f)
	{
		gravity.x = 0.0f;
	}
	if (direction.y < 0.0f)
	{
		gravity.y = 0.0f;

	}
	else if (direction.y > 0.0f)
	{
		gravity.y = 0.0f;
	}
}

void Alert::Draw(sf::RenderWindow& window)
{
	window.draw(body);
}
