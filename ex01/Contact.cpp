# include "Contact.hpp"

using std::string;

string	Contact::first_name(void) const
{
	return (this->_first_name);
}

string	Contact::last_name(void) const
{
	return (this->_last_name);
}

string	Contact::nickname(void) const
{
	return (this->_nickname);
}

string	Contact::phone_number(void) const
{
	return (this->_phone_number);
}

string	Contact::darkest_secret(void) const
{
	return (this->_darkest_secret);
}

void	Contact::first_name(const string& _first_name)
{
	this->_first_name = _first_name;
}

void	Contact::last_name(const string& _last_name)
{
	this->_last_name = _last_name;
}

void	Contact::nickname(const string& _nickname)
{
	this->_nickname = _nickname;
}

void	Contact::phone_number(const string& _phone_number)
{
	this->_phone_number = _phone_number;
}

void	Contact::darkest_secret(const string& _darkest_secret)
{
	this->_darkest_secret = _darkest_secret;
}
