#include "ScavTrap.hpp"

int main()
{
	ClapTrap deFault;
	deFault.attack("defaultEnemy");
	ScavTrap defaultS;
	defaultS.attack("default_inScavTrap");
    defaultS.beRepaired(1);
	ScavTrap mejor(defaultS);
	mejor.takeDamage(20);
	mejor.beRepaired(1);
}