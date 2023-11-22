#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
#include <iomanip>
#include <fstream>
#include <iostream>


using namespace std;

class person{
    public:
    int id[7], age[7];
    string name[7];
    string gender[7];
    string address[7];
    int pd(int i){
        int h = 0;
        cout << "person\n";
        for(i = 0; i  < 7; i++){
            id[i] = i;
            age[i] = my_rand() + 18;
            cin >> name[i];
            cin >> address[i];
            h = my_rand();
            if(h <5){
                gender[i] = "male";
            }
            if(h >= 1){
                gender[i] = "female";
            }
            cout << id[i] << setw(3) << name[i] << setw(3) << age[i] << setw(3);
            cout << gender[i] << setw(3) << address[i] << "\n";
        }
        return 0;
    }
};
