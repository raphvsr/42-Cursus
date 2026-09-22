
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
    private:
        Contact _contact[8];
        int _nb_contact;
        int _index;

    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact();
        void search_contact();

};

#endif
