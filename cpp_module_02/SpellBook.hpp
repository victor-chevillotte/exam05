/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:58:49 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 17:06:04 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include "ASpell.hpp"
# include <vector>

class SpellBook
{
	public:

		SpellBook(void);
		~SpellBook(void);

		void	learnSpell(ASpell* spell);
		void	forgetSpell(const std::string& spellName);
		ASpell*	createSpell(const std::string& spellName);

	private:

		SpellBook(const SpellBook& source);
		SpellBook&	operator=(const SpellBook& rhs);

		std::vector<ASpell*>	learnedSpells;
	
};

#endif
