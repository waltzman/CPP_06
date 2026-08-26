/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:32:51 by rlobun            #+#    #+#             */
/*   Updated: 2026/08/26 12:34:34 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <string>
# include <iostream>
# include <stdint.h> // otherwise uintptr_t won't compile with c++98 standard

typedef struct Data
{
	std::string	name;
	size_t		age;
	Data		*next;
}				Data;

class Serializer
{

	public:
		Serializer();
		Serializer(const Serializer &src);
		~Serializer();
		Serializer &operator=(const Serializer &src);

		uintptr_t serialize(Data *ptr);
		Data *unserialize(uintptr_t raw);

};

#endif