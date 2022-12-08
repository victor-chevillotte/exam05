/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:04:01 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 17:18:31 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"
#include <iostream>

SpellBook::SpellBook(void)
{
	std::cout << "SpellBook default constructor called" << std::endl;
}

SpellBook::~SpellBook(void)
{
	for (size_t i = 0; i < learnedSpells.size(); ++i)
	{
		delete	learnedSpells[i];
	}
	std::cout << "SpellBook destructor called" << std::endl;
}

void	SpellBook::learnSpell(ASpell* spell)
{
	for (size_t i = 0; i < learnedSpells.size(); ++i)
	{
		if (learnedSpells[i]->getName() == spell->getName())
			return ;
	}
	learnedSpells.push_back(spell->clone());
}

void	SpellBook::forgetSpell(const std::string& spellName)
{
	for (size_t i = 0; i < learnedSpells.size(); ++i)
	{
		if (learnedSpells[i]->getName() == spellName)
		{
			delete learnedSpells[i];
			learnedSpells.erase(learnedSpells.begin() + i);
			return ;
		}
	}
}

ASpell*	SpellBook::createSpell(const std::string& spellName)
{
	for (size_t i = 0; i < learnedSpells.size(); ++i)
	{
		if (learnedSpells[i]->getName() == spellName)
			return (learnedSpells[i]->clone());
	}
	return (NULL);
}