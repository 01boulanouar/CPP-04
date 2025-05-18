/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:44:56 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/16 15:05:02 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	ICharacter* john = new Character("john");
	IMateriaSource* mat = new MateriaSource();

	mat->learnMateria(new Ice());
	mat->learnMateria(new Ice());
	mat->learnMateria(new Cure());

	john->equip(mat->createMateria("ice"));
	john->equip(mat->createMateria("cure"));
	
	john->use(0, *john);
	john->use(1, *john);
	john->use(13, *john);
	john->use(3, *john);

	delete mat;
	delete john;

	return 0;
}
