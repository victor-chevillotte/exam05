/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brickwall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:47:53 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 17:48:24 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:

		BrickWall(void);
		~BrickWall(void);

		BrickWall*	clone(void) const;

	private:

		BrickWall& operator=(const BrickWall& rhs);
		BrickWall(const BrickWall& source);
	
};

#endif
