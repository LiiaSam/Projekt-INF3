#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string answer; 
    int g;

    cout << "Vyber si cislo a stiskni libovolne tlacitko pro pokracovani. \n" ;
    cin;

    for (int i = 500; i = 1000 ; i = g)
    {

        cout << "Je tvoje cislo vetsi nez" << i << "?" << endl;
        cin >> answer;

        if (answer == "ne")
        {
            cout << "Je tve cislo rovno" << i << "? \n";
            cin >> answer;

            if (answer == "ano")
            {
                cout << "Tvoje cislo je" << i << ". \n";
            }
            if (answer == "ne")
            {
                g = i - (i / 6);
            }
            else
            {
                cout << "Prosim odpovidejte ve tvaru ano/ne.\n";
                break;
            }
        }
        else if (answer == "ano")
        {
            g = (1000 - i)/2 + i;
        }

        else
        {
            cout << "Prosim odpovidejte ve tvaru ano/ne. Hra se restartuje. \n";
        }

        if (i == g)
        {
            cout << "tvoje cislo je" << i << ". \n";
        }
    }



    return 0;
}
