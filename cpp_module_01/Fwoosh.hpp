/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:39:29 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 15:44:10 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:

		Fwoosh(void);
		~Fwoosh(void);

		Fwoosh*		clone(void) const;

	private:

		Fwoosh(const Fwoosh& source);
		Fwoosh&	operator=(const Fwoosh& rhs);
	
	
};

#endif