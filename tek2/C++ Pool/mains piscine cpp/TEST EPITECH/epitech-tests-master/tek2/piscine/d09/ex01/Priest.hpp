/*
** EPITECH PROJECT, 2019
** ex03
** File description:
** Priest
*/

#ifndef PRIEST_HPP_
#define PRIEST_HPP_

#include "Character.hpp"
#include "Mage.hpp"

class Priest : public Mage{
public:
    Priest(const std::string &name, int level);
    int	CloseAttack();
    void Heal();
protected:
private:
};

#endif /* !PRIEST_HPP_ */
