/*
** EPITECH PROJECT, 2019
** cpp_d09_2018
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <string>
#include <ostream>
#include <iostream>

class Character {
protected:
   std::string _name;
   std::string _class;
   std::string _race;
   int _Lvl;
   int _Pv;
   int _Power;
   int _Strength;
   int _Energy;
   int _Stamina;
   int _Intelligence;
   int _Spirit;
   int _Agility;
public:
   Character(const std::string &name, int level);
   Character(Character const &other);
   ~Character();
   const std::string &getName() const;
   int getLvl() const;
   int getPv() const;
   int getPower() const;
   enum AttackRange {CLOSE,  RANGE};
   AttackRange	Range;
   int CloseAttack();
   int RangeAttack();
   void TakeDamage(int damage);
   void Heal();
   void RestorePower();
};

#endif
