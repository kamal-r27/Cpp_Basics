#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char ch;
    cout << "Enter the first number : ";
    cin >> x;
    cout << "Enter the second number : ";
    cin >> y;
    cout << "Enter the opertion you want to perform: + , - , / , * :";
    cin >> ch;
    if(ch == '+')
        {
            cout << x + y;
        }
    else if(ch == '*')
        {cout << x * y;
        }
    else if(ch == '-')
        {cout << x -y;
        }
    else
        {cout << x / y;
        }
   
    return 0;
}