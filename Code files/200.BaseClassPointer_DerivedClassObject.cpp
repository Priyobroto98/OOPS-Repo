#include <iostream>
using namespace std;

/*program for demo#1-base class pointer derived class object

*/
class base
{
public:
	void fun1()
	{
		cout << "fun1 of base" << endl;
	}
};
class derived : public base
{
public:
	void fun1()
	{
		cout << "fun2 of derived" << endl;
	}
};
int main()
{
	derived d;
	base *ptr = &d;
	ptr->fun1();
	// ptr->fun2();// this is not allowed
	return 0;
}
/*
NOTE:
we can only access the base class methodes with the help of a derived class object and base class pointer
but vice versa is not true
eg:
an advance car(derived class) will always have the features of the base car (base class)
so only the base car features can be accessible in this way

but the base car may not have the features of the advanced car thats why the vice versa concept is not true

*/