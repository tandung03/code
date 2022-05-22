/*

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string fullName;
    string id;
    string address;
public:
    string getId()
    {
        return id;
    }

    string getFullName()
    {
        return fullName;
    }

    string getAddress()
    {
        return address;
    }

    int countChar(string& str)
    {
        int count = 0;
        while (str[count] != '\0')
            count++;
        return count;
    }
    void removeChar(string& str)
    {
        while (str[0] == ' ')
        {
            str.erase(str.begin() + 0);

        }
        while (str[str.length() - 1] == ' ')
        {
            str.erase(str.begin() + str.length() - 1);
        }
    }
    void removeSpace(string& str)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ' && str[i + 1] == ' ')
            {
                str.erase(str.begin() + i);
                i--;
            }
        }
    }

    void upperFirstChar(string &str)
    {
       int n = countChar(str);
       for (int i = 0; i < n; i++)
       {
           if (str[i] >= 97 && str[i - 1] == ' ' || str[0] >= 97)
                {
                    str[i] -= 32;
                }
           else if (str[i] >= 65 && str[i] <= 90 && str[i - 1] != ' ' && str[0] != str[i])
                {
                    str[i] += 32;
                }
           else if (str[0] >= 65 && str[0] <= 90 && str[i] == str[0]) {
                    str[i] += 32;
                }
       }
    }


        void setDetail(string id, string fullName, string address)
        {
            this->id = id;
            this->fullName = fullName;
            this->address = address;
            upperFirstChar(this->fullName);
            removeChar(this->fullName);
            upperFirstChar(this->address);
            removeSpace(this->address);
        }
    };
int main()
{
    Student st;
    string fullName;
    string id;
    string address;

    getline(cin, id); // Student id
    getline(cin, fullName); // Student full name
    getline(cin, address); // The address of the student

    st.setDetail(id, fullName, address);

    cout << "Student id: " << st.getId() << endl;
    cout << "Full name: " << st.getFullName() << endl;
    cout << "Address: " << st.getAddress() << endl;
    return 0;
}


#include <iostream>
#include <string>
using namespace std;
class Student {
    string fullName;
    string id;
    string address;
    public:
    string delspace(string s)//Xóa kho?ng tr?ng
    {
        string s1 = "";
        int check = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')   check = i;
            if (check&&check <= i)
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
    string format_name(string s) {
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
    string getId() {

        return id;
    }
    string getFullName() {

        return fullName;
    }
    string getAddress() {

        return address;
    }
    void getDetail(string id, string fullName, string address) {
        this->id = delspace(format_name(id));
        this->fullName =  delspace(format_name(fullName));
        this->address = delspace(format_name(address));
    }

};
int main()
{
    Student st;
    string fullName;
    string id;
    string address;
    getline(cin, id); // Student id
    getline(cin, fullName); // Student full name
    getline(cin, address); // The address of the student
    st.getDetail(id, fullName, address);
    cout << "Student id: " << st.getId() << endl;
    cout << "Full name: " << st.getFullName() << endl;
    cout << "Address: " << st.getAddress() << endl;
    return 0;
}

*/
#include <iostream>
#include <string>
using namespace std;
class Student
{
    string fullName;
    string id;
    string address;
public:
    // ham xoa khoang trang
    string deletespace(string str)
    {
        string str1 = "";
        int check = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != ' ')   check = i;
            if (check && check <= i)
            {
                if (str[i] != ' ' || str[i - 1] != ' ')
                {
                    str1 += str[i];
                }
            }
            else
            {
                if (str[i] != ' ' && str[i - 1] != ' ' && str[i + 1] != ' ')
                {
                    str1 += str[i];
                }
            }
        }
        return str1;
    }
    string dinh_dang_ten(string str) {
        string str1 = "";
        for (int i = 0; i < str.length(); i++)
        {
            if ((str[i - 1] == ' ' || str[i - 1] == '\0') && str[i] != ' ')
            {
                str1 += toupper(str[i]);
            }
            else
            {
                str1 += tolower(str[i]);
            }
        }
        return str1;
    }
    string getId() {

        return id;
    }
    string getFullName() {

        return fullName;
    }
    string getAddress() {

        return address;
    }
    void getDetail(string id, string fullName, string address) {
        this->id = deletespace(dinh_dang_ten(id));
        this->fullName = deletespace(dinh_dang_ten(fullName));
        this->address = deletespace(dinh_dang_ten(address));
    }
};
int main()
{
    Student st;
    string fullName;
    string id;
    string address;
    getline(cin, id); // Student id
    getline(cin, fullName); // Student full name
    getline(cin, address); // The address of the student
    st.getDetail(id, fullName, address);
    cout << "Student id: " << st.getId() << endl;
    cout << "Full name: " << st.getFullName() << endl;
    cout << "Address: " << st.getAddress() << endl;
    return 0;
}
