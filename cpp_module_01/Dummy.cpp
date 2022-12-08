/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:51:18 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 15:53:35 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"
#include <iostream>
#include "ATarget.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy")
{
	std::cout << "Dummy constructor called" << std::endl;
}

Dummy::~Dummy(void)
{
	std::cout << "Dummy destructor called" << std::endl;
}

Dummy*	Dummy::clone(void) const
{
	return (new Dummy());
}
