#include <bits/stdc++.h>
using namespace std;

/*program for using base and derived class

*/
class base
{
public:
    base()
    {
        cout << "non-param base" << endl;
    }
    base(int x)
    {
        cout << "param of base" << x << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "non-param derived" << endl;
    }
    derived(int y)
    {
        cout << "param of derived" << y << endl;
    }
    derived(int x, int y) : base(x)
    {
        cout << "param of derived" << endl;
    }
};
int main()
{
    derived(5, 10);
}
/*NOTE:
1. derived() ; base class default constructor then derived class default constructor
2. derived(5) ; base class default constructor then derived class single parameterized constructor
3. derived(5, 10); this is the way to call base class parameterized constructor from derived class parameterized constructor

*/