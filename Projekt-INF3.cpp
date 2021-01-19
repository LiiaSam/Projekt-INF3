#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string answer; 
    int g;

    cout << "Vyber si cislo a stiskni libovolne tlacitko pro pokracovani. \n" ;
    cin;

    for (int i = 500; i = g ; i = i/2)
    {
        cout << "Je tvoje cislo vetsi nez" << i << "?" << endl;

        cin >> answer;
        if (answer == "ne")
        {
            g = i / 2;
        }
        else if (answer == "ano")
        {
            g = i + i / 2;
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
