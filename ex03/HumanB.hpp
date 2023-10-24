#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name);
        
        void    attack() const;
        void    setWeapon(Weapon &weapon);

    private:
        std::string _name;
        Weapon      *_weapon;
};

#endif
