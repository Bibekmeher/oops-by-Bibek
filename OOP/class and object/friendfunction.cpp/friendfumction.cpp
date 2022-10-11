#include <iostream>
using namespace std;

class bibek
{
    int a, b;

public:
    void print()
    {
        cout << "the resultant complex number is" << a << "+i" << b;
    }
    void extracts(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void display()
    {
        cout << "the complex number is" << a << "+i" << b << endl;
    }
    friend bibek add(bibek b1, bibek b2);
};
bibek add(bibek b1, bibek b2)
{
    bibek b3;
    b3.a = b1.a + b2.a;
    b3.b = b1.b + b2.b;
    return b3;
}
int main()
{
    bibek bi, bek;
    bi.extracts(2, 4);
    bi.display();

    bek.extracts(8, 6);
    bek.display();
    bibek result = add(bi, bek);

    result.print();
    return 0;
}