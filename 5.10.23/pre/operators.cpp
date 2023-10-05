#include <iostream>


using namespace std;


int main() {
    int age;
    cin >> age;
    if (age < 18) {
        cout << "You are too old to drink\n";
    } else {
        cout << "Here's your drink!\n";
    }

    int begin, end, step;
    cin >> begin >> end >> step;

    int i = begin;
    while (i < end) {
        cout << i << '\n';
        i += step;
    }

    for (int i = begin; i < end; i += step) {
        cout << i << '\n';
    }
}
