#include <iostream>
#include<vector> 
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> arr(n);
    for(int i = 0; i < n ;i++) 
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum is " << sum;
    return 0;
}