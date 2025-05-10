/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource copy.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:46:15 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/09 10:56:30 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_inventory[4];
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &copy);
        MateriaSource &operator=(const MateriaSource &copy);
        ~MateriaSource();

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);

};

#endif
