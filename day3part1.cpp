#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

int main()
{
    std::ifstream ifs("day3.txt");
    int count[12] = {0};
    std::string binNum;
    while(ifs >> binNum)
    {
        for(int i = 0; i < 12; ++i)
        {
            if(binNum[i] == '0')
            {
                ++count[i];
            }
            else
            {
                --count[i];
            }
        }
    }
    std::string gamma;
    std::string epsilon;

    for(int i = 0; i < 12; ++i)
    {
        if(count[i] > 0)
        {
            gamma.push_back('1');
            epsilon.push_back('0');
        }
        else
        {
            gamma.push_back('0');
            epsilon.push_back('1');
        }
    }
    int iGamma = stoi(gamma, 0, 2);
    int iEpsilon = stoi(epsilon, 0, 2);

    std::cout << iGamma * iEpsilon << std::endl;
}