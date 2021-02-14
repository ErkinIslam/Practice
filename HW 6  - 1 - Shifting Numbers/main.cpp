#include <iostream>

using namespace std;

void shiftNums(int num1, int num2, int num3, int num4);

int main()
{
    //Declaring variables
    int x, y, z, w;

    //Getting input
    cout << "Give me four numbers:" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    cout << "w = ";
    cin >> w;

    //Output;
    cout << endl;
    shiftNums(x, y, z, w);
    cout << endl;
    return 0;
}

void shiftNums(int num1, int num2, int num3, int num4)
{
    int shifting,newOrder;

    shifting = num4;
    num4 = num3;
    num3 = num2;
    num2 = num1;
    num1 = shifting;

    cout << "x = " << num1 << endl;
    cout << "y = " << num2 << endl;
    cout << "z = " << num3 << endl;
    cout << "w = " << num4 << endl;
}
