#include <iostream>
#include <fstream>

int main()
{
    int increases = 0;
    int first;
    int second;
    int third;
    int fourth;
    std::fstream ifs("day1.txt");
    ifs >> first >> second >> third;
    while(ifs >> fourth)
    {
        if(fourth > first)
        {
            increases++;
        }
        first = second;
        second = third;
        third = fourth;
    }
    std::cout << increases << std::endl;
    return 0;
}