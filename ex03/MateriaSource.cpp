/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/09 10:54:14 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource: Default Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    std::cout << "MateriaSource: Copy Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "MateriaSource: Copy Assignment operator" << std::endl;
    if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (copy._inventory[i])
				_inventory[i] = copy._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
    return (*this);
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource: Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if(_inventory[i])
			delete _inventory[i];
	}	
}


void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m->clone();
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
			return _inventory[i]->clone();
	}
	return (NULL);
}
