/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:19:55 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/12/08 12:00:40 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock(void)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& source)
{
	(void)source;
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const std::string& Name, const std::string& Title) : name(Name), title(Title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	for (size_t i = 0; i < learnedSpells.size(); ++i)
	{
		delete learnedSpells[i];
	}
	std::cout << name << ": My job here is done!" << std::endl;
}

Warlock&	Warlock::operator=(const Warlock& rhs)
{
	(void)rhs;

	return (*this);
}

const std::string&	Warlock::getName(void) const
{
	return (name);
}

const std::string&	Warlock::getTitle(void) const
{
	return (title);
}

void	Warlock::setTitle(const std::string& newTitle)
{
	title = newTitle;
}

void	Warlock::introduce(void) const
{
	std::cout << name << ": I am " << name <<  ", " << title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	learnedSpells.push_back(spell->clone());
}

void	Warlock::forgetSpell(const std::string& spellName)
{
	for (std::vector<ASpell*>::iterator i = learnedSpells.begin(); i != learnedSpells.end(); ++i)
	{
		if ((*i)->getName() == spellName)
		{
			delete (*i);
			learnedSpells.erase(i);
			forgetSpell(spellName);
			return ;
		}
	}
}

void	Warlock::launchSpell(const std::string& spellName, const ATarget& target)
{
	for (size_t i = 0; i < learnedSpells.size(); ++i)
	{
		if (learnedSpells[i]->getName() == spellName)
			learnedSpells[i]->launch(target);
	}
}

for(std::vector<ASpell*>iterator i = learnedSpells.begin(); i != lean)
