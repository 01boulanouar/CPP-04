/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter copy.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:46:15 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/09 10:56:30 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{	
	private:
		std::string _name;
		AMateria *_inventory[4];
    public:
        Character(void);
		Character(std::string const &name);
        Character(const Character &copy);
        Character &operator=(const Character &copy);
        ~Character();

		std::string const &getName(void) const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif
