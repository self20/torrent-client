#pragma once

#include <string>
#include <iostream>
#include <fstream>

class CommandListener 
{

public:
    CommandListener()
    {
        // do nothing
    }

    bool readCommand(std::string &line)
    {
        return (bool)std::getline(std::cin, line);
    }

private:

};