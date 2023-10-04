//
//  airplane.cpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#include "airplane.hpp"
Airplane:: Airplane(){
    seats = 0;
    pilots = 0;
}

Airplane:: Airplane(int s, int p){
    seats = s;
    pilots = p;
}

void Airplane:: input(){
    cout << "enter quantity of the seats: ";
    cin >> seats;
    cout << "enter the quantity of the pilots: ";
    cin >> pilots;
}

void Airplane:: print(){
    cout << "quantity of the seats: " << seats << endl;
    cout << "quantity of the pilots: " << pilots << endl;
}
