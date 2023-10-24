#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

void HumanB::attack() const
{
    if (!_weapon)
        return ;
    std::cout << _name << " attacks with their " << _weapon->getType();
    std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}
