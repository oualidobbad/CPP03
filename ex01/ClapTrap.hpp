#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hitPoint;
		unsigned int energyPoint;
		unsigned int attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& clapTrap);
		ClapTrap& operator=(const ClapTrap& clapTrap);
		~ClapTrap();

		//============================= public methodes ==============================
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif
