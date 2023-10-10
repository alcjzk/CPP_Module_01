#include "Args.hpp"

Args::Args(int argc, char *argv[])
{
    if (argc != 4)
        throw "Invalid number of arguments";
    _filename = argv[1];
    _string = argv[2];
    _replacement = argv[3];
}

const char *Args::filename() const      { return _filename; }
const char *Args::string() const        { return _string; }
const char *Args::replacement() const   { return _replacement; }
