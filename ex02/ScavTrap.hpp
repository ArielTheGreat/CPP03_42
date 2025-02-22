#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
                ScavTrap();
                ScavTrap(const std::string& name);
                ScavTrap(const ScavTrap& obj);
                ScavTrap& operator=(const ScavTrap& obj);
                ~ScavTrap();
                
                //override attack() of ClapTrap
                void attack(const std::string& target);
                void guardGate();
};

#endif