#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
#include <iomanip>
#include <fstream>
#include "random.h"

using namespace std;

class Pizzeria {
    public:
    int arr = 3;
    string name[3];
    int id[3];
    unsigned int ratting[3];
    int Pd(int i){ 
        cout << "Pizzeria" << "\n";
        for(i = 0; i < arr; i++){
            ratting[i] = my_rand();
            cin >> name[i];
            id[i] = i;
            cout << name[i] << setw(3) << ratting[i] << setw(3) << id[i] << "\n";
        }
        cout << "menu" << "\n";
        return 0;
    }
};
