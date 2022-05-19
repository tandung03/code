#include <iostream>
using namespace std;

class Fraction
{
private:
    int tu, mau;
public:
    int uscln(int a, int b)
    {
        if (a != 0 && b != 0)
        {
            a = abs(a);
            b = abs(b);
            while (a != b)
            {
                if (a > b)
                    a = a - b;
                else
                    b = b - a;
            }
            return a;
        }
        else
            return 1;
    }
    void rutgon() {
        int u;
        u = uscln(tu, mau);
        tu = tu / u;
        mau = mau / u;
    }
    Fraction()
    {
        tu = 0;
    }
    Fraction(int a, int b)
    {
        this->tu = a;
        this->mau = b;
    }
    void display()
    {
        rutgon();
        if (mau < 0)
        {
            mau = -mau; tu = -tu;
        }
        if (tu == 0)
            cout << "0" << endl;
        else
            if (mau == 1)
                cout << tu << endl;
            else
                cout << tu << "/" << mau << endl;
    }
};
int main()
{
    int num, den;
    cin >> num >> den;

    Fraction* pF = new Fraction(num, den);
    Fraction f;

    pF->display(); // Fraction from 'num' and 'den'
    f.display(); // 0

    return 0;
}


