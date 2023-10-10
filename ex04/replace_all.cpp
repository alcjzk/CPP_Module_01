#include <string>

std::string &replace_all(std::string &buffer, const std::string &string, const std::string &replacement)
{
    size_t  start;

    if (string.length() == 0)
        return buffer ;
    start = buffer.find(string, 0);
    while (start != std::string::npos)
    {
        buffer
            .erase(start, string.length())
            .insert(start, replacement);
        start = buffer.find(string, start + replacement.length());
    }
    return buffer;
}
