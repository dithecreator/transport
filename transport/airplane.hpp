//
//  airplane.hpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#ifndef airplane_hpp
#define airplane_hpp
#include <iostream>
#include <string>
using namespace std;
#include <stdio.h>
#include "transport.hpp"
class Airplane: public Transport{
    int seats;
    int pilots;
public:
    Airplane();
    Airplane(int s, int p);
    virtual void input();
    virtual void print();
};
#endif /* airplane_hpp */
