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
            harl.complain("DEBUG");
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
        case 1:
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 2:
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 3:
            harl.complain("ERROR");
            break;
    }
    return EXIT_SUCCESS;
}
