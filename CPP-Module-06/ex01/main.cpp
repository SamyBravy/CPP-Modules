/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 19:33:38 by sdell-er          #+#    #+#             */
/*   Updated: 2024/12/23 19:42:39 by sdell-er         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	Data data;
	uintptr_t raw;
	Data *ptr;

	data.str = "Ciao";
	data.num = 42;

	std::cout << "String: " << data.str << std::endl;
	std::cout << "Number: " << data.num << std::endl;

	std::cout << "data: " << &data << std::endl;

	raw = Serializer::serialize(&data);
	std::cout << "raw: " << raw << std::endl;

	ptr = Serializer::deserialize(raw);
	std::cout << "ptr: " << ptr << std::endl;

	std::cout << "String: " << ptr->str << std::endl;
	std::cout << "Number: " << ptr->num << std::endl;

	return 0;
}
