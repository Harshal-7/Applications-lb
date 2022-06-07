// Accept Division & Display exam timing

#include<iostream>
using namespace std;

void DisplaySchedule(char ch)
{
    if((ch == 'a') || (ch == 'A'))
    {
        cout << "Your Exam at 7 AM" << endl;
    }
    else if((ch == 'b') || (ch == 'B'))
    {
        cout << "Your Exam at 8:30 AM" << endl;
    }
    else if((ch == 'c') || (ch == 'C'))
    {
        cout << "Your Exam at 9:20 AM" << endl;
    }
    else if((ch == 'd') || (ch == 'D'))
    {
        cout << "Your Exam at 10:30 AM" << endl;
    }
    else
    {
        cout << "Invalid Division" << endl;
    }
    
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout << "Enter Your Division : " << endl;
    cin >> cValue;

    DisplaySchedule(cValue);

    return 0;
}