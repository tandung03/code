#include <iostream>
#include <vector>

using namespace std;

class IntVector
{
public:
    IntVector(int a, int b)
    {
        for (int i = 0; i < a; i++)
        {
            pArr[i] = b;
        }
        len = a;
    }
    IntVector(IntVector& vt)
    {
        len = vt.len;
        for (int i = 0; i < len; i++)
        {
            pArr[i] = vt.pArr[i];
            len = 2;
        }
    }
    void pop_back()
    {
       // pArr[len - 1] = '/0';
       // len--;
    }
    void push_back(int val)
    {
        pArr[len] = val;
        len++;
    }
    ~IntVector()
    {
        delete[] pArr;
    }
    void display()
    {
        for (int i = 0; i < len; i++)
        {
            if (i == len - 1)
            {
                cout << pArr[i];
            }
            else
            {
                cout << pArr[i] << " ";
            }
        }
        cout << endl;
    }
private:
    int len;
    int* pArr = new int[100]; // cap phat bo nho dong
};
int main()
{
    IntVector vt1(4, 8); // 8 8 8 8

    IntVector vt2 = vt1; // 8 8 8 8
    vt2.pop_back(); // 8 8 8
    vt2.pop_back(); // 8 8

    // Number of new items
    int newItems;
    cin >> newItems;

    // Add items
    for (int i = 0; i < newItems; i++) {
        int val;
        cin >> val;
        vt2.push_back(val);
    }

    vt1.display(); // 8 8 8 8
    vt2.display(); // ???
    return 0;
}

