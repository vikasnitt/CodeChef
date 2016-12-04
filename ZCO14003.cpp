#include <iostream>
#include <algorithm>
using namespace std;

#define LLD long long int
int main()
{
    LLD n;
    cin >> n;
    LLD arr[n];
    for(int i = 0; i < n ; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    LLD max = 0;

    for(int i = 0; i < n ; i++) {
        if( (arr[i] * (n - i)) > max) {
            max = arr[i] * ( n - i);
        }
    }
    cout << max << endl;
return 0;
}
