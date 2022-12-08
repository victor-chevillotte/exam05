/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:19:55 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/12/08 10:14:43 by vchevill         ###   ########.fr       */
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

#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock(void){
        std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const std::string& Name, const std::string& Title): name(Name) title(Title) {
        std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock& source){
       (void) source;
        std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock& Warlock::operator=(Warlock& rhs){
        (void) rhs;
        return (*this)
}

Warlock::~Warlock(void) {
        std::cout << name << ": My job here is done!" << std::endl;
}

std::string Warlock::getName(void) const {
        return(name)
} 

std::string Warlock::getTitle(void) const{
        return(title)
}

void Warlock::setTitle(const std::string& newTitle){
        title = newTitle;
}

void Warlock::introduce(void){
        std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
