
#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook pb;
    std::string s;
    while (1)
    {
        std::cout << "You can use ADD, SEARCH and EXIT\n";
        if (!std::getline(std::cin, s)) // handle CTRL D
            break ;
        if (s == "ADD")
        {
            pb.add_contact();
        }
        else if (s == "SEARCH")
        {
            pb.search_contact();
        }
        else if (s == "EXIT")
            break;
        else
            std::cout << "invalid input\n\n";

        if (std::cin.eof())
            break ;
    }
    return 0;
}
