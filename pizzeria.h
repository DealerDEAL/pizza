#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Random.h"

using namespace std;

class Pizzeria {
    public:
    int arr = 3;
    string name[3];
    int id[3];
    unsigned int ratting[3];
    int Pizzeria_data(int i){ 
        for(i = 0; i < arr; i++){
            ratting[i] = my_rand();
            cin >> name[i];
            id = i + 1;
            cout << name[i] << setw(3) << ratting[i] << setw(3) << id[i] << "\n";
        }
        return 0;
    }
};
 
