#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    cout << "Even Numbers - " << even << "\n";
    cout << "Odd Numbers - " << odd;

    return 0;
}
