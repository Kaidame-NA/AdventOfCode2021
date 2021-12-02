#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream ifs("day2.txt");
    std::string direction;
    int units;
    int horizontal = 0;
    int depth = 0;
    int aim = 0;
    while(ifs >> direction >> units)
    {
        if(direction == "forward")
        {
            horizontal += units;
            depth += units * aim;
        }
        else if(direction == "down")
        {
            aim += units;
        }
        else if(direction == "up")
        {
            aim -= units;
        }
    }
    std::cout << horizontal * depth << std::endl;
    return 0;
}