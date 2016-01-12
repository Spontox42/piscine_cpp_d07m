/*
** Federation.hh for piscine_cpp_d07m
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 12 11:40:10 2016 petit_x - Marlon Petit
** Last update Tue Jan 12 15:11:32 2016 marlon petit
*/

#ifndef __FEDERATION_HH__
# define __FEDERATION_HH__

#include <iostream>
#include <string>

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
      std::string       _name;
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
      Ship(int length, int width, std::string name, short maxWarp);
      void	setupCore(WarpSystem::Core *);
      void	checkCore();
      void	promote(Federation::Starfleet::Captain *);
      int         _length;                               
      int         _width;
      std::string    _name;
      short         _maxWarp;
      Federation::Starfleet::Captain	*_captain;
      WarpSystem::Core	*_core;
    };
  };

  class         Ship                                                                                    
  {                                                                                                     
  public:                                                                                               
    Ship(int length, int width, std::string name);                                       
    void      setupCore(WarpSystem::Core *);
    void      checkCore();                                                                                   int         _length;                                                                                
    int         _width;                                                                                 
    std::string    _name;                                                                               
    short         _maxWarp;                                                                             
    WarpSystem::Core      *_core;                  
  };
};

#endif /* !__FEDERATION_HH__ */
