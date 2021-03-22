#include <iostream>
#include <string>
using namespace std;

int main() {
    // Die Variablen:
    float a;
    float b;
    float ergebnis;
    string op2;

    // Mal die ganzen Strings:
    string zahl1 = "Erste Zahl eingeben: ";
    string zahl2 = "Zweite Zahl eingeben: ";
    string op = "Was möchtst du tun? (Erlaubt ist: +, -, *, /) : ";
    string calc = "Ergebnis ist: ";

    // Dann das programm:
    cout << op;
    cin >> op2;

    // Erkennen ob der eingegebene operator gültig ist
    if (op2 != string("+") && op2 != string("-") && op2 != string("*") && op2 != string("/")) {
        cout << string("Keinen gültigen operator eingegeben!") << endl;
        main();
    }

    // Eingabe von 2 zahlen
    else {
        cout << zahl1;
        cin >> a;

        cout << zahl2;
        cin >> b;

        // Berechnungen
        if (op2 == string("+")) {
            ergebnis = a + b;
            cout << calc << ergebnis << endl;
        }

        else if (op2 == string("-")) {
            ergebnis = a - b;
            cout << calc << ergebnis << endl;
        }

        else if (op2 == string("*")) {
            ergebnis = a * b;
            cout << calc << ergebnis << endl;
        }

        else if (op2 == string("/")) {
            ergebnis = a / b;
            cout << calc << ergebnis << endl;
        }
    }
}
