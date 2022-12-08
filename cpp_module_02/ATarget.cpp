/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:40:55 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 16:40:33 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

#include <iostream>

ATarget::ATarget(void)
{
	std::cout << "ATarget default constructor called" << std::endl;
}

ATarget::ATarget(const std::string& Type) : type(Type)
{
	std::cout << "ATarget constructor called" << std::endl;
}

ATarget::ATarget(const ATarget& source) : type(source.type)
{
	std::cout << "ATarget copy constructor called" << std::endl;
}

ATarget::~ATarget(void)
{
	std::cout << "ATarget destructor called" << std::endl;
}

ATarget&	ATarget::operator=(const ATarget& rhs)
{
	type = rhs.type;

	return (*this);
}

const std::string&	ATarget::getType(void) const
{
	return (type);
}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << type << " has been " << spell.getEffects() << std::endl;
}

