/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:37:05 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 15:42:09 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <string>
# include "ASpell.hpp"

class ATarget
{
	public:

		ATarget(void);
		ATarget(const std::string& type);
		ATarget(const ATarget& source);
		virtual ~ATarget(void);

		ATarget&	operator=(const ATarget& rhs);

		virtual ATarget*		clone(void) const = 0;
		
		const std::string&	getType(void) const;
		void				getHitBySpell(const ASpell& spell) const;

	private:

		std::string	type;
	
};

#endif
