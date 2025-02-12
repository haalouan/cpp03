#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50; 
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other){
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap default destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (this->HitPoints <= 0){
        std::cout << "ScavTrap " << this->Name << " can not attack, he is already dead" << std::endl;
        return;
    }
    if (this->EnergyPoints <= 0){
        std::cout << "ScavTrap " << this->Name << " can not attack, out of energy"<< std::endl;
        return;
    }
    EnergyPoints--;
    std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void){
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

