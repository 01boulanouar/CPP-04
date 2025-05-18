/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/09 10:54:14 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	_type = "amateria";
}

AMateria::AMateria(const AMateria &copy)
{
    _type = "amateria";
    (void) copy;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    (void) copy;
    _type = "amateria";
    return (*this);
}

AMateria::~AMateria()
{
}


AMateria::AMateria(std::string const &type)
{
	_type = type;
}

const std::string &AMateria::getType(void) const
{
    return (_type);
}

void AMateria::use(ICharacter &target)
{
    (void) target;
}
