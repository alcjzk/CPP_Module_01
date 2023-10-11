#include "Harl.hpp"
#include <iostream>

int main()
{
    Harl    harl;

    std::cout << "++ debug ++ " << std::endl;
    harl.complain("debug");
    std::cout << "---" << std::endl;

    std::cout << "++ info ++ " << std::endl;
    harl.complain("info");
    std::cout << "---" << std::endl;

    std::cout << "++ warning ++ " << std::endl;
    harl.complain("warning");
    std::cout << "---" << std::endl;

    std::cout << "++ error ++ " << std::endl;
    harl.complain("error");
    std::cout << "---" << std::endl;

    std::cout << "++ empty string ++ " << std::endl;
    harl.complain("");
    std::cout << "---" << std::endl;

    std::cout << "++ non-existing level ++ " << std::endl;
    harl.complain("hmm");
    std::cout << "---" << std::endl;

    return EXIT_SUCCESS;
}
