#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	nome;
		Weapon		*arma;
	public:
		HumanB(std::string name);
		void	attack(void) const;
		void	setWeapon(Weapon &arm);
};

#endif
