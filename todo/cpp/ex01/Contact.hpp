
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
    private:
        std::string _fn;
        std::string _ln;
        std::string _nickname;
        std::string _phone;
        std::string _secret;

    public:
        Contact();
        ~Contact();
        void set_fn(std::string fn);
        void set_ln(std::string ln);
        void set_nickname(std::string nn);
        void set_phone(std::string p);
        void set_secret(std::string s);
        std::string get_fn();
        std::string get_ln();
        std::string get_nickname();
        std::string get_phone();
        std::string get_secret();
};

#endif
