/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:46:15 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/09 11:58:26 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();

        const std::string &getType(void) const;

        virtual void makeSound(void) const;
};

#endif
