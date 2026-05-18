#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
     vector<vector<int>> arr = {{1,2,3},{5,6,7}};

    int m = arr.size();  
    int n = arr[0].size();  

    vector<vector<int>> transpose(n, vector<int>(m));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    cout << "Transpose:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}