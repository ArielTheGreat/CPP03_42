#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string name;
                int HitPoints;
                int EnergyPoints;
                int AttackDamage;
	public:
                ClapTrap();
                ClapTrap(const ClapTrap& obj);
                ClapTrap &operator=(const ClapTrap& obj);
                ~ClapTrap();
                ClapTrap(std::string name);
                void attack(const std::string& target);
                void takeDamage(unsigned int amount);
                void beRepaired(unsigned int amount);
};

#endif