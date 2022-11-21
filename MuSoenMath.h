//#pragma once
//#include <iostream>
//#include <cmath>
//
//#define N 3  
//
////----------------------------------------------------- ������ �����ε�
//using namespace std;
//class Mat3 {
//public:
//    float Mat[3][3]; // 2�������
//
//    Mat3() { //  ��� ������
//        for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 3; j++) {
//                Mat[i][j] = 0; // ��� ���� �ʱ�ȭ
//            }
//        } 
//    }
//    void Reset() { // ��� �ʱ�ȭ �Լ�
//        for (int i = 0; i < 3; i++) {
//            for (int j = 0; j < 3; j++) {
//                Mat[i][j] = 0;
//            }
//        }
//        Mat[2][2] = 1; //2���� ��ǥ���� z���� �������� �������� 1�� �ʱ�ȭ
//    }
//
//    void Translate(float x, float y)
//    {
//        Reset();
//        Mat[0][0] = 1;
//        Mat[1][1] = 1;
//        Mat[2][0] = x;
//        Mat[2][1] = y;
//        // �̵� ��ȯ ��� ���Ŀ� �°� ����
//    }
//
//    void Rotate(float r)
//    {
//        Reset();
//        double Rotate = r * (3.14 / 180); // ���� ����
//        Mat[0][0] = cos(Rotate);
//        Mat[0][1] = (-sin(Rotate));
//        Mat[1][0] = sin(Rotate);
//        Mat[1][1] = cos(Rotate);
//        // ȸ�� ��ȯ ��� ���Ŀ� �°� ����
//    }
//
//    void Scale(float s)
//    {
//        Reset();
//        Mat[0][0] = s;
//        Mat[1][1] = s;
//        // ũ�� ��ȯ ��� ���Ŀ� �°� ����
//    }
//
//};
//
//class Vec3 {
//public:
//    float Position[2]; // 2������ǥ+������ǥ
//
//    Vec3(float x, float y) { // ������
//        Position[0] = x;
//        Position[1] = y;
//    }
//
//    Vec3 operator *(Mat3& p) // ������ �����ε�
//    {
//        float x = Position[0]; // 3*1����� x����
//        float y = Position[1]; // 3*1����� y����
//        float z = 1; // 3*1����� z����
//        float a = (x * p.Mat[0][0]) + (y * p.Mat[1][0]) + (z * p.Mat[2][0]); // ��İ� x��ǥ ����� ����
//        float b = (x * p.Mat[0][1]) + (y * p.Mat[1][1]) + (z * p.Mat[2][1]); // ��İ� y��ǥ ����� ����
//        // Z��ǥ�� 2�������� �ʿ�����Ƿ� ����
//        return Vec3(a, b); // ����� x,y��ǥ ����
//    }
//};
//
//
////--------------------------------------------------------------------- �������
//
//
//#include<iostream>
//#include <cmath>
//
//using namespace std;
//
//
//void IdentityMatrix() {
//
//    cout << "������� \n";
//    float Mat[3][3]; 
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            Mat[i][j] = 0;  //��� �ʱ�ȭ
//        }
//    }
//    Mat[0][0] = 1;
//    Mat[1][1] = 1; 
//    Mat[2][2] = 1; 
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << Mat[i][j] << " "; 
//        }
//        cout << "\n";
//    }
//};
//
//
//
//
////------------------------------------------------------------- ��ġ���
//
//#include<iostream>
//#include <cmath>
//#include "stdio.h"
//
//
//void transposematrix()
//{
//    int m = 3;
//    int n = 3;
//    int matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//    int transpose[3][3];
//    int i, j;
//
//
//    //transpose ����� ��ġ��ķ� �ٲٱ�
//    for (i = 0; i < m; i++)
//        for (j = 0; j < n; j++)
//            transpose[i][j] = matrix[j][i];
//
//
//    //��ġ��� �ٲٱ� �� ���
//    printf("��ġ��� �ٲٱ� �� ���\n");
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++)
//            printf("%d\t", matrix[i][j]);
//        printf("\n");
//    }
//    printf("\n");
//
//    //��ġ��� �ٲ� �� ���
//    printf("��ġ��� �ٲ� �� ���\n");
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++)\
//            printf("%d\t", transpose[i][j]);
//        printf("\n");
//    }
//    return;
//}
//
//
////----------------------------------------------------------- ��Ƽ�ö��� ��Ʈ����
//
//
//void multiplyMatrix() {
//
//    // �迭 ����
//    int first[3][3];
//    int second[3][3];
//    int result[3][3];
//
//    // ù ���� ��� �Է�
//    cout << endl << "| ��� a �Է� |" << "\n\n";
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            cout << "Enter a" << i + 1 << " / b" << j + 1 << " :\t";
//            cin >> first[i][j];
//        }
//    }
//    // �� ��° ��� �Է�
//    cout << endl << "| ��� b �Է� |" << "\n\n";
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            cout << "Enter b" << i + 1 << " / b" << j + 1 << " :\t ";
//            cin >> second[i][j];
//        }
//    }
//
//    // �Է��� ��� ���
//    cout << "| �Էµ� ��İ� |" << "\n\n";
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << first[i][j] << " ";
//        }
//        cout << "\t";
//        for (int j = 0; j < 3; j++) {
//            cout << second[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    // ù��° ��� x �ι�° ��� ���
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            int sum = 0;
//            for (int k = 0; k < 3; ++k) {
//                sum += first[i][k] * second[k][j];
//            }
//            result[i][j] = sum;
//        }
//    }
//     
//    // ��� �� ���
//    cout << endl << "| ��°� | " << "\n\n";
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            cout << " " << result[i][j];
//        }
//        cout << endl;
//    }
//}
//
//
//
////--------------------------------------------------------- ��Ƽ�ö���Ʈ�������� ��Ʈ����
//
//
//void multiply(int arr1[][N], int arr2[][N], int arr3[][N]) {
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            arr3[i][j] = 0;
//            for (int k = 0; k < N; k++) {
//                arr3[i][j] += arr1[i][k] * arr2[k][j];
//            }
//        }
//    }
//}
//
//void multiplyTransposeMatrix() {
//    int arr1[N][N] = { 
//       {1, 2, 3},
//       {4, 5, 6},
//       {7, 8, 9}
//    };
//
//    int arr2[N][N] = {
//       {1, 4, 7},
//       {2, 5, 8},
//       {3, 6, 9}
//    };
//
//    int arr3[N][N];
//
//    multiply(arr1, arr2, arr3);
//
//    cout << "arr1 = " << endl;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cout <<  + arr1[i][j] <<" ";
//        }
//        cout << endl;
//    }
//    printf("\n");
//
//
//    cout << "arr2 = " << endl;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cout << arr2[i][j] << " ";
//        }
//        cout << endl;
//    }
//    printf("\n");
//
//    cout << "arr1 * arr2 = " << endl;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cout << arr3[i][j] << " ";
//        }
//        cout << endl;
//    }
//}

