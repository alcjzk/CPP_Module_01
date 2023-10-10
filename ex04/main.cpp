#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "Args.hpp"

std::string &replace_all(std::string &buffer, const std::string &string, const std::string &replacement);

void    run(Args &args)
{
    std::ifstream           input_file;
    std::stringstream       buffer;
    std::string             input_str;
    std::ofstream           output_file;
    std::ios_base::iostate  except_mask;

    except_mask = std::ios_base::failbit | std::ios_base::badbit;
    input_file.exceptions(except_mask);
    output_file.exceptions(except_mask);
    buffer.exceptions(except_mask);
    try
    {
        input_file.open(args.filename(), std::ios::in | std::ios::binary);
        output_file.open(std::string(args.filename()) + ".replace", std::ios::trunc | std::ios::out | std::ios::binary);

        buffer << input_file.rdbuf();
        input_str = buffer.str();
        output_file << replace_all(input_str, args.string(), args.replacement());
    }
    catch (std::ios_base::failure &_e)
    {
        throw "I/O Error!";
    }
}

int main(int argc, char *argv[])
{
    try
    {
        Args args(argc, argv);
        run(args);
    }
    catch (const char *error)
    {
        std::cout << "Error: " << error << std::endl;
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}
