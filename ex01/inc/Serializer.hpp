/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:32:51 by rlobun            #+#    #+#             */
/*   Updated: 2026/08/26 14:38:23 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"
# include <string>
# include <iostream>
# include <stdint.h> // otherwise uintptr_t won't compile with c++98 standard

class Serializer
{

	private:
		Serializer();
		Serializer(const Serializer &src);
		~Serializer();
		Serializer &operator=(const Serializer &src);
		
	public:
		static uintptr_t serialize(Data *ptr);
		static Data *unserialize(uintptr_t raw);

};

#endif
