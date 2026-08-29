/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:35:11 by rlobun            #+#    #+#             */
/*   Updated: 2026/08/26 14:43:08 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data ps;
	ps.name = "Pablo Sanchez";
	ps.age = 21;
	
	Data vz;
	vz.name = "Volodymyr Zelensky";
	vz.age = 42;
	


	std::cout << "\nOriginal objects:\n" <<
				"\n\taddress: " << &vz <<
				"\n\tname: " << vz.name <<
				"\n\tage: " << vz.age <<
				std::endl;
	std::cout << "\taddress ps: " << &ps <<
				"\n\tname: " << ps.name <<
				"\n\tage: " << ps.age <<
				std::endl << std::endl;


	Data *reserialized_data = Serializer::unserialize(Serializer::serialize(&vz));

	std::cout << "Reserialized objects:\n" <<
				"\n\taddress: " << reserialized_data <<
				"\n\tname: " << reserialized_data->name <<
				"\n\tage: " << reserialized_data->age <<
				std::endl<< std::endl;
	std::cout << "\taddress ps: " << &ps <<
				"\n\tname: " << ps.name <<
				"\n\tage: " << ps.age <<
	std::endl << std::endl;

	return (0);
}
