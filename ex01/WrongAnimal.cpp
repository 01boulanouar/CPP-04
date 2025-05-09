/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/08 14:53:43 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal: Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    type = copy.type;
    std::cout << "WrongAnimal: Copy Constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    if (this != &copy)
        type = copy.type;
    std::cout << "WrongAnimal: Copy Assignment operator" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructor" << std::endl;
}

const std::string &WrongAnimal::getType(void) const
{
    return (type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal: Generic Wrong Animal sound" << std::endl;
}
