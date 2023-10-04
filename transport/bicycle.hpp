//
//  bicycle.hpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#ifndef bicycle_hpp
#define bicycle_hpp
#include <iostream>
#include <string>
using namespace std;
#include <stdio.h>
#include "transport.hpp"
class Bicycle : public Transport {
    string engine;
    double power;
    public:
    Bicycle();
    Bicycle(string e, double p);
    virtual void input();
    virtual void print();
};
#endif /* bicycle_hpp */
