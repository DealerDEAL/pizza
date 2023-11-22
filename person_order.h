#include "menu.h"
#include "person.h"

using namespace std;

class person_order{
    public:
    int id[10], order_date[10];
    int Po(int i, menu k, person b){
        int h = 0, l = 0;
        for(i = 0; i < 10; i++){
            id[i] = i + 1;
            order_date[i] = 0;
            cout << id[i] << setw(3) << b.id[h] << setw(3) << k.id[l] << setw(3);
            cout << order_date[i] << "\n";
            if(h > 7){
                h--;
            }
            if(l > 5){
                l--;
            }
            h++;
            l++;
        }
        return 0;
    }
};

class person_visit{
    public:
    int id[10], visit_date[10];
    int Pv(int i, Pizzeria c, person b){
        int h = 0, l = 0;
        for(i = 0; i < 10; i++){
            id[i] = i + 1;
            visit_date[i] = 0;
            cout << id[i] << setw(3) << b.id[h] << setw(3) << c.id[l] << setw(3);
            cout << visit_date[i] << "\n";
            if(h > 7){
                h--;
            }
            if(l > 3){
                l--;
            }
            h++;
            l++;
        }
        return 0;
    }
};
