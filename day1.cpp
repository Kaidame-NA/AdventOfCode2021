#include <iostream>
#include <fstream>

int main()
{
    int first;
    int second;
    int increases = 0;
    std::ifstream ifs("day1.txt");
    ifs >> first;
    while(ifs >> second)
    {
        if(second > first)
        {
            increases++;
        }
        first = second;
    }
    
    std::cout << increases << std::endl;
    return 0;
}