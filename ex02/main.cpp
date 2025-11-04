#include "FragTrap.hpp"

int main ()
{
	FragTrap frag1("Alice");
	FragTrap frag2("koko");
	FragTrap frag3(frag1);
	
	frag1 = frag2;

	frag1.attack("Rice");
	frag2.beRepaired(4);
	frag3.attack("koko");
	return 0;
}
