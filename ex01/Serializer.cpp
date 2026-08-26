/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:45:56 by rlobun            #+#    #+#             */
/*   Updated: 2026/08/26 12:45:57 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Constructors
Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &src)
{
	*this = src;
}

// Deconstructors
Serializer::~Serializer()
{
}

// Overloaded Operators
Serializer &Serializer::operator=(const Serializer &src)
{
	if (this == &src)
		return *this;

	return *this;
}


uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::unserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}