#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap Default constructor is called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	if (this != &obj)
	{
		name = obj.name;
		HitPoints = obj.HitPoints;
		EnergyPoints = obj.EnergyPoints;
		AttackDamage = obj.AttackDamage;
	}
	return *this;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	name = obj.name;
	HitPoints = obj.HitPoints;
	EnergyPoints = obj.EnergyPoints;
	AttackDamage = obj.AttackDamage;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor is called!" << "\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Show me that handfive!" << std::endl;
}