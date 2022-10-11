#include<iostream>
#include<string>
using namespace std;
int main(){
int x;
float y;
double z;
string s;
cout<<"enter the value"<<endl;
cin>>x>>y>>z;
cout<<"enter the name"<<endl;
getline(cin>>ws,s);  // very imp:- string input
cout<<x<<endl;
cout<<y<<endl;
cout<<z<<endl;
cout<<s<<endl;


// -single line comment
/*
multi line comment
*/
return 0;

}