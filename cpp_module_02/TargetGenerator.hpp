/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:34:00 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/04 17:37:57 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ATarget.hpp"
# include <vector>

class TargetGenerator
{

	public:

		TargetGenerator(void);
		~TargetGenerator(void);
		
		void		learnTargetType(ATarget* target);
		void		forgetTargetType(const std::string& type);
		ATarget*	createTarget(const std::string& type);


	private:

		TargetGenerator(const TargetGenerator& source);
		TargetGenerator&	operator=(const TargetGenerator& rhs);		
		
		std::vector<ATarget*>	learnedTargets;	
};

#endif
