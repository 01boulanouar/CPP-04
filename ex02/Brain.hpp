/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:46:15 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/09 11:58:26 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain &copy);
        Brain &operator=(const Brain &copy);
        ~Brain();

        const std::string *getIdeas(void) const;
};

#endif
