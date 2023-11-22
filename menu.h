#include "pizzeria (1).h"

using namespace std;

class menu{
    public:
    int id[5];
    string pizza_name[5];
    int prise[5];
    int Md(int i, Pizzeria c){
        int h = 0;
        for(i = 0; i < 5; i++){
            id[i] = i;
            prise[i] = my_rand() * 125;
            cin >> pizza_name[i];
            cout << pizza_name[i] << setw(3) << prise[i] << setw(3) << id[i] << setw(3);
            cout << c.id[h] << "\n";
            h++;
            if(h > 3){
                h = 0;
            }
        }
        return 0;
    }
};
