#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;
    std::cin.ignore();

    while (t-- > 0)
    {
        std::string word;
        std::getline(std::cin, word);

        int len = word.length();

        if(len > 10){
            std::cout << word[0] << (len-2) << word[len-1] << std::endl;
        }
        else{
            std::cout << word << std::endl;
        }

    }
}