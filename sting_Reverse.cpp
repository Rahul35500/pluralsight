#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v1(10);
    int pos = 10;
    generate(begin(v1), end(v1), [&pos]() { return pos--; });
    iter_swap(begin(v1), end(v1) - 1);
    for (int i : v1)
    {
        cout << i << endl;
    }
    string name = "Rahul gupta";
    //reverse(begin(name),end(name));
    //iter_swap(begin(name),end(name)-1);
    //cout<<name;
    string name1 = "                       ";
    reverse_copy(begin(name), end(name), begin(name1));
    cout << name1 << endl;
}