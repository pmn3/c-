#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
    //setlocale(0,"");
    float x, y;
    char q;
    while ( q != 'n'){
    cout << "Укажите координаты точки " << endl;
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    cout << endl;
  
    // без логических операций
    /*
    if (abs(x)+abs(y)<=2)
        cout << "Z1 принадлежит области I" << endl;
    else if ()    
     * */
    //с логическими оперциями
    /*
    if (abs(x)+abs(y)<=2)
        cout << "Z2 принадлежит области I" << endl;
    else if ((x >= 2 && y >= 2) || (x <= -2 && y <= -2))
         cout << "Z2 принадлежит области III" << endl;
         else if ((x >= -1 && y <= -2) || (x<= -2 && y <= 0))
        cout << "Z2 принадлежит области III" << endl;
            else if(abs(x) >= abs(y))
            cout << "Z2 принадлежит области II" << endl;
                else if(abs(x) <= abs(y))
                     cout << "Z2 принадлежит области IV" << endl;
                else 
                    cout << "Z2 принадлежит области III" << endl;
         */   
        if (abs(x)+abs(y)<=2)
        cout << "Z2 принадлежит области I" << endl;
        else
            if (x>2 && y>2) 
            cout << "Z2 принадлежит области III" << endl;     
            else if ((x>=0 && x<=2) && (y < 2 && y > 0)) 
            cout << "Z2 принадлежит области III" << endl;
            else if (x<-2 && y<-2) 
            cout << "Z2 принадлежит области III" << endl;     
            else if ((x<=0 && x>=-2) && (y < 0 && y > -2)) 
            cout << "Z2 принадлежит области III" << endl;
            else if(abs(x) >= abs(y))
            cout << "Z2 принадлежит области II" << endl;
                else if(abs(x) <= abs(y))
                     cout << "Z2 принадлежит области IV" << endl;
    
    cout << endl;
    cout << "продолжить ? y - да, n - нет ";
    cin >> q;
    }
    
    return 0;
}
