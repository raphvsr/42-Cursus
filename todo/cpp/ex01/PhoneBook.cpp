

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <iomanip>

PhoneBook::PhoneBook()
{
    _nb_contact = 0;
    _index = 0;
}

PhoneBook::~PhoneBook(){}

bool validate(std::string str)
{
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isspace(str[i]))
            return true;
    }
    return false;
}

void PhoneBook::add_contact()
{
    std::string fn;
    std::string ln;
    std::string nickname;
    std::string phone;
    std::string secret;

    std::cout << "first name : ";
    if (!std::getline(std::cin, fn)) return ;
    std::cout << "last name : ";
    if (!std::getline(std::cin, ln)) return ;
    std::cout << "nick name : ";
    if (!std::getline(std::cin, nickname)) return ;
    std::cout << "phone : ";
    if (!std::getline(std::cin, phone)) return ;
    std::cout << "secret : ";
    if (!std::getline(std::cin, secret)) return ;
    if (!validate(fn) || !validate(ln) || !validate(nickname) || !validate(phone) || !validate(secret))
    {
        std::cout << "error : empty field, contact not added\n" << std::endl;
        return ;
    }
    std::cout << "\n";
    _contact[_index].set_fn(fn);
    _contact[_index].set_ln(ln);
    _contact[_index].set_nickname(nickname);
    _contact[_index].set_phone(phone);
    _contact[_index].set_secret(secret);
    _index++;
    if (_index == 8)
        _index = 0;
    if (_nb_contact < 8)
        _nb_contact++;
}

static std::string formatcol(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::search_contact()
{
    for (int i = 0; i < _nb_contact; i++)
    {
        std::cout << std::setw(10) << i << "|"
                    << std::setw(10) << formatcol(_contact[i].get_fn()) << "|"
                    << std::setw(10) << formatcol(_contact[i].get_ln()) << "|"
                    << std::setw(10) << formatcol(_contact[i].get_nickname())
                    << std::endl;
    }
    std::string choice;
    std::cout << "select a contact [0-7]: ";
    if (!std::getline(std::cin, choice))
        return ;
    std::stringstream ss(choice);
    int uindex;
    if (ss >> uindex && ss.eof()) {
        if (uindex < 0 || uindex > _nb_contact - 1)
            std::cout << "index out of range\n";
        else
        {
            std::cout << _contact[uindex].get_fn() << "\n";
            std::cout << _contact[uindex].get_ln() << "\n";
            std::cout << _contact[uindex].get_nickname() << "\n";
            std::cout << _contact[uindex].get_phone() << "\n";
            std::cout << _contact[uindex].get_secret() << "\n\n";
        }
    }
    else {
        std::cout << "invalid index\n";
    }
}

