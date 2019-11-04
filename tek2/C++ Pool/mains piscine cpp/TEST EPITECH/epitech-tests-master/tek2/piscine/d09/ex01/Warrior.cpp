/*
** EPITECH PROJECT, 2019
** cpp_d09_2018
** File description:
** Warrior
*/

#include "Warrior.hpp"
#include <iostream>

Warrior::Warrior(const std::string &name, int level, const std::string weaponName) : Character(name, level)
{
    _class = "Warrior";
    _race = "Dwarf";
    _Lvl = level;
    _Power = 100;
    _Strength = 6;
    _Stamina = 12;
    _Intelligence = 6;
    _Spirit = 5;
    _Agility = 7;
    _weaponName = weaponName;
    Range = CLOSE;
    std::cout << "I'm " << _name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{}

int Warrior::CloseAttack()
{
    int damage = 0;
    if (_Power < 30){
        std::cout << _name << " out of power" << std::endl;
        return (0);
    } else if (Range == CLOSE) {
        damage = 20 + _Strength;
        _Power -= 30;
        std::cout<<_name<<" strikes with his "<< _weaponName <<std::endl;
	    return (damage);
    }
    return (0);
}

int Warrior::RangeAttack()
{
    if (_Power < 10)
	std::cout<<_name<<" out of power"<<std::endl;
    else if (Range == RANGE) {
	_Power = _Power - 10;
	Range = CLOSE;
	std::cout<<_name<<" intercepts"<<std::endl;
    }
    return (0);
}