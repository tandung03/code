#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
public:
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
        if(day < 1 || day > 31)
        {
            return false;
        }
        else
        {
            this-> day = day;
        }
        if(month < 1 || month > 12)
        {
            return false;
        }
        else
        {
            this-> month = month;
        }
        if(year < 1 )
        {
            return false;
        }
        else
        {
            this-> year = year;
        }
        return true;
    }
};
int main()
{
    Date dt;
    int day, month, year;
    cin >> day >> month >> year;
    if (dt.setDate(day, month, year))
    {
        cout << dt.getDay() << "-" << dt.getMonth() << "-" << dt.getYear();
    }
    else
    {
        cout << "Invalid date";
    }
    return 0;
}
