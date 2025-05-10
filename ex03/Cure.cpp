/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/10 16:53:10 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
    _type = "cure";
    std::cout << "Cure: Default Constructor" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
    _type = copy._type;
    std::cout << "Cure: Copy Constructor" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
    std::cout << "Cure: Copy Assignment operator" << std::endl;
    if (this != &copy)
	_type = copy._type;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure: Destructor" << std::endl;
}

AMateria *Cure::clone() const
{
	return (new Cure);	
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
