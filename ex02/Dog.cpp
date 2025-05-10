/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/08 15:14:55 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog: Default Constructor" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    delete brain;
    brain = new Brain(*copy.brain);

    type = copy.type;
    std::cout << "Dog: Copy Constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        delete brain;
        brain = new Brain(*copy.brain);

        type = copy.type;
    }
    std::cout << "Dog: Copy Assignment operator" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog: Destructor" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog: Bark Bark (Woof Woof)" << std::endl;
}
