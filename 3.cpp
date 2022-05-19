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
    IntVector()
    {}

    void push_back(int gt)
    {
        pArr[len] = gt;
        len++;
    }

    ~IntVector()
    {
        delete[]pArr;
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
    int len = 0;
    int* pArr = new int[100];
};

int main()
{
    IntVector vt1(4, 8);
    IntVector vt2;

    // Number of new items
    int newItems;
    cin >> newItems;

    // Add items
    for (int i = 0; i < newItems; i++) {
        int val;
        cin >> val;
        vt2.push_back(val);
    }

    vt1.display();
    vt2.display();
    return 0;
}
