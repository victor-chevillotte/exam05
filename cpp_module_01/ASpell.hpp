/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:29:26 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/12/08 11:02:24 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <string>

class ATarget;

class ASpell
{
	protected:

		std::string	name;
		std::string	effects;
		
	public:
	
		ASpell(void);
		ASpell(const ASpell& source);
		ASpell(const std::string& name, const std::string& effects);
		virtual ~ASpell(void);

		ASpell&	operator=(const ASpell& rhs);
		
		const std::string&	getName(void) const;
		const std::string&	getEffects(void) const;
		virtual ASpell*		clone(void) const = 0;
		
		void				launch(const ATarget& target) const;
		
};

#endif
