#include<iostream>
#include <cmath>
#include "stdio.h"


int main()
{
    int m = 3;
    int n = 3;
    int matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int transpose[3][3];
    int i, j;


    //transpose ����� ��ġ��ķ� �ٲٱ�
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            transpose[i][j] = matrix[j][i];


    //��ġ��� �ٲٱ� �� ���
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)\
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
    printf("\n");

    //��ġ��� �ٲ� �� ���
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)\
            printf("%d\t", transpose[i][j]);
        printf("\n");
    } 
    return 0;
}


