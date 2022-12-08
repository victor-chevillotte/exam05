/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:14:17 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 17:22:18 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock
{
	public:
	
		Warlock(const std::string& name, const std::string& title);
		~Warlock(void);

		const std::string&	getName(void) const;
		const std::string&	getTitle(void) const;
		void				setTitle(const std::string& Title);
		void				introduce(void) const;
		void				learnSpell(ASpell* spell);
		void				forgetSpell(const std::string& spellName);
		void				launchSpell(const std::string& spellName, const ATarget& target);

	private:

		Warlock(void);
		Warlock(const Warlock& source);
		Warlock& operator=(const Warlock& rhs);
		std::string	name;
		std::string	title;
		SpellBook	book;
	
};

#endif
