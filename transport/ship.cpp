//
//  ship.cpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#include "ship.hpp"

Ship:: Ship(){
    type = ' ';
    weight = 0;
}

Ship:: Ship(string t, double w){
    type = t;
    weight = w;
}

void Ship:: input(){
    cout << "enter the type of ship: ";
    cin >> type;
    
    cout << "enter the weight of ship: ";
    cin >> weight;
}

void Ship:: print(){
    cout << "type of the car: " << type << endl;
    cout << "weight of the car: " << weight << endl;
}

