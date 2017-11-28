#include <iostream>

using namespace std;

int main() {

    const float pi = 3.14315926536;
    float r;
    float area;
    int h=15;
    //วงกลม

    cout << "Please enter radius : ";
    cin >> r;
    cout << "Area of Circle : " << pi * r * r << endl;

    //เส้นรอบ
    cout << "Area of Circumference : " << 2*pi * r << endl;

    //ทรงกระบอก
    cout << "Area of Cylinder : " << pi*(r * r) * h << endl;

  return 0;
}
