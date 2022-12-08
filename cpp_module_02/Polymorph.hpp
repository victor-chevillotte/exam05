/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:39:29 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 16:52:22 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:

		Polymorph(void);
		~Polymorph(void);

		Polymorph*		clone(void) const;

	private:

		Polymorph(const Polymorph& source);
		Polymorph&	operator=(const Polymorph& rhs);
	
	
};

#endif