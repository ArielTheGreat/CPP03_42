#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap claptrap;
	ScavTrap scavtrap;
	FragTrap fragtrap;
	claptrap.attack("Target_under_attack");
	scavtrap.attack("scav");
	fragtrap.attack("Frag_taget_under_default_ClapTrap_attack");
	
	ClapTrap tester1("Mikey");
	tester1.attack("Mario");
	ScavTrap tester2("Princess");
	tester2.attack("cherry");
	FragTrap tester3("Lemon");
	tester3.attack("Tree");
	
	tester1.takeDamage(5);
	tester1.beRepaired(3);
	tester1.attack("1st bad guy");
	
	tester2.takeDamage(59);
	tester2.beRepaired(39);
	tester2.attack("2nd bad guy");
	tester2.guardGate();
	
	tester3.takeDamage(90);
	tester3.beRepaired(77);
	tester3.attack("3rd bad guy");
	tester3.highFivesGuys();
	
	return 0;
}
