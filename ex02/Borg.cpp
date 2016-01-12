/*
** Borg.cpp for Borg/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d07m/ex01/Borg.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 12 14:27:11 2016 petit_x - Marlon Petit
** Last update Tue Jan 12 15:50:58 2016 marlon petit
*/

#include <iostream>
#include <string>

#include "Warpsystem.hh"
#include "Federation.hh"
#include "Borg.hh"
#include "Destination.hh"

Borg::Ship::Ship()
{
  this->_side = 300;
  this->_maxWarp = 9;
  this->_home = UNICOMPLEX;
  this->_location = UNICOMPLEX;
  
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl << "Your biological characteristics and technologies will be assimilated." << std::endl << "Resistance is futile." << std::endl;
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
