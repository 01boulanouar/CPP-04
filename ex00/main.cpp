/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:45:14 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/07 15:31:10 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    const WrongAnimal* k = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;  

    i->makeSound();
    j->makeSound();
    
    k->makeSound();

    meta->makeSound();


    delete meta;
    delete j;
    delete i;
    delete k;
    
    return (0);
}
