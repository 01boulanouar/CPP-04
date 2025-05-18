/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:51:04 by moboulan          #+#    #+#             */
/*   Updated: 2025/05/09 10:54:14 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	_name = "default";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;

}

Character::Character(std::string const &name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;

}

Character::Character(const Character &copy)
{
	_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character &Character::operator=(const Character &copy)
{
    if (this != &copy)
	{
		_name = copy._name;
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

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if(_inventory[i])
			delete _inventory[i];
	}		
}

std::string const &Character::getName(void) const
{
	return (_name);
}

void Character::equip(AMateria *m)
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

void Character::unequip(int idx)
{
	if (0 <= idx && idx < 4 && _inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (0 <= idx && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}
