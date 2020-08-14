#include <iostream>

#include "Player.hpp"

int main()
{
    Player max(100, 100, "Maxwell");
    std::cout << "Created " << max.getName() << "! current energy is " << max.getEnergy() << " and health is " << max.getHealth() << std::endl;

    Player enemy(100, 100, "Enemy");
    std::cout << "Created " << enemy.getName() << "! current energy is " << enemy.getEnergy() << " and health is " << enemy.getHealth() << std::endl << std::endl;

    max.attack(enemy);
    std::cout << "max attacked" << " energy is now " << max.getEnergy() << " enemy health is now " << enemy.getHealth() << std::endl;
}
