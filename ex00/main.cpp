/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:28:46 by rlobun            #+#    #+#             */
/*   Updated: 2026/08/26 11:28:13 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2 )
	{
		std::cout << "Usage: ./convert <literal>" << std::endl;
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}