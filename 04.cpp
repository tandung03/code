#include <iostream>
#include <string>
using namespace std;
class Date
{
private:
    int day, month, year;
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
            cout << "Birth date: " << getDay() << "-" << getMonth() << "-" << getYear() << endl;
        }
    }
};
class Student : public Date
{
private:
    string id;
    string fullName;
    string address;
public:
    void input() {
        getline(cin, id);
        getline(cin, fullName);
        Date::input();
        cin.ignore(1);
        getline(cin, address);
    }
    string deleteSpace(string s)
    {
        string s1 = "";
        int check = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')   check = i;
            if (check && check <= i)
            {
                if (s[i] != ' ' || s[i - 1] != ' ')
                {
                    s1 = s1 + s[i];
                }
            }
            else
            {
                if (s[i] != ' ' && s[i - 1] != ' ' && s[i + 1] != ' ')
                {
                    s1 = s1 + s[i];
                }
            }
        }
        return s1;
    }

    string format_String(string s)
    {
        string s1 = "";
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i - 1] == ' ' || s[i - 1] == '\0') && s[i] != ' ')
            {
                s1 += toupper(s[i]);
            }
            else
            {
                s1 += tolower(s[i]);
            }
        }
        return s1;
    }

    void setLastName(string& s) {
        string temp_Name;
        int i, lastDistance = 0;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                lastDistance = i;
            }
        }
        lastDistance++;

        while (s[lastDistance] != '\0')
        {
            temp_Name += s[lastDistance];
            lastDistance++;
        }
        s = temp_Name;
    }

    string getLastName(string s)
    {
        setLastName(s);
        return s;
    }

    void setFirstName(string& s) {
        string temp_Name;
        int i = 0;
        while (true)
        {
            if (s[i] != ' ')
            {
                temp_Name += s[i];
                i++;
            }
            else break;
        }
        s = temp_Name;
    }

    string getFirstName(string s)
    {
        setFirstName(s);
        return s;
    }

    string getFullName()
    {
        this->fullName = deleteSpace(format_String(fullName));
        return fullName;
    }

    string getAddress()
    {
        this->address = deleteSpace(format_String(address));
        return address;
    }

    void display() {
        cout << "Full name: " << getFullName() << endl;
        cout << "First name: " << getFirstName(fullName) << endl;
        cout << "Last name: " << getLastName(fullName) << endl;
        Date::display();
        cout << "Address: " << getAddress() << endl;
    }
};
int main()
{
    Student st;
    st.input();
    st.display();
    return 0;
}
