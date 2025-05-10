/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/09 12:07:39 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
    _type = "ice";
    std::cout << "Ice: Default Constructor" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
    _type = copy._type;
    std::cout << "Ice: Copy Constructor" << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
    if (this != &copy)
		_type = copy._type;
    std::cout << "Ice: Copy Assignment operator" << std::endl;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice: Destructor" << std::endl;
}

AMateria *Ice::clone() const
{
	return (new Ice);	
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
