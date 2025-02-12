#include "FragTrap.hpp"

int main() {
    FragTrap frag("fragy");
    frag.attack("Enemy");
    frag.takeDamage(30);
    frag.beRepaired(20);
    frag.highFivesGuys();
    return 0;
}