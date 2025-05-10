/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria copy.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:46:15 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/09 10:56:30 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(void);
        AMateria(const AMateria &copy);
        AMateria &operator=(const AMateria &copy);
        virtual ~AMateria();

		AMateria(std::string const &type);
		std::string const &getType(void) const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

};

#endif
