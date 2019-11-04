/*
** EPITECH PROJECT, 2019
** ex03
** File description:
** Priest
*/

#include <assert.h>
#include "Priest.hpp"
#include <iostream>

Priest::Priest(const std::string &name, int level) : Character(name, level), Mage(name, level)
{
    _name = name;
    _Lvl = level;
    _Power = 100;
    _class = "Priest";
    _race = "Orc";
    _Pv = 100;
    _Strength = 4;
    _Stamina = 4;
    _Intelligence = 42;
    _Spirit = 21;
    _Agility = 2;
    Range = CLOSE;
    std::cout<<_name<<" enters in the order"<<std::endl;
}

int Priest::CloseAttack()
{
    if (_Power >= 10) {
	    int damage = 10 + _Spirit;
	    _Power -= 10;
	    Range = RANGE;
	    std::cout<<_name<<" uses a spirit explosion"<<std::endl;
	    return (damage);
    } else {
        return (0);
    }
}

void Priest::Heal()
{
    if (_Power >= 10) {
        _Power -= 10;
        _Pv += 70;
        if (_Pv > 100){
            _Pv = 100;
            std::cout<<_name<<" casts a little heal spell"<<std::endl;
        }
    }
    else if (_Power == 0)
        std::cout<<_name<<" out of power"<<std::endl;
}