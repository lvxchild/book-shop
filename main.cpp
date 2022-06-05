#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, password;
    int tries = 0;
    bool correct_login = false;

    while(tries<=5 || correct_login==false) {
        cout << "Name: ";
        cin >> name;
        cout << name + "\n";
        cout << "Password: ";
        cin >> password;
        tries++;
        if (tries < 5) {
            cout << "One more try.\n";
        }
        else {
            cout << "You failed to log in too many times. Now exiting the program.\n";
            exit(0);
        }
    }

    cout << "Hello " + name + "\nWhat do you want to do?\n";
    return 0;
}

void admin() {
    int choice;
    show_choices(5);
    cin >> choice;
}

void manager() {
    int choice;
    show_choices(4);
    cin >> choice;
}

void costumer() {
    int choice;
    show_choices(3);
    cin >> choice;
}

void show_choices(int x) {
    string choices[5] = {"1) Take a book.\n",
        "2) Give back a book.\n",
        "3) See your books history.\n",
        "4) See books that are currently out.\n",
        "5) Search client.\n"};
    for (int i = 1; i <= x; i++) {
            cout << choices[i];
    }
}

void job(int x) {
    switch (x)
    {
    case 1:
        /* show books or search for a book */
        break;
    case 2:
        /* show which books you hate to return, then choose the one you want to return */
        break;
    case 3:
        /* show client's books borrowing history */
        break;
    case 4:
        /* show all book that currently aren't in the shop */
        break;
    case 5:
        /* search for a client */
        break;
    
    default:
        break;
    }
}