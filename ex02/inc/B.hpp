/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:57:23 by rlobun            #+#    #+#             */
/*   Updated: 2026/08/26 14:25:45 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

class B : public Base
{
	public:
		B() 
		{
			std::cout << "\n Constructor class B  \n" << std::endl;
		}
};

# endif
