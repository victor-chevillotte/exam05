/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:38:19 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 17:45:55 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"
#include <iostream>

TargetGenerator::TargetGenerator(void)
{
	std::cout << "TargetGenerator constructor called" << std::endl;
}

TargetGenerator::~TargetGenerator(void)
{
	for (size_t i = 0; i < learnedTargets.size(); ++i)
	{
		delete learnedTargets[i];
	}
	std::cout << "TargetGenerator destructor called" << std::endl;
}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	for (size_t i = 0; i < learnedTargets.size(); ++i)
	{
		if (learnedTargets[i]->getType() == target->getType())
			return ;
	}
	learnedTargets.push_back(target->clone());
}

void	TargetGenerator::forgetTargetType(const std::string& type)
{
	for (size_t i = 0; i < learnedTargets.size(); ++i)
	{
		if (learnedTargets[i]->getType() == type)
		{
			delete learnedTargets[i];
			learnedTargets.erase(learnedTargets.begin() + i);
			return ;
		}
	}
}

ATarget*	TargetGenerator::createTarget(const std::string& type)
{
	for (size_t i = 0; i < learnedTargets.size(); ++i)
	{
		if (learnedTargets[i]->getType() == type)
			return (learnedTargets[i]->clone());
	}
	return (NULL);
}