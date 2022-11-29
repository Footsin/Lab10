#include <iostream>
 
int main(int argc, char** argv)
{
    int N;
    std::cout << "Enter the N: ";
    std::cin >> N;
 
    int k1 = 0;
    int k2 = 0;
    int k4 = 0;
    int k8 = 0;
    int k16 = 0;
    int k32 = 0;
    int k64 = 0;
 
    while (N > 0)
    {
        if (N >= 64)
        {
            N -= 64;
            k64++;
        }
        else if (N < 64 && N >= 32)
        {
            N -= 32;
            k32++;
        }
        else if (N < 32 && N >= 16)
        {
            N -= 16;
            k16++;
        }
        else if (N < 16 && N >= 8)
        {
            N -= 8;
            k8++;
        }
        else if (N < 8 && N >= 4)
        {
            N -= 4;
            k4++;
        }
        else if (N < 4 && N >= 2)
        {
            N -= 2;
            k2++;
        }
        else if (N == 1)
        {
            N -= 1;
            k1++;
        }
    }
 
    std::cout << "64: " <<k64 << std::endl;
    std::cout << "32: " <<k32 << std::endl;
    std::cout << "16: " << k16 << std::endl;
    std::cout << "8: " << k8 << std::endl;
    std::cout << "4: " << k4 << std::endl;
    std::cout << "2: " << k2 << std::endl;
    std::cout << "1: " << k1 << std::endl;
 
    return 0;
}