/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:28:49 by rlobun            #+#    #+#             */
/*   Updated: 2026/08/26 12:08:50 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "type_printers.hpp"

ScalarConverter::ScalarConverter(void)
{ }

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
    *this = src;
}

ScalarConverter::~ScalarConverter(void)
{ }

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &rhs)
{
	(void)rhs;
	return *this;
}

void    ScalarConverter::convert(const std::string& str)
{
    size_t  len = str.length();
    e_inpttp  type = getType(str, len);
    switch(type)
    {
        case INVALID:
            std::cout << "Invalid input" << std::endl;
            break;
        case SPECIAL:
            printSpecial(str);
            break;
        case CHAR:
            printChar(str, len);
            break;
        case INT:
            printInt(str);
            break;
        case FLOAT:
            printFloat(str);
            break;
        case DOUBLE:
            printDouble(str);
            break;
    }
}