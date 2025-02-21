#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string name;
                int hitPoints;
                int energyPoints;
                int attackDamage;
	public:
                ClapTrap();
                ClapTrap(const ClapTrap& obj);
                ClapTrap &operator=(const ClapTrap& object);
                ~ClapTrap();
                ClapTrap(std::string name);
                void attack(const std::string& target);
                void takeDamage(unsigned int amount);
                void beRepaired(unsigned int amount);
};

#endif