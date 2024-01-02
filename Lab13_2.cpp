#include <iostream>
#include <cmath>
using namespace std;

// กำหนดค่าคงที่ Global
const int N = 30;
const int M = 70;

// ตัวต้นแบบวาดรูป
void updateImage(bool [][M],int,int,int);

// ตัวต้นแบบโชว์รูป
void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}