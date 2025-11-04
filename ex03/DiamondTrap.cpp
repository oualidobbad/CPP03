#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ScavTrap(), FragTrap()
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
DiamondTrap::~DiamondTrap()
{
}