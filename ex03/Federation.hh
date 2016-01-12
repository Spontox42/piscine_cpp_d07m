/*
** Federation.hh for piscine_cpp_d07m
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 12 11:40:10 2016 petit_x - Marlon Petit
** Last update Tue Jan 12 19:12:00 2016 marlon petit
*/

#ifndef __FEDERATION_HH__
# define __FEDERATION_HH__

#include <iostream>
#include <string>

#include "Destination.hh"
#include "Warpsystem.hh"
#include "Borg.hh"

namespace		Federation
{
  class			Organisation
  {};
  namespace       Starfleet
  {
    class               Captain
    {
    public:
      Captain(std::string);
      std::string       getName();
      int               getAge();
      void              setAge(int);
      std::string      _name;
      int               _age;
    };
    class               Ensign
    {
    public:
      explicit Ensign(std::string);
      std::string       _name;
    };
    class         Ship 
    {
    public:
      Ship(int length, int width, std::string name, short maxWarp, int torpedo);
      Ship();
      void	setupCore(WarpSystem::Core *);
      void	checkCore();
      void	promote(Federation::Starfleet::Captain *);
      bool                move(int warp, Destination d);
      bool	move(int);
      bool	move(Destination);
      bool	move();
      int getShield();
      void setShield(int);
      int getTorpedo();
      void setTorpedo(int);
      void fire(Borg::Ship *);
      void fire(int torpedoes, Borg::Ship *);
      int         _length;                               
      int         _width;
      int _shield;
      int _photonTorpedo;
      std::string    _name;
      short         _maxWarp;
      Destination	_location;
      Destination	_home;
      Federation::Starfleet::Captain	*_captain;
      WarpSystem::Core	*_core;
    };
  };

  class         Ship                                                                                    
  {                                                                                                     
  public:                                                                                               
    Ship(int length, int width, std::string name);                                       
    void      setupCore(WarpSystem::Core *);
    void      checkCore();
    WarpSystem::Core	*getCore();
    bool                move(int warp, Destination d);
    bool      move(int);
    bool      move(Destination);
    bool      move();
    int         _length;                                                                                
    int         _width;       
    Destination       _location;                                                                        
    Destination       _home;
    std::string    _name;                                                                               
    short         _maxWarp;                                                                             
    WarpSystem::Core      *_core;                  
  };
};

#endif /* !__FEDERATION_HH__ */
