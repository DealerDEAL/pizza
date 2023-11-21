#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Pizzeria (1).h"

using namespace std;

void pd(int i){
    Pizzeria c;
    c.Pizzeria_data(i);
}

class menu{
    public:
    int id[5];
    string pizza_name[5];
    int prise[5];
    int md(int i, Pizzeria c){
        for(i = 0; i < 5; i++){
            id[i] = i;
            prise[i] = my_rand();
            cin >> pizza_name[i];
            cout << id[i] << setw(3) << pizza_name[i] << setw(3) << prise[i] << "\n";
            cout << c.id[i] <<"\n";
        }
        return 0;
    }
};
