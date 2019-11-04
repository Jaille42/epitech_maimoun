/*
** EPITECH PROJECT, 2019
** cpp_d09_2018
** File description:
** Warrior
*/

#ifndef WARRIOR_HPP_
#define WARRIOR_HPP_

#include "Character.hpp"

class Warrior : public Character{

protected:
    std::string _weaponName;

public:
    Warrior(const std::string &name, int level, std::string weaponName = "hammer");
    ~Warrior();
    int	CloseAttack();
    int	RangeAttack();
    const std::string getWeapon() const;
};

#endif /* !WARRIOR_HPP_ */
