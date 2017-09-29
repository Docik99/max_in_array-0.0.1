#include "iostream"
#include "sstream"

using namespace std;

int main() { int max,str[10];

    for (string string; getline(cin, string) ; )
    {
        istringstream stream(string);
        bool failure = false;
        for (int i = 0; i < 10; ++i)
        {
            if (!(stream >> str[i]))
            {
                failure = true;
                break;
            }
        }

        max = str[1];

        if (!failure)
        {
            for (int i = 0; i < 10; ++i)
            {
                if (str[i] > max)
                {
                    max = str[i];
                }
            }
            cout << max << endl;
            break;
        }
        else
        {
            cout << "An error has occured while reading numbers from line" << endl;
        }
    }

    cin.get();

    return 0;
}
