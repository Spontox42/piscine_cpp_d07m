/*
** Borg.hh for Borg/home/petit_x/Epitech/rendu/piscine_cpp/piscine_cpp_d07m/ex01/Borg.hh
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 12 14:25:04 2016 petit_x - Marlon Petit
** Last update Tue Jan 12 19:09:27 2016 marlon petit
*/

#ifndef BORG_HH_
# define BORG_HH_

#include <iostream>
#include <string>

#include "Destination.hh"
#include "Warpsystem.hh"
#include "Federation.hh"

namespace	Federation
{
  namespace	Starfleet
  {
    class	Ship;
  };
  class		Ship;
};

namespace		Borg
{
  class			Ship
  {
  public:
    Ship(int wF, short);
    Ship(int wF);
    void		setupCore(WarpSystem::Core *);
    void		checkCore();
    bool		move(int warp, Destination d);
    bool		move(int);
    bool		move(Destination);
    bool		move();
    int			getShield();
    void		setShield(int);
    int			getWeaponFrequency();
    void		setWeaponFrequency(int);
    short		getRepair();
    void		setRepair(short);
    void		fire(Federation::Starfleet::Ship *);
    void		fire(Federation::Ship*); 
    void		repair();
    int			_side;
    short		_maxWarp;
    Destination		_home;
    Destination		_location;
    int			_shield;
    int			_weaponFrequency;
    short		_repair;
    WarpSystem::Core	*_core;
  };
};

#endif /* !BORG_HH_ */
