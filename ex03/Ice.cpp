/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/16 14:23:43 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
    _type = "ice";
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
    _type = "ice";
}

Ice &Ice::operator=(const Ice &copy)
{
    (void) copy;
    _type = "ice";
    return (*this);
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
    AMateria *ice = new Ice(*this);
	return (ice);	
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
