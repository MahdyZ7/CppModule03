/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:24:35 by ayassin           #+#    #+#             */
/*   Updated: 2022/10/20 11:24:36 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string pname);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap(void);

		DiamondTrap &operator=(DiamondTrap const &cpy);
		void whoAmI(void);
	private:
		std::string name;
};
#endif