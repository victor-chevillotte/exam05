/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:39:29 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 16:49:56 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class Fireball : public ASpell
{
	public:

		Fireball(void);
		~Fireball(void);

		Fireball*		clone(void) const;

	private:

		Fireball(const Fireball& source);
		Fireball&	operator=(const Fireball& rhs);
	
	
};

#endif