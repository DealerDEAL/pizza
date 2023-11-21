#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Random.h"
#include "Pizzeria (1).h"

using namespace std;

void Ph(int i){
    Pizzeria c;
    c.Pizzeria_data(i);
}

class menu{
    public:
    int id[5];
    string pizza_name[5];
    int prise[5];
    int manu_data(int i){
        for(i = 0; i < 5; i++){
            id[i] = i;
            prise[i] = my_rand();
            cin << pizza_name[i];
            
        }
    }
};
