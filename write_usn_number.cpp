#include <iostream>
using namespace std;
class students
{
    int m1, m2, m3;
    float avg;
    char usn[10], name[20];

public:
    void read();
    void display();
    void average();
};
void students::read()
{
    cout << "Enter the students usn " << endl;
    cin >> usn;
    cout << "Enter the name of the student:" << endl;
    cin >> name;
    cout << "Enter the first marks:" << endl;
    cin >> m1;
    cout << "Enter the second marks:" << endl;
    cin >> m2;
    cout << "Enter the third marks:" << endl;
    cin >> m3;
}
void students::display()
{
    cout << "details of the students " << name << "------------" << endl;
    cout << "name:" << name << endl;
    cout << "USN:" << usn << endl;
    cout << "marks 1:" << m1 << endl;
    cout << "marks 2:" << m2 << endl;
    cout << "marks 3:" << m3 << endl;
    cout << "AVERAGE OF BEST OF TWO MARKS ::" << avg << endl;
}
void students::average()
{
    if (m1 < m2 && m1 < m3)
    {
        avg = (m2 + m3) / 2;
    }
    else if (m2 < m3)
    {
        avg = (m1 + m3) / 2;
    }
    else
    {
        avg = (m1 + m2) / 2;
    }
}
int main()
{
    int i, n;
    students s[10];
    cout << "====Enter the number of students==" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        s[i].read();
    }
    for (i = 0; i < n; i++)
    {
        s[i].average();
        s[i].display();
    }
}
