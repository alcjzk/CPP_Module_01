#include <iostream>
#include "Harl.hpp"

Harl::t_entry Harl::map[LEVEL_MAX] = {
    {"DEBUG", &Harl::debug},
    {"INFO", &Harl::info},
    {"WARNING", &Harl::warning},
    {"ERROR", &Harl::error}
};

int Harl::level_int(const std::string &level)
{
    for (int i = 0; i < LEVEL_MAX; i++)
    {
        if (map[i].key == level)
            return i;
    }
    return -1;
}

void Harl::complain(std::string level)
{
    for (int i = 0; i < LEVEL_MAX; i++)
    {
        if (map[i].key == level)
            return (this->*map[i].func)();
    }
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
