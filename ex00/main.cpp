#include <string>
#include "Zombie.hpp"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main()
{
    Zombie *zombie = newZombie("Zombie 1");
    zombie->announce();
    delete zombie;
    randomChump("Zombie 2");
    return (EXIT_SUCCESS);
}
