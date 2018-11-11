//Найдите индексы первого вхождения максимального элемента.
//
//Формат входных данных
//        Программа получает на вход размеры массива n и m, 
// затем n строк по m чисел в каждой. n и m не превышают 100.
//
//Формат выходных данных
//        Выведите два числа: номер строки и номер столбца, 
// в которых стоит наибольший элемент в двумерном массиве. 
// Если таких элементов несколько, то выводится тот, у которого меньше номер строки, 
// а если номера строк равны то тот, у которого меньше номер столбца.
//
//Sample Input:
//
//3 4
//0 3 2 4
//2 3 5 5
//5 1 2 3
//Sample Output:
//
//1 2

#include "t01_max.h"
#include <iostream>


using namespace std;

int t01_max() {
    int n, m, i, j, maxI, maxJ, maxVal, c;
    
    cin >> n;
    
    cout << ": ";
    cin >> m;
    
    int a[n][m];
    
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cin >> a[i][j];
            }
        }
    
    maxVal = a[0][0];
    maxI = 0;
    maxJ = 0;
    c = 0;
    
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (a[i][j] > maxVal){
                maxVal = a[i][j];
                maxI = i;
                maxJ = j;
                
                if (c != 1){
                    c++;
                    
                    if (maxI > i){
                        maxI = i;
                    }else if (maxI){
                        cout << maxI << " " << maxJ << " ";
                    }
                }
            }
        }
    }
    
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
        
    cout << maxI << " " << maxJ << " ";
    
    return 0;
}
