//
//  main.cpp
//  transport
//
//  Created by Дима on 04.10.23.
//

#include <iostream>
#include "transport.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Transport* ptr = nullptr;
    int choice;
    cout << "1 - car" << endl;
    cout << "2 - ship" << endl;
    cout << "3 - airplane" << endl;
    cout << "4 - tram" << endl;
    cout << "5 - bicycle" << endl;
    cout << "your choice: ";
    cin >> choice;
    
    switch(choice){
        case 1:
            ptr = new Car();
            break;

        case 2:
            ptr = new Ship();
            break;

        case 3:
            ptr = new Airplane();
            break;
        case 4:
            ptr = new Tram();
            break;
        case 5:
            ptr = new Bicycle();
            break;
        default:
            cout << "error" << endl;
    }

    delete ptr;
}
