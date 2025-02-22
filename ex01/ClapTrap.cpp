#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called (No parameters given)" << std::endl;
    name = "Nonamed";
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name_input)
{
    std::cout << "Default constructor called (Name input given)" << std::endl;
    name = name_input;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "Object copy constructor callled" << std::endl;
    name = obj.name;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "Equal operator called" << std::endl;
    if (this != &obj)
	{
		name = obj.name;
        HitPoints = obj.HitPoints;
        EnergyPoints = obj.EnergyPoints;
        AttackDamage = obj.AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoints <= 0)
	{
		std::cout << "No Energy left!" << "\n";
		return ;
	}
	if (this->HitPoints <= 0 )
	{
		std::cout << "No HP!" << this->name << " dead!" << "\n";
		return ;	
	}
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!" << std::endl;
    EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints <= 0 )
	{
		std::cout << "No HP! Dead already!" << "\n";
		return ;	
	}
    HitPoints -= amount;
    std::cout << "ClapTrap " << this->name << " has been attacked, receiving " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoints <= 0)
	{
		std::cout << "No Energy left!" << "\n";
		return ;
	}
	if (this->HitPoints <= 0 )
	{
		std::cout << "No HP! Dead already!" << "\n";
		return ;	
	}
    std::cout << "ClapTrap " << this->name << " has been repaired with " << amount << " points of health!" << std::endl;
    HitPoints = HitPoints + amount;
    EnergyPoints--;
}