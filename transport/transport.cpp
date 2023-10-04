//
//  transport.cpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#include "transport.hpp"
Transport:: Transport(){
    name = ' ';
    fuel = ' ';
}
string Transport:: getFuel(){
    return fuel;
}


string Transport:: getName(){
    return name;
}

void Transport:: setName(string n){
    name = n;
    
}

void Transport:: setFuel(string f){
    fuel = f;
}
