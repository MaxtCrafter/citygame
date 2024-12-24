#include <iostream>
#include <string>

using namespace std;

void startGame();
void visitPark();
void visitCafe();
void visitLibrary();

int main() {
    startGame();
    return 0;
}

void startGame() {
    cout << "Willkommen in der Stadt! Wohin moechtest du gehen?" << endl;
    cout << "1. Park" << endl;
    cout << "2. Cafe" << endl;
    cout << "3. Bibliothek" << endl;
    cout << "Waehle eine Option (1-3): ";
    
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            visitPark();
            break;
        case 2:
            visitCafe();
            break;
        case 3:
            visitLibrary();
            break;
        default:
            cout << "Ungueltige Auswahl. Spiel beendet." << endl;
            break;
    }
}

void visitPark() {
    cout << "Du bist jetzt im Park. Es ist ruhig und schoen hier." << endl;
    // Weitere Logik und Optionen für den Park
}

void visitCafe() {
    cout << "Du bist jetzt im Cafe. Es riecht nach Kaffee und Gebaeck." << endl;
    // Weitere Logik und Optionen für das Cafe
}

void visitLibrary() {
    cout << "Du bist jetzt in der Bibliothek. Es ist ruhig und du siehst viele Buecher." << endl;
    // Weitere Logik und Optionen für die Bibliothek
}
