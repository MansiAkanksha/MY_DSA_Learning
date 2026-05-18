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
    
    //Anticlock wise
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n-i-1;j++){
            int temp= arr[i][j];
            arr[i][j]=arr[j][n-i-1];
            arr[j][n-i-1]=arr[n-i-1][n-j-1];
            arr[n-i-1][n-j-1]=arr[n-j-1][i];
            arr[n-j-1][i]=temp;
        }
    }
    cout<<"\nAnticlock wise\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    // vector<vector<int>> a={{1,2},{3,4}};
    // vector<vector<int>> a={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> a={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    //clock wise
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n-i-1;j++){
            int temp= a[i][j];
            a[i][j]=a[n-j-1][i];
            a[n-j-1][i]=a[n-i-1][n-j-1];
            a[n-i-1][n-j-1]=a[j][n-i-1];
            a[j][n-i-1]=temp;
        }
    }
    cout<<"\nClock wise\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}