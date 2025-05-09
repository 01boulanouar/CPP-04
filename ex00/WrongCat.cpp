/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/07 00:11:58 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat: Default Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    type = copy.type;
    std::cout << "WrongCat: Copy Constructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    if (this != &copy)
        type = copy.type;
    std::cout << "WrongCat: Copy Assignment operator" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: Destructor" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat: Meeeeoowwww Meoooww" << std::endl;
}
