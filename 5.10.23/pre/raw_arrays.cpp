#include <iostream>


using namespace std;


int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << arr[0] << '\n';
    cout << arr[2] * arr[8] << '\n';

    arr[0] = 777;
}