#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name){
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
    this->Name = Name;
    this->HitPoints = 10;
    this->EnergyPoints = 10; 
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other) : Name(other.Name), HitPoints(other.HitPoints), EnergyPoints(other.EnergyPoints), AttackDamage(other.AttackDamage){
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other){
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap default destructor called" << std::endl;
}


void ClapTrap::attack(const std::string& target){
    if (this->HitPoints <= 0){
        std::cout << "ClapTrap " << this->Name << " can not attack, he is already dead" << std::endl;
        return;
    }
    if (this->EnergyPoints <= 0){
        std::cout << "ClapTrap " << this->Name << " can not attack, out of energy"<< std::endl;
        return;
    }
    EnergyPoints--;
    std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->HitPoints <= 0){
        std::cout << "ClapTrap " << this->Name << " is already dead"<< std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->Name << " takes " << amount << " damages" << std::endl;
    this->HitPoints -= amount;
    if (this->HitPoints <= 0){
        std::cout << "ClapTrap " << this->Name << " is dead"<< std::endl;
        return;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->HitPoints <= 0){
        std::cout << "ClapTrap " << this->Name << " can not be repaired, he is already dead"<< std::endl;
        return;
    }
    if (this->EnergyPoints <= 0){
        std::cout << "ClapTrap " << this->Name << " can not be repaired, out of energy"<< std::endl;
        return;
    }
    this->HitPoints += amount;
    this->EnergyPoints--;
    std::cout << "ClapTrap " << this->Name << " repairs itself for " << amount << std::endl;
}
