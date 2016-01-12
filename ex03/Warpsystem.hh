/*
** Warpsystem.hh for Warpsystem/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d07m/Warpsystem.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 12 13:06:17 2016 petit_x - Marlon Petit
** Last update Tue Jan 12 18:54:49 2016 marlon petit
*/

#ifndef WARPSYSTEM_HH_
# define WARPSYSTEM_HH_

#include <iostream>
#include <string>

namespace		WarpSystem
{
  class			QuantumReactor
  {
  public:
    QuantumReactor();
    bool		isStable();
    void		setStability(bool);
    bool		_stability;
  };

  class			Core
  {
  public:
    Core(WarpSystem::QuantumReactor *);
    WarpSystem::QuantumReactor	*checkReactor();
    WarpSystem::QuantumReactor	*_coreReactor;
  };
};

#endif /* !WARPSYSTEM_HH_ */
