#include <iostream>
#include <vector>


using namespace std;


int main() {
    vector<int> v;

    v.push_back(123);
    v.push_back(456);
    cout << v[0] + v[1] << '\n';

    v.pop_back();

    cout << v.size();


    int n;
    cin >> n;

    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] * vec[i] << '\n';
    }

    for (int item : vec) {
        cout << item * item << '\n';
    }

    vec.pop_back();
    cout << vec.size();

    return 0;
}
