#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
    std::cout << "FragTrap parameterized constructor called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 100; 
    this->AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other){
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap default destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target){
    if (this->HitPoints <= 0){
        std::cout << "FragTrap " << this->Name << " can not attack, he is already dead" << std::endl;
        return;
    }
    if (this->EnergyPoints <= 0){
        std::cout << "FragTrap " << this->Name << " can not attack, out of energy"<< std::endl;
        return;
    }
    EnergyPoints--;
    std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << this->Name << " requests a high five!" << std::endl;
}

