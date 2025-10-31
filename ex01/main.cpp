#include "ScavTrap.hpp"

int main ()
{
	ScavTrap child("Alice");
	ScavTrap child2("koko");
	
	child2 = child;

	child.attack("Rice");
	child.beRepaired(3);
	return 0;
}
