/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchevill <vchevill@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:14:17 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/12/08 10:00:05 by vchevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>

class Warlock
{
	public:
	
		Warlock(const std::string& name, const std::string& title);
		~Warlock(void);

		const std::string	getName(void) const;
		const std::string	getTitle(void) const;
		void				introduce(void) const;
		void				setTitle(const std::string& Title);

	private:

		Warlock(void);
		Warlock(const Warlock& source);
		Warlock& operator=(const Warlock& rhs);
		std::string	name;
		std::string	title;
	
};


#pragama once
#include <string>

class Warlock {
        public :
                Warlock(const std::string& name, std::string& title);
                -Warlock(void);
                std::string getName(void);
                std::string getTitle(void);
                std::string     setName(const std::string& Name);

        private :
                Warlock(void);
                Warlock(Warlock& source);
                Warlock operator=(Warlock& rhs);
                std::string name;
                std::string title;

}


