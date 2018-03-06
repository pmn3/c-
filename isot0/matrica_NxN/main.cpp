/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: pmn
 *
 * Created on 6 марта 2018 г., 14:47
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale (0,"");
    cout << "Матрица NxN" << endl;
    int i,j,n,c,i1,n1,CM;
    //n = 5;
    do {
    cin >> n;
    cout << "----------" << endl;
    if (n%2 != 0) {
    int array[n][n];
    c = 0;
    n1 = n/2;
    //cout << n1 << endl;
    //array[n1][n1]= 0;
          for (i=0; i<n; i++){
               for (j=0;j<n; j++){
//                for (i1=0; i1<n; i1++ ){
                   array[i][j] = c;                   
                    if (i == n1 & j == n1) {
                       CM = c;
                    }
                    c++;
                    cout << array[i][j]<<" ";
        }  
        cout << endl;
      
    }
      cout << "CM = " << CM;
       cout << endl;
    } else {
        cout << "n должно быть нечётным" << endl;
    }
    
    } while (n != 0) ;

        
 //   }
    
    /*
    for (i=0; i<n; i++){
        for (j=0;j<n; j++){
            cout << array[i][j]<<" ";
        }
        cout << endl;
    }
    */
   // cin.get();
    return 0;
}

