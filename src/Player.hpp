#include <string>

class Player
{
private:
    int health;
    int energy;
    std::string name;

    //In game health / energy items
    int healthCure = 10;
    int staminaBoost = 10;

public:
    int getHealth() const;
    int getEnergy() const;
    std::string getName() const;
    void takeDamage(int damage);

    void setName(std::string newName);

    //Attack method
    void attack(Player &player);

    void collectHealth();
    void collectEnergy();

    Player(int newHealth, int newEnergy, std::string newName);
};
