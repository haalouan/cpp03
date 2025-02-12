#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("clapy");
    clap.attack("Enemy");
    clap.takeDamage(30);
    clap.beRepaired(20);
    return 0;
}
