#include <bits/stdc++.h>
using namespace std;
// Methode-1 : using custom operator
class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << "your complex number is : " << real << " + i" << img << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

// Methode-2 : Usinng Friend Function :
class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << "your complex number is : " << real << " + i" << img << endl;
    }
    friend Complex operator+(Complex c1, Complex c2);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    Complex c1(5, 3), c2(10, 5), c3;
    c3 = c1 + c2;
    c3.display();
}

// Stream operator overloading
// Input stream cin >> (extraction) operator can be overloaded upon a class
// output stream cout << (insertion) operator can be overloaded upon a class

// class Complex
// {
// private:
//     int real;
//     int img;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         img = i;
//     }
//     friend ostream &operator<<(ostream &out, Complex &c);
// };
// ostream &operator<<(ostream &out, Complex &c)
// {
//     out << c.real << "+i" << c.img << endl;
//     return out;
// }
// int main()
// {
//     Complex c(10, 5);
//     cout << c << endl;
//     // operator<<(cout, c);
// }