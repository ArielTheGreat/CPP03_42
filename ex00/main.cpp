#include "ClapTrap.hpp"

int main()
{
    ClapTrap nonamed;
    ClapTrap terminator("Terminator");
    ClapTrap clone(terminator);
    clone=terminator;
    terminator.takeDamage(9);
    terminator.beRepaired(9);
    terminator.attack("zombie");
    terminator.takeDamage(1);
    return (0);
}