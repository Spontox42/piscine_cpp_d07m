/*
** Federation.hh for piscine_cpp_d07m
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 12 11:40:10 2016 petit_x - Marlon Petit
** Last update Tue Jan 12 13:39:05 2016 marlon petit
*/

#ifndef __FEDERATION_HH__
# define __FEDERATION_HH__

#include <iostream>
#include <string>

#include "Warpsystem.hh"

namespace		Federation
{
  class			Organisation
  {};

  namespace       Starfleet
  {
    class         Ship 
    {
    public:
      Ship(int length, int width, std::string name, short maxWarp);
      void	setupCore(WarpSystem::Core *);
      void	checkCore();
    private:
      int         _length;                               
      int         _width;
      std::string    _name;
      short         _maxWarp;
      WarpSystem::Core	*_core;
    };
  };

  class         Ship                                                                                    
  {                                                                                                     
  public:                                                                                               
    Ship(int length, int width, std::string name);                                       
    void      setupCore(WarpSystem::Core *);
    void      checkCore();                                                                              
  private:                                                                                              
    int         _length;                                                                                
    int         _width;                                                                                 
    std::string    _name;                                                                               
    short         _maxWarp;                                                                             
    WarpSystem::Core      *_core;                  
  };
};

#endif /* !__FEDERATION_HH__ */
