/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:45:14 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/09 10:54:18 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Cat cat;
	const Animal *animal;

	animal = new Dog();
	animal->makeSound();
	
	cat.makeSound();

	delete animal;
    return (0);
}


