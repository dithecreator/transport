//
//  car.hpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#ifndef car_hpp
#define car_hpp
#include <iostream>
#include <string>
using namespace std;
#include <stdio.h>
#include "transport.hpp"
class Car: public Transport{
    string model;
    string color;
    public:
    Car();
    Car(string m, string c);
    virtual void input();
    virtual void print();
};
#endif /* car_hpp */
