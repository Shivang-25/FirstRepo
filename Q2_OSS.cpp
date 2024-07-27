#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter size of Array: " << endl;
    cin >> n;

    int arr[n];
    double avg;
    cout << "Enter Numbers: " << endl;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        avg += arr[i];
    }
    cout << "Sum: " << avg << endl;
    avg = avg / n;
    cout << "Average: " << avg << endl;
    return 0;
}