#pragma once
#include <iostream>
using namespace std;
float PI = 3.1415926;

struct Mat3
{
private:

public:
	float mat3[3][3];
	float transmat[3][3];
	float multmat[3][3];


	Mat3() {                     //�� ���� ���� ������ �⺻������ ��Ŀ� ���� ��
		this->mat3[0][0] = 0, this->mat3[0][1] = 0, this->mat3[0][2] = 0,
			this->mat3[1][0] = 0, this->mat3[1][1] = 0, this->mat3[1][2] = 0,
			this->mat3[2][0] = 0, this->mat3[2][1] = 0, this->mat3[2][2] = 0;
	};

	Mat3(float m1, float m2, float m3, float m4, float m5, float m6,
		float m7, float m8, float m9) {
		this->mat3[0][0] = m1, this->mat3[0][1] = m2, this->mat3[0][2] = m3,
			this->mat3[1][0] = m4, this->mat3[1][1] = m5, this->mat3[1][2] = m6,
			this->mat3[2][0] = m7, this->mat3[2][1] = m8, this->mat3[2][2] = m9;
	};

	void Reset() {                //��İ��� 0���� �ʱ�ȭ ��Ű�� �Լ�
		for (int i = 0; i < 3; i++) {
			for (int k = 0; k < 3; k++) {
				mat3[i][k] = 0;
			}
		}
	}

