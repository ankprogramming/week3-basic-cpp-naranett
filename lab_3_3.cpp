#include <iostream>

using namespace std;

int main() {

    const float pi = 3.14315926536;
    float r;
    float area;
    int h=15;
    //ǧ���

    cout << "Please enter radius : ";
    cin >> r;
    cout << "Area of Circle : " << pi * r * r << endl;

    //����ͺ
    cout << "Area of Circumference : " << 2*pi * r << endl;

    //�ç��к͡
    cout << "Area of Cylinder : " << pi*(r * r) * h << endl;

  return 0;
}
