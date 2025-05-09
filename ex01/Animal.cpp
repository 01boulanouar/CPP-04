/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/08 14:50:47 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    type = "Animal";
    std::cout << "Animal: Default Constructor" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    type = copy.type;
    std::cout << "Animal: Copy Constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    if (this != &copy)
        type = copy.type;
    std::cout << "Animal: Copy Assignment operator" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor" << std::endl;
}

const std::string &Animal::getType(void) const
{
    return (type);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal: Generic animal sound" << std::endl;
}
