/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:35:11 by rlobun            #+#    #+#             */
/*   Updated: 2026/08/26 12:42:33 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data ps;
	ps.name = "Pablo Sanchez";
	ps.age = 42;
	ps.next = NULL;

	Data vz;
	vz.name = "Volodymyr Zelensky";
	vz.age = 42;
	vz.next = &ps;


	std::cout << "Original objects:" <<
				"\n\taddress: " << &vz <<
				"\n\tname: " << vz.name <<
				"\n\tage: " << vz.age <<
				"\n\taddress next: " << vz.next <<
	std::endl;
	std::cout << "\taddress ps: " << &ps <<
				"\n\tname: " << ps.name <<
				"\n\tage: " << ps.age <<
				"\n\taddress next: " << ps.next <<
	std::endl << std::endl;

	Serializer serializer;

	Data *reserialized_data = serializer.unserialize(serializer.serialize(&vz));

	std::cout << "Reserialized objects" <<
				"\n\taddress: " << reserialized_data <<
				"\n\tname: " << reserialized_data->name <<
				"\n\tage: " << reserialized_data->age <<
				"\n\taddress next: " << reserialized_data->next <<
	std::endl;
	std::cout << "\taddress ps: " << &ps <<
				"\n\tname: " << ps.name <<
				"\n\tage: " << ps.age <<
				"\n\taddress next: " << ps.next <<
	std::endl << std::endl;

	return (0);
}