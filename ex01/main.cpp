/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:45:14 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/08 15:38:15 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal *animals[10];
    int i = 0;

    while (i < 5)
    {
        animals[i] = new Dog();
        i++;
    }

    while (i < 10)
    {
        animals[i] = new Cat();
        i++;
    }

    i = 0;
    while (i < 10)
    {
        animals[i]->makeSound();
        delete animals[i];
        i++;
    }
    return (0);
}


