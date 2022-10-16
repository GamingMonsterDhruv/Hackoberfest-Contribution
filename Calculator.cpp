#include <iostream>
using namespace std;

int main()
{
    int opr, num1, num2;
    cout << "Select operation" << endl;
    cout << "1=Add" << endl;
    cout << "2=Subtract" << endl;
    cout << "3=Multiply" << endl;
    cout << "4=Devide" << endl;
    cin >> opr; // taken userinput to select an type of calculation

    cout << "Enter the first number=" << endl;
    cin >> num1;
    cout << "Enter the second number=" << endl;
    cin >> num2;
    // Taken both numbers from the user to proceed for the calculation

   
        if (opr == 1)
        {
            cout << num1 << "+" << num2 <<"="<< num1 + num2 << endl;
        }
        else if (opr == 2)
        {
            cout << num1 << "-" << num2 <<"="<< num1 - num2 << endl;
        }
        else if (opr == 3)
        {
            cout << num1 << "x" << num2 <<"="<< num1 * num2 << endl;
        }
        else if (opr == 4)
        {
            cout << num1 << "/" << num2 <<"="<< num1 / num2 << endl;
        }

    return 0;
}
