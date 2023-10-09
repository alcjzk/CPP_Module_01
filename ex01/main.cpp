#include <string>
#include "Zombie.hpp"

#define ZOMBIE_COUNT 3

Zombie *zombieHorde(int n, std::string name);

int main()
{
    Zombie *zombies = zombieHorde(ZOMBIE_COUNT, "John");
    for (int i = 0; i < ZOMBIE_COUNT; i++)
    {
        zombies[i].announce();
    }
    delete[] zombies;
    return (EXIT_SUCCESS);
}
