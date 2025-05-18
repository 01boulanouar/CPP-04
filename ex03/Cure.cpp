/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/16 14:24:00 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
    _type = "cure";
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
    _type = "cure";
}

Cure &Cure::operator=(const Cure &copy)
{
    (void) copy;
    _type = "cure";
    return (*this);
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
    AMateria *cure = new Cure(*this);
	return (cure);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
