#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
public:
    void input()
    {
        cin >> day >> month >> year;
    }

    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    bool setDate(int day, int month, int year)
    {
        if (day > 0 && day < 32 && month > 0 && month < 13 && year > 0)
        {
            this->day = day;
            this->month = month;
            this->year = year;
            return true;
        }
        return false;
    }

    void display()
    {
        if (setDate(day, month, year))
        {
            cout << getDay() << "-" << getMonth() << "-" << getYear() << endl;
        }
        else
        {
            while (setDate(day, month, year) != 1)
            {
                cout << "Invalid date\n";
                input();
                display();
            }
        }
    }

    int dayOfTheYear()
    {
        int sum = 0;
        sum = day;
        for (int i = 1; i < month; i++)
        {
            switch (i)
            {
            case 4:
            case 6:
            case 9:
            case 11:
                sum += 30;
                break;
            case 2:
                if (year % 4 == 0 && year % 100 != 0) sum += 29;
                else sum += 28;
                break;
            default:
                sum += 31;
            }
        }
        return sum;
    }
};
int main()
{
    Date dt;
    dt.input();
    dt.display();
    cout << dt.dayOfTheYear();
    return 0;
}

