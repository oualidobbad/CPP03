#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "Diamond Trap default constructor called " << std::endl;
	this->name = "";
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap Parameter constructor called " << std::endl;
	this->name = name;
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap):
	ClapTrap(diamondTrap) ,FragTrap(diamondTrap) ,ScavTrap(diamondTrap)
{
	std::cout << "DiamondTrap copy constructor called " << std::endl;
	this->name = diamondTrap.name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)	
{
	std::cout << "DiamondTrap copy assignment constructor called " << std::endl;
	if (this != &diamondTrap)
	{
		ClapTrap::operator=(diamondTrap);
		FragTrap::operator=(diamondTrap);
		ScavTrap::operator=(diamondTrap);
		this->name = diamondTrap.name;
	}
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
	std::cout << "DiamonTrap name: " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamonTrap destructor called"<<std::endl;
}