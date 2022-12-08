/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brickwall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:51:18 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 17:48:36 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"
#include <iostream>
#include "ATarget.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall")
{
	std::cout << "BrickWall constructor called" << std::endl;
}

BrickWall::~BrickWall(void)
{
	std::cout << "BrickWall destructor called" << std::endl;
}

BrickWall*	BrickWall::clone(void) const
{
	return (new BrickWall());
}
