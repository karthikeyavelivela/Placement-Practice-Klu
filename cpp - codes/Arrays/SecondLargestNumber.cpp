#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest = INT_MIN, second = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    cout << "Second largest number : " << second;
    return 0;
}
