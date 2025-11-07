#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& diamondTrap);
		DiamondTrap& operator=(const DiamondTrap& diamondTrap);
		void attack(const std::string& target);
		void whoAmI();
		~DiamondTrap();
};




#endif