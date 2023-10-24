#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    Harl    harl;

    if (argc != 2)
        return EXIT_FAILURE;
    switch (harl.level_int(argv[1]))
    {
        case 0:
            harl.complain("ERROR");
        case 1:
            harl.complain("WARNING");
        case 2:
            harl.complain("INFO");
        case 3:
            harl.complain("DEBUG");
        default:
            break;
    }
    return EXIT_SUCCESS;
}
