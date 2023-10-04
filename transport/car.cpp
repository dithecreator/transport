//
//  car.cpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#include "car.hpp"
Car:: Car(){
    model = ' ';
    color = ' ';
}

Car:: Car(string m, string c){
    model = m;
    color = c;
}

void Car:: input(){
    cout << "enter the model of car: ";
    cin >> model;
    
    cout << "enter the color of car: ";
    cin >> color;
}

void Car:: print(){
    cout << "model of the car: " << model << endl;
    cout << "color of the car: " << color << endl;
}
