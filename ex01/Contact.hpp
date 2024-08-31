# pragma once
# ifndef __CONTACT_HPP__
	# define __CONTACT_HPP__

	# include <string>

	class Contact
	{
		private:
			std::string	_first_name;
			std::string	_last_name;
			std::string	_nickname;
			std::string	_phone_number;
			std::string	_darkest_secret;

		public:
			std::string	first_name(void) const;
			std::string	last_name(void) const;
			std::string	nickname(void) const;
			std::string	phone_number(void) const;
			std::string	darkest_secret(void) const;
			void		first_name(const std::string&);
			void		last_name(const std::string&);
			void		nickname(const std::string&);
			void		phone_number(const std::string&);
			void		darkest_secret(const std::string&);
	};

# endif
