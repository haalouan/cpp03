#ifndef  CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int HitPoints;
        int EnergyPoints; 
        int AttackDamage;

    public :
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();

        std::string getName(void) const;
        int getHitPoints(void) const;
        int getEnergyPoints(void) const; 
        int getAttackDamage(void) const;
        
        void setName(std::string Name);
        void setHitPoints(int HitPoints);
        void setEnergyPoints(int EnergyPoints); 
        void setAttackDamage(int AttackDamage);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif
