#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string>lines{};
    ifstream inputFile("string.txt");
    string line{};
    while(getline(inputFile,line))
    {
        lines.push_back(line);
    }
    for(const auto& x:lines)
    {
        cout<<x<<endl;
    }

}