	void Identity() {             //������� �ʱ�ȭ �Լ�
		for (int i = 0; i < 3; i++) {
			for (int k = 0; k < 3; k++) {
				mat3[i][k] = 0;
			}
		}
		mat3[0][0] = 1, mat3[1][1] = 1, mat3[2][2] = 1;
	}

	void Transpose() {
		for (int i = 0; i < 3; i++) {
			for (int k = 0; k < 3; k++) {
				transmat[i][k] = mat3[i][k];
			}
		}
		for (int i = 0; i < 3; i++) {
			for (int k = 0; k < 3; k++) {
				mat3[i][k] = transmat[k][i];
			}
		}
	}

	void print() {

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << " " << "{" << mat3[i][j] << "]";
			}
			cout << endl;
		}
		cout << endl;

	}

	Mat3 operator*(Mat3& ref) {


		this->multmat[0][0] = mat3[0][0] * ref.mat3[0][0] + mat3[0][1] * ref.mat3[1][0] + mat3[0][2] * ref.mat3[2][0];
		this->multmat[0][1] = mat3[0][0] * ref.mat3[0][1] + mat3[0][1] * ref.mat3[1][1] + mat3[0][2] * ref.mat3[2][1];
		this->multmat[0][2] = mat3[0][0] * ref.mat3[0][2] + mat3[0][1] * ref.mat3[1][2] + mat3[0][2] * ref.mat3[2][2];
		this->multmat[1][0] = mat3[1][0] * ref.mat3[0][0] + mat3[1][1] * ref.mat3[1][0] + mat3[1][2] * ref.mat3[2][0];
		this->multmat[1][1] = mat3[1][0] * ref.mat3[0][1] + mat3[1][1] * ref.mat3[1][1] + mat3[1][2] * ref.mat3[2][1];
		this->multmat[1][2] = mat3[1][0] * ref.mat3[0][2] + mat3[1][1] * ref.mat3[1][2] + mat3[1][2] * ref.mat3[2][2];
		this->multmat[2][0] = mat3[2][0] * ref.mat3[0][0] + mat3[2][1] * ref.mat3[1][0] + mat3[2][2] * ref.mat3[2][0];
		this->multmat[2][1] = mat3[2][0] * ref.mat3[0][1] + mat3[2][1] * ref.mat3[1][1] + mat3[2][2] * ref.mat3[2][1];
		this->multmat[2][2] = mat3[2][0] * ref.mat3[0][2] + mat3[2][1] * ref.mat3[1][2] + mat3[2][2] * ref.mat3[2][2];

		for (int i = 0; i < 3; i++) {
			for (int k = 0; k < 3; k++) {
				mat3[i][k] = multmat[i][k];
			}
		}
		return *this;
	}

	Mat3 operator+(Mat3& ref) {

		Mat3 m;
		for (int i = 0; i < 3; i++) {
			for (int k = 0; k < 3; k++) {
				m.mat3[i][k] = mat3[i][k] + ref.mat3[i][k];
			}
		}
		return m;
	}

	Mat3 operator-(Mat3& ref) {
		Mat3 m;
		for (int i = 0; i < 3; i++) {
			for (int k = 0; k < 3; k++) {
				m.mat3[i][k] = mat3[i][k] - ref.mat3[i][k];
			}
		}
		return m;
	}
};

struct Mat4
{
private:

public:
	float mat4[4][4];
	float transmat[4][4];
	float multmat[4][4];
	float plusmat[4][4];
	float minmat[4][4];


	Mat4() {                     //�� ���� ���� ������ �⺻������ ��Ŀ� ���� ��
		mat4[0][0] = 0, mat4[0][1] = 0, mat4[0][2] = 0,
			mat4[1][0] = 0, mat4[1][1] = 0, mat4[1][2] = 0,
			mat4[2][0] = 0, mat4[2][1] = 0, mat4[2][2] = 0,
			mat4[3][0] = 0, mat4[3][1] = 0, mat4[3][2] = 0;

	};

	Mat4(float m1, float m2, float m3, float m4, float m5, float m6,
		float m7, float m8, float m9, float m10, float m11, float m12) {
		mat4[0][0] = m1, mat4[0][1] = m2, mat4[0][2] = m3,
			mat4[1][0] = m4, mat4[1][1] = m5, mat4[1][2] = m6,
			mat4[2][0] = m7, mat4[2][1] = m8, mat4[2][2] = m9,
			mat4[3][0] = m10, mat4[3][1] = m11, mat4[3][2] = m12;
	};

	void Reset() {                //��İ��� 0���� �ʱ�ȭ ��Ű�� �Լ�
		for (int i = 0; i < 4; i++) {
			for (int k = 0; k < 4; k++) {
				mat4[i][k] = 0;
			}
		}
	}

	void Identity() {             //������� �ʱ�ȭ �Լ�
		for (int i = 0; i < 4; i++) {
			for (int k = 0; k < 4; k++) {
				mat4[i][k] = 0;
			}
		}
		mat4[0][0] = 1, mat4[1][1] = 1, mat4[2][2] = 1, mat4[3][3] = 1;
	}

	void Transpose() {
		for (int i = 0; i < 4; i++) {
			for (int k = 0; k < 4; k++) {
				transmat[i][k] = mat4[i][k];
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int k = 0; k < 4; k++) {
				mat4[i][k] = transmat[k][i];
			}
		}
	}

	void print() {

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				cout << " " << mat4[i][j];
			}
			cout << endl;
		}
		cout << endl;

	}

	Mat4 operator*(Mat4& ref) {
		this->multmat[0][0] = mat4[0][0] * ref.mat4[0][0] + mat4[0][1] * ref.mat4[1][0] + mat4[0][2] * ref.mat4[2][0];
		this->multmat[0][1] = mat4[0][0] * ref.mat4[0][1] + mat4[0][1] * ref.mat4[1][1] + mat4[0][2] * ref.mat4[2][1];
		this->multmat[0][2] = mat4[0][0] * ref.mat4[0][2] + mat4[0][1] * ref.mat4[1][2] + mat4[0][2] * ref.mat4[2][2];
		this->multmat[0][3] = mat4[0][0] * ref.mat4[0][3] + mat4[0][1] * ref.mat4[1][3] + mat4[0][2] * ref.mat4[2][3];

		this->multmat[1][0] = mat4[1][0] * ref.mat4[0][0] + mat4[1][1] * ref.mat4[1][0] + mat4[1][2] * ref.mat4[2][0];
		this->multmat[1][1] = mat4[1][0] * ref.mat4[0][1] + mat4[1][1] * ref.mat4[1][1] + mat4[1][2] * ref.mat4[2][1];
		this->multmat[1][2] = mat4[1][0] * ref.mat4[0][2] + mat4[1][1] * ref.mat4[1][2] + mat4[1][2] * ref.mat4[2][2];
		this->multmat[1][3] = mat4[1][0] * ref.mat4[0][3] + mat4[1][1] * ref.mat4[1][3] + mat4[1][2] * ref.mat4[2][3];

		this->multmat[2][0] = mat4[2][0] * ref.mat4[0][0] + mat4[2][1] * ref.mat4[1][0] + mat4[2][2] * ref.mat4[2][0];
		this->multmat[2][1] = mat4[2][0] * ref.mat4[0][1] + mat4[2][1] * ref.mat4[1][1] + mat4[2][2] * ref.mat4[2][1];
		this->multmat[2][2] = mat4[2][0] * ref.mat4[0][2] + mat4[2][1] * ref.mat4[1][2] + mat4[2][2] * ref.mat4[2][2];
		this->multmat[2][3] = mat4[2][0] * ref.mat4[0][3] + mat4[2][1] * ref.mat4[1][3] + mat4[2][2] * ref.mat4[2][3];

		for (int i = 0; i < 4; i++) {
			for (int k = 0; k < 4; k++) {
				mat4[i][k] = multmat[i][k];
			}
		}
		return *this;
	}

	Mat4 operator+(Mat4& ref) {
		Mat4 m;
		for (int i = 0; i < 4; i++) {
			for (int k = 0; k < 4; k++) {
				m.mat4[i][k] = mat4[i][k] + ref.mat4[i][k];
			}
		}
		return m;
	}

	Mat4 operator-(Mat4& ref) {
		Mat4 m;
		for (int i = 0; i < 4; i++) {
			for (int k = 0; k < 4; k++) {
				m.mat4[i][k] = mat4[i][k] - ref.mat4[i][k];
			}
		}
		return m;
	}
};

