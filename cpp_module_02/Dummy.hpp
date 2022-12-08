/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:47:53 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 15:50:53 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class Dummy : public ATarget
{
	public:

		Dummy(void);
		~Dummy(void);

		Dummy*	clone(void) const;

	private:

		Dummy& operator=(const Dummy& rhs);
		Dummy(const Dummy& source);
	
};

#endif
