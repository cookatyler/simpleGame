#include "Player.hpp"

Player::Player(int newHealth, int newEnergy, std::string newName)
{
    health = newHealth;
    energy = newEnergy;
    name = newName;
}

int Player::getHealth() const
{
    return health;
}

int Player::getEnergy() const
{
    return energy;
}

std::string Player::getName() const
{
    return name;
}

void Player::setName(std::string newName)
{
    name = newName;
}

void Player::takeDamage(int damage)
{
    health -= damage;
}

void Player::attack(Player player)
{
    energy -= 10;
    player.takeDamage(10);
}

void Player::collectHealth()
{
    //Check to make sure we don't go over 100
    if(healthCure + getHealth() >= 100)
    {
        health = 100;
    }
    else
    {
        health += healthCure;
    }
}

void Player::collectEnergy()
{
    //Check to make sure we don't go over 100
    if(staminaBoost + getEnergy() >= 100)
    {
        energy = 100;
    }
    else
    {
        energy += staminaBoost;
    }
}
