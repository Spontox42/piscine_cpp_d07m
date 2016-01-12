/*
** Federation.cpp for Federation
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 12 11:57:34 2016 petit_x - Marlon Petit
** Last update Tue Jan 12 19:11:51 2016 marlon petit
*/

#include <iostream>
#include <string>

#include "Federation.hh"
#include "Warpsystem.hh"
#include "Destination.hh"
#include "Borg.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  this->_home = EARTH;
  this->_location = EARTH;
  this->_shield = 100;
  this->_photonTorpedo = torpedo;
  std::cout << "The ship USS " << this->_name << " has been finished. It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl << "It can go to Warp " << this->_maxWarp << "! Weapons are set: " << this->_photonTorpedo << " torpedoes ready." <<std::endl;
}

Federation::Starfleet::Ship::Ship()
{
  this->_length = 289;
  this->_width = 132;
  this->_name = "Entreprise";
  this->_maxWarp = 6;
  this->_home = EARTH;
  this->_location = EARTH;
  this->_shield = 100;
  this->_photonTorpedo = 20;
  std::cout << "The ship USS " << this->_name << " has been finished. It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl << "It can go to Warp " << this->_maxWarp << "! Weapons are set: " << this->_photonTorpedo << " torpedoes ready." <<std::endl;
}

void	Federation::Starfleet::Ship::fire(int torpedoes, Borg::Ship *target)
{
  if (this->_photonTorpedo >= torpedoes)
    {
      this->_photonTorpedo -= torpedoes;
      std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo << " torpedoes remaining" <<std::endl;
      target->_shield -= (50 * torpedoes);
    }
  else if (this->_photonTorpedo == 0)
    std::cout << this->_name << ": No more torpedo to fire, " << this->_captain->_name << '!' <<std::endl;
  else
    std::cout << this->_name << ": No enough torpedoes to fire, " << this->_captain->_name << '!' <<std::endl;
}

void	Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
  this->_core = core;
  std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void	Federation::Starfleet::Ship::checkCore()
{
  if (this->_core->checkReactor()->isStable() == true)
    std::cout << "USS " << this->_name << ": The core is stable at the time." << std::endl;
  else
    std::cout << "USS " << this->_name << ": The core is unstable at the time." << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name)                
{                                                                                                        
  this->_length = length;                                                                                
  this->_width = width;                                                                                  
  this->_name = name;                                                                                    
  this->_maxWarp = 1; 
  this->_home = VULCAN;
  this->_location = VULCAN;
  std::cout << "The independant ship " << this->_name << " just finished its construction. It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl;                                             
}                                                                                                        
                                                                                                         
void    Federation::Ship::setupCore(WarpSystem::Core *core)                                               
{                                                                                                        
  this->_core = core;
  std::cout << this->_name << ": The core is set." << std::endl;
}

void    Federation::Ship::checkCore()                                                         
{                                                                                                        
  if (this->_core->checkReactor()->isStable() == true)
    std::cout << this->_name << ": The core is stable at the time." << std::endl;              
  else                                                                                                   
    std::cout << this->_name << ": The core is unstable at the time." << std::endl;            
}

Federation::Starfleet::Captain::Captain(std::string name)
{
  this->_name = name;
  this->_age = 42;
}

std::string	Federation::Starfleet::Captain::getName()
{
  return (this->_name);
}

int	Federation::Starfleet::Captain::getAge()
{
  return (this->_age);
}

void	Federation::Starfleet::Captain::setAge(int age)
{
  this->_age = age;
}

void	Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *captain)
{
  this->_captain = captain;
  std::cout << this->_captain->getName() << ": I'm glad to be the captain of the USS " << this->_name << '.' << std::endl;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
  this->_name = name;
  std::cout << "Ensign " << this->_name << ", awaiting orders." << std::endl;
}

bool	Federation::Starfleet::Ship::move(int warp, Destination d)
{
  if (warp <= this->_maxWarp && d != this->_location && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = d;
      return (true);
    }
  return (false);
}

bool	Federation::Starfleet::Ship::move(int warp)
{
  if (warp <= this->_maxWarp && this->_home != this->_location && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = this->_home;
      return (true);
    }
  return (false);
}

bool	Federation::Starfleet::Ship::move(Destination d)
{
  if (d != this->_location && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = d;
      return (true);
    }
  return (false);
}

bool	Federation::Starfleet::Ship::move()
{
  if (this->_home != this->_location && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = this->_home;
      return (true);
    }
  return (false);
}

bool    Federation::Ship::move(int warp, Destination d)
{
  if (warp <= this->_maxWarp && d != this->_location && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = d;
      return (true);
    }
  return (false);
}

bool	Federation::Ship::move(int warp)
{
  if (warp <= this->_maxWarp && this->_home != this->_location && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = this->_home;
      return (true);
    }
  return (false);
}

bool	Federation::Ship::move(Destination d)
{
  if (d != this->_location && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = d;
      return (true);
    }
  return (false);
}

bool	Federation::Ship::move()
{
  if (this->_home != this->_location && this->_core->checkReactor()->isStable() == true)
    {
      this->_location = this->_home;
      return (true);
    }
  return (false);
}

int	Federation::Starfleet::Ship::getShield()
{
  return (this->_shield);
}

void	Federation::Starfleet::Ship::setShield(int shield)
{
  this->_shield = shield;
}

int	Federation::Starfleet::Ship::getTorpedo()
{
  return (this->_photonTorpedo);
}

void	Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
  this->_photonTorpedo = torpedo;
}

WarpSystem::Core	*Federation::Ship::getCore()
{
  return (this->_core);
}
