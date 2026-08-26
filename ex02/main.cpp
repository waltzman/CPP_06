/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:58:22 by rlobun            #+#    #+#             */
/*   Updated: 2026/08/26 14:09:07 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <exception>

Base *generate(void)
{
    int r;

    std::srand(clock());
    r = std::rand() % 3;
    if (r == 0)
        return (new A());
    else if (r == 1)
        return (new B());
    else 
        return (new C());
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cerr << "Unknown class" << std::endl;
}


void identify(Base &p)
{

    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                (void)e;
                std::cerr << "Unknown class" << std::endl;
            }
        }
    }
}

int main(void)
{

    for (int i = 0; i < 10; i++)
    {
        Base *p = generate();
        std::cout << "Identify by pointer: ";
        identify(p);
        std::cout << "Identify by reference: ";
        identify(*p);
        delete p;
    }
    std::cout << "--------------------------------------------" << std::endl;

    return (0);
}
