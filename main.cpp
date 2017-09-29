#include <iostream>

using namespace std;

int main()
{
    int num1 , num2;
    char op, op2;

    cin>> num1 >> op;

    if (op == '<' || op == '>')
    {
        cin >> op2 >> num2;

        if (op == '<' && op2 == '>')
        {
            cout << "ОШИБКА";
        }

        if (op == '<' && op2 == '<')
        {
            cout  << (num1 >> num2) << endl;
        }

        if (op == '>' && op2 == '>')
        {
            cout  << (num1 << num2) << endl;
        }

        if (op == '>' && op2 == '<')
        {
            cout << "ОШИБКА";
        }

        if (op2 != '<' && op2 != '>')
        {
            cout << "ОШИБКА";
        }
    }

     else
    {

        cin >> num2;

        switch (op)
        {

            case '+':
                cout << (num1 + num2) << endl;
                break;

            case '-':
                cout << (num1 - num2) << endl;
                break;

            case '*':
                cout << (num1 * num2) << endl;
                break;

            case '/':
                cout << (double) (num1 / num2) << endl;
                break;

            case '%':
                cout << (num1 % num2) << endl;
                break;

            case '&':
                cout << (num1 & num2) << endl;
                break;

            case '|':
                cout << (num1 | num2) << endl;
                break;

            case '^':
                cout << (num1 ^ num2) << endl;
                break;

            default: "ОШИБКА";

        }
    }
    return (0);
}

