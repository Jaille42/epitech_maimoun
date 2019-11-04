/*
** EPITECH PROJECT, 2019
** cpp_d09_2018
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name, int level) : _name(name), _Lvl(level), _Pv(100), _Power(100),
   _Strength(5), _Stamina(5), _Intelligence(5), _Spirit(5), _Agility(5), Range(CLOSE){
   std::cout << _name << " Created" << std::endl;
}

Character::~Character()
{}

const std::string &Character::getName() const
{
    return(_name);
}

int Character::getLvl() const
{
   return (_Lvl);
}

int Character::getPv() const
{
    return(_Pv);
}

int Character::getPower() const
{
   return (_Power);
}

int Character::CloseAttack()
{
    int Damage = 0;

    Damage = 10 + _Strength;
    if (_Power >= 10){
        _Power = _Power - 10;
        std::cout << _name << " strikes with a wooden stick" << std::endl;
        return (Damage);
    } else {
	   std::cout<<_name<<" out of power"<<std::endl;
	   return (0);
   }
}

int Character::RangeAttack()
{
    int Damage = 5 + _Strength;
    
   if (_Power >= 10) {
	   _Power = _Power - 10;
	   std::cout<<_name<<" tosses a stone"<<std::endl;
	return (Damage);
   } else {
	   std::cout<<_name<<" out of power"<<std::endl;
	   return (0);
   }
}

void Character::TakeDamage(int damage)
{
   if (_Pv > damage) {
	   _Pv -= damage;
	   std::cout<<_name<<" takes "<<damage<<" damage"<<std::endl;
   } else {
	   _Pv -= damage;
	   std::cout<<_name<<" out of combat"<<std::endl;
   }
}

void Character::Heal()
{
    if (_Pv >= 50)
	   _Pv = 100;
    else
	   _Pv += 50;
    std::cout<<_name<<" takes a potion"<<std::endl;
}

void Character::RestorePower()
{
   _Power = 100;
   std::cout << _name << " eats" << std::endl;
}