#include <iostream>
#include<vector> 
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> arr(n);
    int mx = INT_MIN, mn = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    cout << "Min is " << mn << "\n";
    cout << "Max is " << mx;
    return 0;
}