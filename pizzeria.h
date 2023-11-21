#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

class Pizzeria {
    public:
    int arr = 3;
    string name[3];
    unsigned int ratting[3];
    int Pizzeria_data(int i){ 
        for(i = 0; i < arr; i++){
            ratting[i] = i + 1;
            cin >> name[i];
            cout << name[i] << setw(3) << ratting[i] << "\n";
            return 0;
        }
    }
};
    
