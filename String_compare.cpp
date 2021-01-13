#include<algorithm>
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;
inline bool EqualIsCAse(const string& s1,const string& s2)
{
    return equal(begin(s1),end(s1),begin(s2),end(s2),[](char ch1,char ch2 ){
        return tolower(ch1)==tolower(ch2);
    });
}
int main()
{
    vector<string>v{"Rahul","ishika","Gupta","Om"};
    cout<<"string contains are:"<<endl;
    for(const auto& s:v)
    {
        cout<<" "<<s<<endl;
    }
    cout<<"\n";
    cout<<"Pleasse enter the string to search for"<<endl;
    string s;
    cin>>s;
    auto pos=find_if(begin(v),end(v),[&s](auto const& x){
        return EqualIsCAse(x,s);
    });
    if(pos!=end(v))
    {
        cout<<" "<<s<<" was find in the vector";
    }
    else
    {
        cout<<"The vector does not contains";
    }
    
}