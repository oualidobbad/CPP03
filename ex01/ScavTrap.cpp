#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	std::cout << "ScavTrap constructor called"<<std::endl;
	name = nullptr;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap parameter constructor called" << std::endl;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
}
ScavTrap::ScavTrap(const ScavTrap& scavTrap):ClapTrap(scavTrap)
{
	std::cout << "scavTrap copy constructor called"<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	if (this != &scavTrap)
		ClapTrap::operator=(scavTrap);
	std::cout << "scavTrap assignmet operator called" << std::endl;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
	if (energyPoint == 0 || hitPoint == 0)
	{
		std::cout << "ScavTrap: "+name+ " can't attack" << std::endl;
		return ;
	}
	energyPoint--;
	std::cout << "ScavTrap "+name + " attack " << target << ",  causing " << attackDamage <<  " point Damages" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "destructor of scavTrap called"<< std::endl;
}