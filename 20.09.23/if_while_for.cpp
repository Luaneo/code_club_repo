#include <iostream>

using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age < 18) {
        cout << "You are not allowed to drink\n";
    }
    else {
        cout << "Here's your drink!\n";
    }

    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        cout << i << '\n';
        i++;
    }
    for (int i = 1; i <= n; i++) {
        cout << i << '\n';
    }
}
