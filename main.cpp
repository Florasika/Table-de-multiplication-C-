/* Name : Table de multiplication
   Goal : affichage d'une table de multiplication
   Author : NOUDOUKOU Flora
   Date: 2023/03/10
*/

#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
    int nombre, debut, fin, i, resultat;
    char reponse;

    setlocale(LC_CTYPE,"");

    do
    {
        cout << "Porgramme d'une table de multiplication" << endl;
        cout << "Entrez le nombre :";
        cin >> nombre;

        cout << "Preciser le debut :";
        cin >> debut;

        cout << "Preciser la fin :";
        cin >> fin;

        for(i=debut; i<=fin; i++)
        {
            resultat = nombre * i;
            cout << nombre << "X" << i
                 << "=" << resultat << endl;
        }

        do
        {
            cout << "Voulez-vous reprendre (O/N) ?";
            reponse = toupper(getche());

        }while(reponse != 'O' && reponse != 'N');

    }while(reponse == 'O');

    cout << "Fin du programme" << endl;
    return 0;
}
