/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 23:39:12 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/10 23:39:13 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <cstdint>

struct	Data
{
	int		i;
	std::string	str;
};

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	data_ptr;

	data_ptr = reinterpret_cast<uintptr_t>(ptr);
	std::cout << ptr << " | " << data_ptr << std::endl;
	return (data_ptr);
}

Data*		deserialize(uintptr_t raw)
{
	Data	*data_ptr;

	data_ptr = reinterpret_cast<Data*>(raw);
	return (data_ptr);
}

int		main()
{
	Data	*data = new Data;
	uintptr_t	ptr;

	data->i = 5;
	data->str = "hamza";
	
	std::cout << data->i << " | " << data->str << std::endl;
	ptr = serialize(data);
	std::cout << ptr << " | " << &ptr << std::endl;

	data = deserialize(ptr);
	std::cout << data << " | " << data->i << " | " << data->str << std::endl;
	delete data;
	return (0);
}