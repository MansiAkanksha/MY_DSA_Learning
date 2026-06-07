#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void sortInWave(vector<int>& arr) {

        int n = arr.size();

        if(n == 1)
            return;

        for(int i = 0; i < n - 1; i += 2) {
            swap(arr[i], arr[i+1]);
        }
    }
};

int main() {

    vector<int> arr = {1,2,3,4,5};

    Solution obj;
    obj.sortInWave(arr);

    for(int x : arr)
        cout << x << " ";

    cout << endl;

    return 0;
}