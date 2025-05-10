/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:46:15 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/09 11:33:10 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure(void);
        Cure(const Cure &copy);
        Cure &operator=(const Cure &copy);
        ~Cure();
		
		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif
