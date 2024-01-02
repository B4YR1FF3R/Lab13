#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int size, double B[]){
    
    // คำนวณค่าเฉลี่ยเลขคณิต
    double sum;
    for(int i=0; i<size; i++){
        sum += A[i];
    }
    B[0] = sum/size;

    // คำนวณส่วนเบี่ยงเบนมาตรฐาน
    double mean = B[0];
    double std;
    for(int i=0; i<size; i++){
        std += pow(A[i] - mean, 2);
    }
    B[1] = sqrt(std/size);

    // คำนวณค่าเฉลี่ยเรขาคณิต
    double gome = 1.0;
    for (int i = 0; i < size; i++)
    {
        gome *= A[i];
    }
    B[2] = pow(gome, 1.0 / size);

    // คำนวณค่าเฉลี่ยฮาร์โมนิก
     double harmo = 0;
    for (int i = 0; i<size; i++)
    {
        harmo += 1 / A[i];
    }
    B[3] = size / harmo;

    // ค่า Max/Min
    double max = A[0];
    double min = A[0];
    for(int i=0; i<size; i++){
        if (A[i] > max)
        {
            max = A[i];
        }
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    B[4] = max;
    B[5] = min;
}