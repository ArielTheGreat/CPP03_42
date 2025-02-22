#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap Default constructor is called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
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

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "ScavTrap copy constructor is called!" << std::endl;
	name = obj.name;
	HitPoints = obj.HitPoints;
	EnergyPoints = obj.EnergyPoints;
	AttackDamage = obj.AttackDamage;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->EnergyPoints <= 0)
	{
		std::cout << "ScavTrap: No Energy left!" << "\n";
		return ;
	}
	if (this->HitPoints <= 0 )
	{
		std::cout << "ScavTrap: No HP!" << this->name << " dead!" << "\n";
		return ;	
	}
    std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
    EnergyPoints--;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor is called!" << "\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << name << " is now in Gate Keeper mode." << std::endl;
}
