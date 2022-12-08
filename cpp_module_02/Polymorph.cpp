/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:44:35 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 16:52:43 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"
#include <iostream>

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter")
{
	std::cout << "Polymorph default constructor called" << std::endl;
}

Polymorph::~Polymorph(void)
{
	std::cout << "Polymorph destructor called" << std::endl;
}

Polymorph*	Polymorph::clone(void) const
{
	return (new Polymorph());
}