struct Vec3
{
private:

public:

	bool t = false;
	float vec3[3][3];
	float vec[3][3];

	Vec3() {
		this->vec3[0][0] = 0, this->vec3[0][1] = 0, this->vec3[0][2] = 0;
	}

	Vec3(float x, float y, float z) {
		this->vec3[0][0] = x, this->vec3[0][1] = y, this->vec3[0][2] = z;
	}

	Vec3 operator*(Mat3& ref) {                     //���Ϳ� ����� ����

		Vec3 v;
		if (t) {
			v.vec3[0][0] = vec3[0][0] * ref.mat3[0][0] + vec3[1][0] * ref.mat3[1][0] + vec3[2][0] * ref.mat3[2][0];
			v.vec3[1][0] = vec3[0][0] * ref.mat3[0][1] + vec3[1][0] * ref.mat3[1][1] + vec3[2][0] * ref.mat3[2][1];
			v.vec3[2][0] = vec3[0][0] * ref.mat3[0][2] + vec3[1][0] * ref.mat3[1][2] + vec3[2][0] * ref.mat3[2][2];

			return v;
		}
		if (t == false) {
			v.vec3[0][0] = this->vec3[0][0] * ref.mat3[0][0] + this->vec3[0][1] * ref.mat3[1][0] + this->vec3[0][2] * ref.mat3[2][0];
			v.vec3[0][1] = this->vec3[0][0] * ref.mat3[0][1] + this->vec3[0][1] * ref.mat3[1][1] + this->vec3[0][2] * ref.mat3[2][1];
			v.vec3[0][2] = this->vec3[0][0] * ref.mat3[0][2] + this->vec3[0][1] * ref.mat3[1][2] + this->vec3[0][2] * ref.mat3[2][2];

			return v;
		}
	}

	Vec3 operator*(Vec3& rv) {
		if (t == true) {
			this->vec[0][0] = vec3[0][0] * rv.vec3[0][0];
			this->vec[1][0] = vec3[1][0] * rv.vec3[1][0];
			this->vec[2][0] = vec3[2][0] * rv.vec3[2][0];

			this->vec3[0][0] = vec[0][0];
			this->vec3[1][0] = vec[1][0];
			this->vec3[2][0] = vec[2][0];
		}
		else if (t == false) {
			this->vec[0][0] = vec3[0][0] * rv.vec3[0][0];
			this->vec[0][1] = vec3[0][1] * rv.vec3[0][1];
			this->vec[0][2] = vec3[0][2] * rv.vec3[0][2];

			this->vec3[0][0] = vec[0][0];
			this->vec3[0][1] = vec[0][1];
			this->vec3[0][2] = vec[0][2];
		}
		return *this;
	}

	Vec3 operator+(Vec3& ref) {
		if (t == true) {
			this->vec[0][0] = vec3[0][0] + ref.vec3[0][0];
			this->vec[1][0] = vec3[1][0] + ref.vec3[1][0];
			this->vec[2][0] = vec3[2][0] + ref.vec3[2][0];

			this->vec3[0][0] = vec[0][0];
			this->vec3[1][0] = vec[1][0];
			this->vec3[2][0] = vec[2][0];
		}
		else if (t == false) {
			this->vec[0][0] = vec3[0][0] + ref.vec3[0][0];
			this->vec[0][1] = vec3[0][1] + ref.vec3[0][1];
			this->vec[0][2] = vec3[0][2] + ref.vec3[0][2];

			this->vec3[0][0] = vec[0][0];
			this->vec3[0][1] = vec[0][1];
			this->vec3[0][2] = vec[0][2];
		}
		return *this;
	}

	Vec3 operator-(Vec3& ref) {
		if (t == true) {
			this->vec[0][0] = vec3[0][0] - ref.vec3[0][0];
			this->vec[1][0] = vec3[1][0] - ref.vec3[1][0];
			this->vec[2][0] = vec3[2][0] - ref.vec3[2][0];

			this->vec3[0][0] = vec[0][0];
			this->vec3[1][0] = vec[1][0];
			this->vec3[2][0] = vec[2][0];
		}
		else if (t == false) {
			this->vec[0][0] = vec3[0][0] - ref.vec3[0][0];
			this->vec[0][1] = vec3[0][1] - ref.vec3[0][1];
			this->vec[0][2] = vec3[0][2] - ref.vec3[0][2];

			this->vec3[0][0] = vec[0][0];
			this->vec3[0][1] = vec[0][1];
			this->vec3[0][2] = vec[0][2];
		}
		return *this;
	}

