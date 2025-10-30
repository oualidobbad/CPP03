#include "ClapTrap.hpp"

int main (){
	ClapTrap robot("alice");
	robot.attack("oualid");
	robot.takeDamage(5);
	robot.beRepaired(4);
	robot.takeDamage(5);
	robot.beRepaired(3);
	robot.attack("abdo");
	robot.beRepaired(10);
	return 0;
}
