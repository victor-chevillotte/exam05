/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:19:55 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 17:26:52 by mdesoeuv         ###   ########lyon.fr   */
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
	book.learnSpell(spell);
}

void	Warlock::forgetSpell(const std::string& spellName)
{
	book.forgetSpell(spellName);
}

void	Warlock::launchSpell(const std::string& spellName, const ATarget& target)
{
	ASpell*	launch = book.createSpell(spellName);
	if (launch != NULL)
	{
		launch->launch(target);
		delete launch;
	}
}