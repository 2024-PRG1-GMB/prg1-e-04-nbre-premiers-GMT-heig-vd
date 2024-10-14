/**
 * @file main.cpp
 * @brief Affichage de nombres premiers
 * @version 1.0
 * @date 08.10.2024
 * @auteur: Garis Miehlbradt
 */

#include <iostream>

using namespace std;

int main() {

    char continueProgram = 'O';
    int primeMaxNumber;

    cout << "Ce programme ..." << endl;

    do {
        cout << endl;
        do {
            cout << "entrer une valeur [2-1000] :";
            cin >> primeMaxNumber;
        } while (primeMaxNumber < 2 || primeMaxNumber > 1000);

        cout << "\nVoici la liste des nombres premiers" << endl;

        int countBeforeEndLine = 0;

        for (int i = 2; i <= primeMaxNumber; i++) {
            bool isPrime = true;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                ++countBeforeEndLine;
                cout << "\t" << i;
                if (countBeforeEndLine == 5) {
                    cout << endl;
                    countBeforeEndLine = 0;
                }
            }
        }

        cout << "\n\n";

        do {
            cout << "Voulez-vous recommencer [O/N] :";
            cin >> continueProgram;
        } while (continueProgram != 'O' && continueProgram != 'N');

    } while (continueProgram == 'O');

    cout << "\nFin de programme\n" << endl;
    return 0;
}