#include <iostream>
#include <vector>
using namespace std;
//Time complexity = O(n);
int main()
{
    int n, key;
    cin >> n >> key;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Found at index " << i;
            break;
        }
    }
    return 0;
}
