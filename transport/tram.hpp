//
//  tram.hpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#ifndef tram_hpp
#define tram_hpp
#include <iostream>
#include <string>
using namespace std;
#include <stdio.h>
#include "transport.hpp"
class Tram: public Transport{
    int wheels;
    int passengers;
public:
    Tram();
    Tram(int w, int p);
    virtual void input();
    virtual void print();
};


#endif /* tram_hpp */
