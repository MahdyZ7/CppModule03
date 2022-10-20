/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:24:42 by ayassin           #+#    #+#             */
/*   Updated: 2022/10/20 11:24:43 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap{
	public:
		FragTrap(void);
		FragTrap(const std::string pname);
		FragTrap(FragTrap const &src);
		~FragTrap(void);

		FragTrap &operator=(FragTrap const &cpy);
		void highFivesGuys(void);
	protected:
		const static unsigned int base_eng = 100;
		const static unsigned int base_dmg = 30;
};
#endif