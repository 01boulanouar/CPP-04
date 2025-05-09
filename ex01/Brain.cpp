/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/07 15:34:17 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain: Default Constructor" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    for (int i = 0 ; i < 100 ; i++)
        ideas[i] = copy.ideas[i];
    std::cout << "Brain: Copy Constructor" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
    if (this != &copy)
    {
        for (int i = 0 ; i < 100 ; i++)
            ideas[i] = copy.ideas[i];
    }
    std::cout << "Brain: Copy Assignment operator" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain: Destructor" << std::endl;
}
