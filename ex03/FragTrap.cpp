#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << "FragTrap parameter constructor called" << std::endl;
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& fragTrap):ClapTrap(fragTrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	std::cout << "FragTrap assingment operator constructor called" << std::endl;
	if (&fragTrap != this)
		ClapTrap::operator=(fragTrap);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap requests a positive high fives!" << std::endl;
}