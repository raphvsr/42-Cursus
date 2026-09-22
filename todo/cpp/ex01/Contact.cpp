
#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

// set fields
void Contact::set_fn(std::string fn)
{
    _fn = fn;
}

void Contact::set_ln(std::string ln)
{
    _ln = ln;
}

void Contact::set_nickname(std::string nn)
{
    _nickname = nn;
}

void Contact::set_phone(std::string p)
{
    _phone = p;
}

void Contact::set_secret(std::string s)
{
    _secret = s;
}

// retrieve fields
std::string Contact::get_fn()
{
    return (_fn);
}

std::string Contact::get_ln()
{
    return (_ln);
}

std::string Contact::get_nickname()
{
    return (_nickname);
}

std::string Contact::get_phone()
{
    return (_phone);
}

std::string Contact::get_secret()
{
    return (_secret);
}
