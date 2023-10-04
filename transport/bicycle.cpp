//
//  bicycle.cpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#include "bicycle.hpp"

Bicycle:: Bicycle(){
    engine = ' ';
    power = 0;
}


Bicycle:: Bicycle(string e, double p){
    engine = e;
    power = p;
}

void Bicycle:: input(){
    cout << "enter an engine of the bicycle: ";
    cin >> engine;
    cout << "enter a power of the bicycle: ";
    cin >> power;
}

void Bicycle:: print(){
    cout << "engine of the bicycle: " << engine << endl;
    cout << "power of the bicycle: " << power << endl;
}
Bicycle::Bicycle() : Transport("Bicycle", 0.0) {} 
