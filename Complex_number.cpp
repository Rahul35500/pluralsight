#include <iostream>
#include <math.h>
using namespace std;
class complex
{
    float x, y;

public:
    void input(float read, float image)
    {
        x = read;
        y = image;
    }
    void show();
    friend complex sum(complex c1, complex c2);
};
complex sum(complex c1, complex c2)
{
    complex c;
    c.x = c1.x + c2.x;
    c.y = c1.y + c2.y;
    return c;
}
void complex::show()
{
    cout << x;
    if (y > 0)
    {
        cout << "+i" << y << endl;
    }
    else
    {
        cout << "-i" << y << endl;
    }
}
int main()
{
    float x, y, e, f;
    complex a, b, c;
    cout << "enter the first complex number:" << endl;
    cin >> x >> y;
    a.input(x, y);
    cout << "enter the second complex number:" << endl;
    cin >> e >> f;
    a.input(e, f);
    c = sum(a, b);
    cout << "A:";
    a.show();
    cout << "B:";
    b.show();
    cout << "Sum C:";
    c.show();
    return  0;
}