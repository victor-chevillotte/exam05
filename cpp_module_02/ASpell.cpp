/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:46:35 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 15:37:50 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <iostream>

ASpell::ASpell(void)
{
	std::cout << "ASpell default constructor called" << std::endl;
}

ASpell::ASpell(const ASpell& source) : name(source.name), effects(source.effects)
{
	std::cout << "ASpell default constructor called" << std::endl;
}

ASpell::ASpell(const std::string& Name, const std::string& Effects) : name(Name), effects(Effects)
{
	std::cout << "ASpell copy constructor called" << std::endl;
}

ASpell::~ASpell(void)
{
	std::cout << "ASpell destructor called" << std::endl;
}

ASpell&	ASpell::operator=(const ASpell& rhs)
{
	this->name = rhs.name;
	this->effects = rhs.effects;

	return (*this);
}

const std::string&	ASpell::getName(void) const
{
	return (name);
}

const std::string&	ASpell::getEffects(void) const
{
	return (effects);
}

void	ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}