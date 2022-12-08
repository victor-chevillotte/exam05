/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:44:35 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 15:47:16 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"
#include <iostream>

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed")
{
	std::cout << "Fwoosh default constructor called" << std::endl;
}

Fwoosh::~Fwoosh(void)
{
	std::cout << "Fwoosh destructor called" << std::endl;
}

Fwoosh*	Fwoosh::clone(void) const
{
	return (new Fwoosh());
}
