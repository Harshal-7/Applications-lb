#include<iostream>
using namespace std;

class Temp
{
    private:
        float fNo;

    public:
        void Accept()
        {
            cin >> this->fNo;
        }

        float CelciusToKel()
        {
            float Kel = 0.0;
            Kel = this->fNo + 273.15;
            return Kel; 
        }

        float KelToCelcius()
        {
            float Cel = 0.0;
            Cel = this->fNo - 273.15;
            return Cel;
        }

};

int main()
{
    int Choise = 1;
    float fRet = 0.0;
    
    Temp obj;

    while(Choise != 0)
    {
        cout << "\nChoose operation you want to perform : " << endl;
        cout << "1 : Celcius to Kelvin" << endl;
        cout << "2 : Kelvin to Celcius" << endl;
        cout << "3 : Terminate the Appliaction" << endl;

        cin >> Choise;

        switch(Choise)
        {
            case 1:
    
                cout << "Enter Celcius Value : " << endl;
                obj.Accept();
                fRet = obj.CelciusToKel();
                cout << "Kelvin Value is : " << fRet << endl;            
                break;

            case 2:
                cout << "Enter Kelvin Value : " << endl;
                obj.Accept();
                fRet = obj.KelToCelcius();
                cout << "Celcius Value is : " << fRet << endl;
                break;

            case 3:
                cout << "Thank you for using the Application" << endl;
                Choise = 0;
                break;

            default:
                cout << "Please Enter Proper Choise" << endl;
                break;
        }
    }


    return 0;
}