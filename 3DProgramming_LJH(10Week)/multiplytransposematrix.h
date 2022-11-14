#pragma once
#include <iostream>

using namespace std;

#define N 3        // 
 
void multiply(int arr1[][N], int arr2[][N], int arr3[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr3[i][j] = 0;
            for (int k = 0; k < N; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void multiplyTransposeMatrix() {
    int arr1[N][N] = {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };

    int arr2[N][N] = {
       {9, 8, 7},
       {6, 5, 4},
       {3, 2, 1}
    };

    int arr3[N][N];

    multiply(arr1, arr2, arr3);

    cout << "arr1 = " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << " + arr1[i][j] << " ;
        }
        cout << endl;
    }
    printf("\n");


    cout << "arr2 = " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    printf("\n");

    cout << "arr1 * arr2 = " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}