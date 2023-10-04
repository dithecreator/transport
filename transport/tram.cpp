//
//  tram.cpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#include "tram.hpp"

Tram:: Tram(){
    wheels = 0;
    passengers = 0;
}

Tram:: Tram(int w, int p){
    passengers = p;
    wheels = w;
}

void Tram:: input(){
    cout << "enter quantity of the wheels: ";
    cin >> wheels;
    cout << "enter the quantity of the passengers: ";
    cin >> passengers;
}

void Tram:: print(){
    cout << "quantity of the wheels: " << wheels << endl;
    cout << "quantity of the passengers: " << passengers << endl;
}