	void Transpose() {
		if (t == true)
		{
			vec3[0][1] = vec3[1][0];
			vec3[0][2] = vec3[2][0];
			t = false;
		}
		else if (t == false)
		{
			vec3[1][0] = vec3[0][1];
			vec3[2][0] = vec3[0][2];
			t = true;
		}
	}

	void print() {

		cout << "��ġ ��: " << endl;
		if (t == true)
		{
			for (int i = 0; i < 3; i++) {
				cout << " " << "{" << vec3[i][0] << "}";
				cout << endl;
			}
		}
		else if (t == false)
		{
			for (int i = 0; i < 3; i++) {
				cout << "{" << vec3[0][i] << "}";
			}
			cout << endl;
		}

	}
};

struct Vec4 {
public:
	bool t = true;
	float vec4[4][4];
	float vec[4][4];

	Vec4() {
		this->vec4[0][0] = 0; this->vec4[1][0] = 0; this->vec4[2][0] = 0; this->vec4[3][0] = 0;
	}
	Vec4(float a, float b, float c, float d) {
		this->vec4[0][0] = a; this->vec4[1][0] = b; this->vec4[2][0] = c; this->vec4[3][0] = d;
	}
	void Transpose() {
		if (t == true)
		{
			for (int i = 1; i < 4; i++) {
				vec4[0][i] = vec4[i][0];
			}
			t = false;
		}
		else if (t == false)
		{
			for (int i = 1; i < 4; i++) {
				vec4[i][0] = vec4[0][i];
			}
			t = true;
		}
	}

	void print() {
		if (t == true)
		{
			for (int i = 0; i < 4; i++) {
				cout << " " << vec4[i][0];
				cout << endl;
			}
		}
		else if (t == false)
		{
			for (int i = 0; i < 4; i++) {
				cout << " " << vec4[0][i];
				cout << endl;
			}
		}

	}

	Vec4 operator*(Mat4& ref) {                     //���Ϳ� ����� ����

		if (t) {
			this->vec[0][0] = vec4[0][0] * ref.mat4[0][0] + vec4[1][0] * ref.mat4[1][0] + vec4[2][0] * ref.mat4[2][0] + vec4[3][0] * ref.mat4[3][0];
			this->vec[1][0] = vec4[0][0] * ref.mat4[0][1] + vec4[1][0] * ref.mat4[1][1] + vec4[2][0] * ref.mat4[2][1] + vec4[3][0] * ref.mat4[3][1];
			this->vec[2][0] = vec4[0][0] * ref.mat4[0][2] + vec4[1][0] * ref.mat4[1][2] + vec4[2][0] * ref.mat4[2][2] + vec4[3][0] * ref.mat4[3][2];
			this->vec[3][0] = vec4[0][0] * ref.mat4[0][3] + vec4[1][0] * ref.mat4[1][3] + vec4[2][0] * ref.mat4[2][3] + vec4[3][0] * ref.mat4[3][3];


			this->vec4[0][0] = vec[0][0], this->vec4[1][0] = vec[1][0], this->vec4[2][0] = vec[2][0], this->vec4[3][0] = vec[3][0];

			return *this;
		}
		if (t == false) {
			this->vec[0][0] = vec4[0][0] * ref.mat4[0][0] + vec4[0][1] * ref.mat4[1][0] + vec4[0][2] * ref.mat4[2][0] + vec4[0][3] * ref.mat4[3][0];
			this->vec[0][1] = vec4[0][0] * ref.mat4[0][1] + vec4[0][1] * ref.mat4[1][1] + vec4[0][2] * ref.mat4[2][1] + vec4[0][3] * ref.mat4[3][1];
			this->vec[0][2] = vec4[0][0] * ref.mat4[0][2] + vec4[0][1] * ref.mat4[1][2] + vec4[0][2] * ref.mat4[2][2] + vec4[0][3] * ref.mat4[3][2];
			this->vec[0][3] = vec4[0][0] * ref.mat4[0][3] + vec4[0][1] * ref.mat4[1][3] + vec4[0][2] * ref.mat4[2][3] + vec4[0][3] * ref.mat4[3][3];


			this->vec4[0][0] = vec[0][0], this->vec4[0][1] = vec[0][1], this->vec4[0][2] = vec[0][2], this->vec4[3][0] = vec[3][0];

			return *this;
		}
	}

