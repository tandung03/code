#include <iostream>
#include <math.h>
using namespace std;

class Date
{
private:
    int day, month, year;
public:
    Date()
    {
        day = 1, month = 1, year = 1900;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void input()
    {
        cin >> day >> month >> year;
    }
    void display()
    {
        cout << day << "-" << month << "-" << year<<endl;
    }
    int differentDays(Date x)
    {
        int distance_1 = 0;
        if (month < 3)
        {
            year--;
            month += 12;
        }
        distance_1 =  365 * year + year / 4 - year / 100 + year / 400 + (153 * month - 457) / 5 + day - 306;
        int distance_2 = 0;
        if (x.month < 3)
        {
            x.year--;
            x.month += 12;
        }
        distance_2 = 365 * x.year + x.year / 4 - x.year / 100 + x.year / 400 + (153 * x.month - 457) / 5 + x.day - 306;
        int distance = abs(distance_2 - distance_1);
        return distance;
    }
};
int main()
{
    Date dt1;
    Date dt2(20, 10, 2001);
    Date dt3;
    Date dt4;

    dt3.input();
    dt4.input();

    dt1.display(); // 1-1-1900
    dt2.display(); // 20-10-2001
    dt3.display();
    dt4.display();

    cout << dt3.differentDays(dt4);

    return 0;
}


