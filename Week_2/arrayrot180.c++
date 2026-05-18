#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n=3;
    // vector<vector<int>> arr={{1,2},{3,4}};
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    // vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    //Reverse everything
    reverse(arr.begin(),arr.end());
    cout<<"\n After Reversing everything:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    //Reverse rows
    for(auto &row:arr)
    reverse(row.begin(),row.end());
    cout<<"\n After Reversing rows:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}