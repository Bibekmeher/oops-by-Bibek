#include<iostream>
using namespace std;
class shyam;
class ram{
    int a,b;
    public:
    friend void calculate(ram,shyam);
    void input(){
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }};
    class shyam{
      int d,c;
      public:
      void input(){
         cout<<"enter the value of c"<<endl;
        cin>>c;
        cout<<"enter the value of d"<<endl;
        cin>>d;
      }
      friend void calculate(ram,shyam);
    };
void calculate(ram r1,shyam s1){
    int result= ((r1.a) *(r1.b))/((s1.c)*(s1.d));
    cout<<result<<endl;
}

int main()
{
    ram r;
    shyam s;
    r.input();
    s.input();
 calculate(r,s);
return 0;
}