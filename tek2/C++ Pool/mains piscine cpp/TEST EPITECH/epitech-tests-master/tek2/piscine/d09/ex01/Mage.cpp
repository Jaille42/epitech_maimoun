/*
** EPITECH PROJECT, 2019
** ex03
** File description:
** Mage
*/

#include "Mage.hpp"
#include <iostream>

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
    _name = name;
    _Lvl = level;
    _class = "Mage";
    _race = "Gnome";
    _Pv = 100;
    _Power = 100;
    _Strength = 6;
    _Stamina = 6;
    _Intelligence = 12;
    _Spirit = 11;
    _Agility = 7;
    Range = CLOSE;
    std::cout << _name << " teleported" <<std::endl;
}

Mage::~Mage()
{}

int Mage::CloseAttack()
{
    if (_Power < 10)
	    std::cout<<_name<<" out of power"<<std::endl;
    else if (Range == CLOSE) {
	    _Power = _Power - 10;
	    Range = RANGE;
	    std::cout<<_name<<" blinks"<<std::endl;
    }
    return (0);
}

int Mage::RangeAttack()
{
    if (_Power < 25)
	    std::cout<<_name<<" out of power"<<std::endl;
    else if (Range == RANGE) {
	    int damage = _Spirit + 20;
	    _Power -= 25;
	    std::cout<<_name<<" launches a fire ball"<<std::endl;
	    return (damage);
    }
    return (0);
}

void Mage::RestorePower()
{
    if (_Intelligence + 50 + _Power > 100 )
	    _Power = 100;
    else
	    _Power += _Intelligence + 50;
        std::cout<<_name<<" takes a mana potion"<<std::endl;
}
