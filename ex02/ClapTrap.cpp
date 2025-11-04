#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	name = "Default";
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 0;
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 0;
	std::cout << "parametre constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap){
	std::cout << "copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	std::cout << "copy assingnment operator constructor called" << std::endl;
	if (this == &clapTrap)
		return *this;
	this->attackDamage = clapTrap.attackDamage;
	this->energyPoint = clapTrap.energyPoint;
	this->hitPoint = clapTrap.hitPoint;
	this->name = clapTrap.name;
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "destructor of " << name << " called" << std::endl;
};


void ClapTrap::attack(const std::string& target)
{
	if (energyPoint == 0 || hitPoint == 0)
	{
		std::cout << "ClapTrap: "+name+ " can't attack" << std::endl;
		return ;
	}
	energyPoint--;
	std::cout << name + " attack " << target << ",  causing " << attackDamage <<  " point Damages" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoint < amount)
	{
		hitPoint = 0;
		std::cout << "ClapTrap " << name << " is Dead" << std::endl;
		return ;	
	}
	hitPoint -= amount;
	std::cout << "ClapTrap " << name << " damaged by " << amount << " point. HP: " << hitPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoint == 0 || energyPoint == 0)
	{
		std::cout << "ClapTrap " << name << " can't repaired cause you have " << hitPoint << " HP, " << energyPoint << " Energy Point" << std::endl;
		return ; 
	}
	energyPoint--;
	hitPoint += amount;
	std::cout << "ClapTrap " << name << " repired, now you have " << hitPoint << " HP, " << energyPoint << " Energy Point" << std::endl;
}

