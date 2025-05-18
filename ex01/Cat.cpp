/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/16 14:56:01 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat: Default Constructor" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    type = copy.type;
    brain = new Brain(*copy.brain);
    std::cout << "Cat: Copy Constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        type = copy.type;
        if (brain)
            delete brain;
        brain = new Brain(*copy.brain);
    }
    std::cout << "Cat: Copy Assignment operator" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    if (brain)
        delete brain;
    std::cout << "Cat: Destructor" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat: Meeeeoowwww Meoooww" << std::endl;
}
