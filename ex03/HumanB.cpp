#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

void HumanB::attack() const
{
    std::cout << _name << " attacks with their " << _weapon->getType();
    std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}
