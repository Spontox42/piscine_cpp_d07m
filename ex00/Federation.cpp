/*
** Federation.cpp for Federation
** 
** Made by  petit_x - Marlon Petit
** Login   < petit_x@epitech.net >
** 
** Started on  Tue Jan 12 11:57:34 2016 petit_x - Marlon Petit
** Last update Tue Jan 12 13:56:56 2016 marlon petit
*/

#include "Federation.hh"
#include "Warpsystem.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  std::cout << "The ship USS " << this->_name << " has been finished. It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl << "It can go to Warp " << this->_maxWarp << '!' << std::endl;
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
  std::cout << "The independant ship " << this->_name << " just finished its construction. It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl;                                             
}                                                                                                        
                                                                                                         
void    Federation::Ship::setupCore(WarpSystem::Core *core)                                               
{                                                                                                        
  this->_core = core;
  std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void    Federation::Ship::checkCore()                                                         
{                                                                                                        
  if (this->_core->checkReactor()->isStable() == true)
    std::cout << this->_name << ": The core is stable at the time." << std::endl;              
  else                                                                                                   
    std::cout << this->_name << ": The core is unstable at the time." << std::endl;            
}
