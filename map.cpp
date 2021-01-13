#include<iostream>
#include<cassert>
#include<map>
#include<string>
using namespace std;
using std::string;
using std::map;
int main()
{
    map<int,string>numbers{};
    assert(numbers.empty());

    numbers[1]="one";
    numbers[2]="two";
    numbers[64]="sixty four";
    numbers[4]="four";
    numbers[3]="three";
    for(auto const& [positin,successor]:numbers)
    {
        cout<<"The nmber are "<<positin<<"is pronoucend is "<<successor<<endl;
    }
}