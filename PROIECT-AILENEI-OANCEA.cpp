#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    string answer;

    cout << "Bine ai venit la jocul Trivia IT! Raspunde la urmatoarele 5 intrebari." << endl;

    // Intrebarea 1
    cout << "1. Ce inseamna abrevierea WWW?" << endl;
    cout << "a) World Wide Web\n"
         << "b) Wide World Web\n"
         << "c) Web Wide World\n"
         << "d) World Web Wide" << endl;
    cout << "Raspunsul tau: ";
    cin >> answer;
    if (answer == "a" || answer == "A") {
        cout << "Corect!" << endl;
        score++;
    } else {
        cout << "Gresit! Raspunsul corect era a) World Wide Web." << endl;
    }

    // Intrebarea 2
    cout << "\n2. Ce este o parola puternica?" << endl;
    cout << "a) O parola care contine doar litere mici\n"
         << "b) O parola care contine litere, cifre si simboluri\n"
         << "c) O parola formata doar din cifre\n"
         << "d) O parola foarte scurta" << endl;
    cout << "Raspunsul tau: ";
    cin >> answer;
    if (answer == "b" || answer == "B") {
        cout << "Corect!" << endl;
        score++;
    } else {
        cout << "Gresit! Raspunsul corect era b) O parola care contine litere, cifre si simboluri." << endl;
    }

    // Intrebarea 3
    cout << "\n3. Ce reprezinta acronimul IP?" << endl;
    cout << "a) Internet Protocol\n"
         << "b) Internet Program\n"
         << "c) Information Path\n"
         << "d) Internet Port" << endl;
    cout << "Raspunsul tau: ";
    cin >> answer;
    if (answer == "a" || answer == "A") {
        cout << "Corect!" << endl;
        score++;
    } else {
        cout << "Gresit! Raspunsul corect era a) Internet Protocol." << endl;
    }

    // Intrebarea 4
    cout << "\n4. Ce face comanda 'ls' in Linux?" << endl;
    cout << "a) Listeaza fisierele si directoarele\n"
         << "b) Sterge fisierele\n"
         << "c) Creeaza un fisier nou\n"
         << "d) Schimba directorul curent" << endl;
    cout << "Raspunsul tau: ";
    cin >> answer;
    if (answer == "a" || answer == "A") {
        cout << "Corect!" << endl;
        score++;
    } else {
        cout << "Gresit! Raspunsul corect era a) Listeaza fisierele si directoarele." << endl;
    }

    // Intrebarea 5
    cout << "\n5. Ce reprezinta HTML?" << endl;
    cout << "a) HyperText Markup Language\n"
         << "b) HighText Machine Language\n"
         << "c) Hyperlink Text Management Language\n"
         << "d) Home Tool Markup Language" << endl;
    cout << "Raspunsul tau: ";
    cin >> answer;
    if (answer == "a" || answer == "A") {
        cout << "Corect!" << endl;
        score++;
    } else {
        cout << "Gresit! Raspunsul corect era a) HyperText Markup Language." << endl;
    }

    // Scor final
    cout << "\nAi terminat jocul! Scorul tau final este: " << score << " din 5." << endl;
    if (score == 5) {
        cout << "Felicitari! Ai raspuns corect la toate intrebarile!" << endl;
    } else if (score >= 3) {
        cout << "Bine jucat! Ai obtinut un scor bun." << endl;
    } else {
        cout << "Mai incearca! Sunt sigur ca poti mai bine." << endl;
    }

    return 0;
}

