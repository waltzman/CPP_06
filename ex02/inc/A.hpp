/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:57:06 by rlobun            #+#    #+#             */
/*   Updated: 2026/08/26 14:26:57 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

class A : public Base 
{
	public:
		A() 
		{
			std::cout << "\nConstructor class A  \n" << std::endl;
		}
};

# endif
