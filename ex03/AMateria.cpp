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
    std::cout << "AMateria: Default Constructor" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "AMateria: Copy Constructor" << std::endl;
    _type = copy._type;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    std::cout << "AMateria: Copy Assignment operator" << std::endl;
    if (this != &copy)
        _type = copy._type;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria: Destructor" << std::endl;
}


AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria: Parameterized Constructor" << std::endl;
	_type = type;
}

const std::string &AMateria::getType(void) const
{
    return (_type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* Generic materia used at " << target.getName() << " *" << std::endl;
}
