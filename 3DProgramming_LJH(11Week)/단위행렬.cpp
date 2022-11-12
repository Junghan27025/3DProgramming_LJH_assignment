#include<iostream>
#include <cmath>

using namespace std;
class Mat3 {
public:
    float Mat[3][3]; // 2차원행렬

    Mat3() { //  행렬 생성자
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                Mat[i][j] = 0; // 멤버 변수 초기화
            }
        }
    }
    void Reset() { // 행렬 초기화 함수
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                Mat[i][j] = 0;
            }
        }
        Mat[2][2] = 1; 
        Mat[0][0] = 1;
        Mat[1][1] = 1;
    }

    
};


