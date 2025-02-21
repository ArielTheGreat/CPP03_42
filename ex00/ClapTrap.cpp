#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called (No parameters given)" << std::endl;
    name = "Nonamed";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name_input)
{
    std::cout << "Default constructor called (Name input given)" << std::endl;
    name = name_input;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}