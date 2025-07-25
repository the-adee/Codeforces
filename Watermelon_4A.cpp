#include <iostream>

bool canDivideEvenly(int weight)
{
    if (weight == 1 || weight == 2)
        return false;


    return weight % 2 == 0;
}

int main()
{
    int weight;

    std::cin >> weight;

    if(canDivideEvenly(weight)) std::cout << "YES";
    else std::cout << "NO";
}