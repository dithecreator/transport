//
//  ship.hpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#ifndef ship_hpp
#define ship_hpp
#include <iostream>
#include <string>
using namespace std;
#include <stdio.h>
#include "transport.hpp"
class Ship: public Transport{
    string type;
    double weight;
public:
    Ship();
    Ship(string t, double w);
    virtual void input();
    virtual void print();
};
#endif /* ship_hpp */
