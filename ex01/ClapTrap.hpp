/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:58:16 by ayassin           #+#    #+#             */
/*   Updated: 2022/10/20 11:20:46 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	public:
		ClapTrap(void);
		ClapTrap(const std::string pname);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();

		ClapTrap &operator=(ClapTrap const &cpy);
		 void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		void	setEng(unsigned int num);
		void	setDmg(unsigned int num);
		void	getInfo(std::string &str, int *hp_clone, int *eng_clone, int *dmg_clone);
	private:
		std::string name;
		unsigned int hp;
		unsigned int eng;
		unsigned int dmg;
};

#endif