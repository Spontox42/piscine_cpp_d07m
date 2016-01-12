/*
** Borg.hh for Borg/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d07m/ex01/Borg.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 12 14:25:04 2016 petit_x - Marlon Petit
** Last update Tue Jan 12 14:39:35 2016 marlon petit
*/

#ifndef BORG_HH_
# define BORG_HH_

#include <iostream>
#include <string>

#include "Warpsystem.hh"
#include "Federation.hh"

namespace		Borg
{
  class			Ship
  {
  public:
    Ship();
    void		setupCore(WarpSystem::Core *);
    void		checkCore();
    int			_side;
    short		_maxWarp;
    WarpSystem::Core	*_core;
  };
};

#endif /* !BORG_HH_ */
