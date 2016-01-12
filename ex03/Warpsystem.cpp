/*
** Warpsystem.cpp for Warpsystem/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d07m/Warpsystem.cpp
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 12 13:06:32 2016 petit_x - Marlon Petit
** Last update Tue Jan 12 18:15:28 2016 marlon petit
*/

#include <iostream>
#include <string>

#include "Federation.hh"
#include "Warpsystem.hh"
#include "Borg.hh"
#include "Destination.hh"

WarpSystem::QuantumReactor::QuantumReactor()
{
  this->_stability = true;
}

bool	WarpSystem::QuantumReactor::isStable()
{
  return (this->_stability);
}

void	WarpSystem::QuantumReactor::setStability(bool stability)
{
  this->_stability = stability;
}

WarpSystem::Core::Core(QuantumReactor *coreReactor)
{
  this->_coreReactor = coreReactor;
}

WarpSystem::QuantumReactor	*WarpSystem::Core::checkReactor()
{
  return (this->_coreReactor);
}


