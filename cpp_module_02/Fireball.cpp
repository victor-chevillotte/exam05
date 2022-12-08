/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:44:35 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 16:51:29 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"
#include <iostream>

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp")
{
	std::cout << "Fireball default constructor called" << std::endl;
}

Fireball::~Fireball(void)
{
	std::cout << "Fireball destructor called" << std::endl;
}

Fireball*	Fireball::clone(void) const
{
	return (new Fireball());
}
