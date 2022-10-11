//local variables:-   with in a function or block
// Global variables:- access anywhere!
// can global and local variable have same name in c++?   yes
// bulit-in datatypes-int,float,double,char,bool,string
// user-defined:-strcture,enum,union
// derived:-function,array,pointer


/*#include<iostream>
using namespace std;
int main(){
    char ch='de'; // in this case complier will use the outer one !
    cout<<ch<<endl;
    return 0;


}*/
#include<iostream>
using namespace std;
int a=23;
void sum(){
    int b=12;
    int sum=a+b;// if in the function variable is not initalized then it will look for global and then local
    cout<<sum<<endl;
}
int main(){
    //int a=09;//we can't initalize any integer with 0
    int a=45;
    bool is_true=true;// if true return 1 ; false then 0+

    cout<<a<<endl; // local has higher precedence than that of global if name is same
    cout<<is_true<<endl;
    sum();
    return 0;

}