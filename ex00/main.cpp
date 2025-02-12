#include "ClapTrap.hpp"

int main() {
    ClapTrap robot("Clappy");

    robot.attack("Target1");

    robot.takeDamage(5);
    robot.takeDamage(6);

    robot.beRepaired(4);

    ClapTrap bot2("Bobby");
    bot2.takeDamage(3);
    bot2.beRepaired(5);

    return 0;
}
