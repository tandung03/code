#include <iostream>

using namespace std;
class Fraction
{
private:
    int tu, mau;
public:
    void input(){
        cin >> tu >> mau;
    }

    void sum(Fraction a)
    {
        tu = tu*a.mau + mau*a.tu;
        mau = mau*a.mau;
    }

     void product(Fraction a)
    {
        tu = tu*a.tu;
        mau = mau*a.mau;
    }

    void division(Fraction a)
    {
        tu = tu*a.mau;
        mau = mau*a.tu;
    }

    int uscln(long a,long b)
    {
        if(a!=0 && b!=0)
        {
            a=abs(a);
            b=abs(b);
            while(a!=b)
            {
                if(a>b)
                    a=a-b;
                else
                    b=b-a;
            }
            return a;
        }
        else
            return 1;
    }

    void rutgon(){
        int u;
            u=uscln(tu,mau);
            tu=tu/u;
            mau=mau/u;
    }

    void display()
    {
        rutgon();
        if(mau<0)
        {mau=-mau; tu=-tu;}
        if(tu==0)
            cout<<"0"<<endl;
        else
            if(mau==1)
                cout<<tu<<endl;
            else
                cout<<tu<<"/"<<mau<<endl;
    }
};
int main()
{
    Fraction f1;
    f1.input();

    Fraction f2;
    f2.input();

    cout << "f1: ";
    f1.display();

    cout << "f2: ";
    f2.display();

    Fraction fSum = f1;
    fSum.sum(f2);
    cout << "f1 + f2: ";
    fSum.display();

    Fraction fProduct = f1;
    fProduct.product(f2);
    cout << "f1 * f2: ";
    fProduct.display();

    Fraction fDivision = f1;
    fDivision.division(f2);
    cout << "f1 / f2: ";
    fDivision.display();
    return 0;
}
