/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:23:39 by marvin            #+#    #+#             */
/*   Updated: 2024/08/22 22:23:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include<string>

class Contact
{
    private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	darkestSecret;
		std::string	phoneNumber;
    
    public:
		Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, std::string phone_number);
		~Contact();
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getDarkestSecret() const;
		std::string	getPhoneNumber() const;
		void		setFirstName(std::string first_name);
		void		setLastName(std::string last_name);
		void		setNickname(std::string nickname);
		void		setDarkestSecret(std::string darkest_secret);
		void		setPhoneNumber(std::string phone_number);
};

#endif