	Vec4 operator*(Vec4& rv) {
		if (t == true) {
			this->vec[0][0] = vec4[0][0] * rv.vec4[0][0];
			this->vec[1][0] = vec4[1][0] * rv.vec4[1][0];
			this->vec[2][0] = vec4[2][0] * rv.vec4[2][0];
			this->vec[3][0] = vec4[3][0] * rv.vec4[3][0];

			this->vec4[0][0] = vec[0][0];
			this->vec4[1][0] = vec[1][0];
			this->vec4[2][0] = vec[2][0];
			this->vec4[3][0] = vec[3][0];
		}
		else if (t == false) {
			this->vec[0][0] = vec4[0][0] * rv.vec4[0][0];
			this->vec[0][1] = vec4[0][1] * rv.vec4[0][1];
			this->vec[0][2] = vec4[0][2] * rv.vec4[0][2];
			this->vec[0][3] = vec4[0][3] * rv.vec4[0][3];

			this->vec4[0][0] = vec[0][0];
			this->vec4[0][1] = vec[0][1];
			this->vec4[0][2] = vec[0][2];
			this->vec4[0][3] = vec[0][3];
		}
		return *this;
	}

	Vec4 operator+(Vec4& ref) {
		if (t == true) {
			this->vec[0][0] = vec4[0][0] + ref.vec4[0][0];
			this->vec[1][0] = vec4[1][0] + ref.vec4[1][0];
			this->vec[2][0] = vec4[2][0] + ref.vec4[2][0];
			this->vec[3][0] = vec4[3][0] + ref.vec4[3][0];

			this->vec4[0][0] = vec[0][0];
			this->vec4[1][0] = vec[1][0];
			this->vec4[2][0] = vec[2][0];
			this->vec4[3][0] = vec[3][0];
		}
		else if (t == false) {
			this->vec[0][0] = vec4[0][0] + ref.vec4[0][0];
			this->vec[0][1] = vec4[0][1] + ref.vec4[0][1];
			this->vec[0][2] = vec4[0][2] + ref.vec4[0][2];
			this->vec[0][3] = vec4[0][3] + ref.vec4[0][3];

			this->vec4[0][0] = vec[0][0];
			this->vec4[0][1] = vec[0][1];
			this->vec4[0][2] = vec[0][2];
			this->vec4[0][3] = vec[0][3];
		}
		return *this;
	}

	Vec4 operator-(Vec4& ref) {
		if (t == true) {
			this->vec[0][0] = vec4[0][0] - ref.vec4[0][0];
			this->vec[1][0] = vec4[1][0] - ref.vec4[1][0];
			this->vec[2][0] = vec4[2][0] - ref.vec4[2][0];
			this->vec[3][0] = vec4[3][0] - ref.vec4[3][0];

			this->vec4[0][0] = vec[0][0];
			this->vec4[1][0] = vec[1][0];
			this->vec4[2][0] = vec[2][0];
			this->vec4[3][0] = vec[3][0];
		}
		else if (t == false) {
			this->vec[0][0] = vec4[0][0] - ref.vec4[0][0];
			this->vec[0][1] = vec4[0][1] - ref.vec4[0][1];
			this->vec[0][2] = vec4[0][2] - ref.vec4[0][2];
			this->vec[0][3] = vec4[0][3] - ref.vec4[0][3];

			this->vec4[0][0] = vec[0][0];
			this->vec4[0][1] = vec[0][1];
			this->vec4[0][2] = vec[0][2];
			this->vec4[0][3] = vec[0][3];
		}
		return *this;
	}
};

float radians(float gak) {
	float f;
	f = gak * PI / 180;
	return f;
}
