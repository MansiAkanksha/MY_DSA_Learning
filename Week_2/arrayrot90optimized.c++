#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n=4;
    // vector<vector<int>> arr={{1,2},{3,4}};
    // vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    //Clock wise
    //step 1: transpose of matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // int temp= arr[i][j];
            // arr[i][j]=arr[j][i];
            // arr[j][i]=temp;
            swap(arr[i][j],arr[j][i]);
        }
    }

    //step 2: reverse the column
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
    
    cout<<"\nClock wise\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    // vector<vector<int>> a={{1,2},{3,4}};
    // vector<vector<int>> a={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> a={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    //anticlock wise

    //step 1: transpose of matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // int temp= a[i][j];
            // a[i][j]=a[j][i];
            // a[j][i]=temp;
            swap(a[i][j],a[j][i]);
        }
    }

    //step 2: reverse the row
    for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            swap(a[i][j],a[n-i-1][j]);
        }
    }

    cout<<"\nAnti clock wise\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}