/*
** Borg.cpp for Borg/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d07m/ex01/Borg.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 12 14:27:11 2016 petit_x - Marlon Petit
** Last update Tue Jan 12 19:10:06 2016 marlon petit
*/

#include <iostream>
#include <string>

#include "Federation.hh"

Borg::Ship::Ship(int wF, short repair)
{
  this->_side = 300;
  this->_maxWarp = 9;
  this->_home = UNICOMPLEX;
  this->_location = UNICOMPLEX;
  this->_shield = 100;
  this->_weaponFrequency = wF;
  this->_repair = repair;
  
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl << "Your biological characteristics and technologies will be assimilated." << std::endl << "Resistance is futile." << std::endl;
}

Borg::Ship::Ship(int wF)
{
  this->_side = 300;
  this->_maxWarp = 9;
  this->_home = UNICOMPLEX;
  this->_location = UNICOMPLEX;
  this->_shield = 100;
  this->_weaponFrequency = wF;
  this->_repair = 3;

  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl << "Your biological characteristics and technologies will be assimilated." << std::endl << "Resistance is futile." << std::endl;
}

void	Borg::Ship::fire(Federation::Starfleet::Ship *target)
{
  std::cout << "Firing on target with " << this->_weaponFrequency << "GW frequency." << std::endl;
  target->_shield -= this->_weaponFrequency;
}

void	Borg::Ship::fire(Federation::Ship *target)
{
  std::cout << "Firing on target with " << this->_weaponFrequency << "GW frequency." << std::endl;
  target->_core->_coreReactor->setStability(false);
}

void	Borg::Ship::repair()
{
  if (this->_repair > 0)
    {
      this->_repair -= 1;
      this->_shield = 100;
      std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions." << std::endl;
    }
  else
    std::cout << "Energy cells depleted, shield weakening." << std::endl;
}

int	Borg::Ship::getShield()
{
  return (this->_shield);
}

void	Borg::Ship::setShield(int shield)
{
  this->_shield = shield;
}

int	Borg::Ship::getWeaponFrequency()
{
  return (this->_weaponFrequency);
}

void	Borg::Ship::setWeaponFrequency(int freq)
{
  this->_weaponFrequency = freq;
}

short	Borg::Ship::getRepair()
{
  return (this->_repair);
}

void	Borg::Ship::setRepair(short rep)
{
  this->_repair = rep;
}

void	Borg::Ship::setupCore(WarpSystem::Core *core)
{
  this->_core = core;
}

void	Borg::Ship::checkCore()
{
  if (this->_core->checkReactor()->isStable() == true)
    std::cout << "Everything is in order." << std::endl;
  else
    std::cout << "Critical failure imminent." << std::endl;
}

bool    Borg::Ship::move(int warp, Destination d)
{
  if (warp <= this->_maxWarp && d != this->_location && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = d;
      return (true);
    }
  return (false);
}

bool	Borg::Ship::move(int warp)
{
  if (warp <= this->_maxWarp && this->_location != this->_home && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = this->_home;
      return (true);
    }
  return (false);
}

bool	Borg::Ship::move(Destination d)
{
  if (d != this->_location && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = d;
      return (true);
    }
  return (false);
}

bool	Borg::Ship::move()
{
  if (this->_home != this->_location && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = this->_home;
      return (true);
    }
  return (false);
}

