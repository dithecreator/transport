//
//  transport.hpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#ifndef transport_hpp
#define transport_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include "tram.hpp"
#include "car.hpp"
#include "airplane.hpp"
#include "bicycle.hpp"
#include "ship.hpp"
using namespace std;
class Transport{
protected:
    string name;
    string fuel;
  
    
public:
    Transport();
    virtual  string getName();
    virtual  string getFuel();
    virtual  void setName(string n);
    virtual  void setFuel(string f);
};
#endif /* transport_hpp */
