#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // vector<int> v={1,3,5,2,4};
    // vector<int> v={1,1,1,1,1,1,1};
    // vector<int> v={1,2};
    vector<int> v={1};
    int n=v.size();
    if(n<2){
        cout<<"\nOnly one element no min1 and min2\n";
        return 0;
    }
    sort(v.begin(),v.end());
    int min1=v[0],min2=-1;
    for(int x:v){
        if(x!=min1){
            min2=x;
            break;
        }
    }
    if(min2==-1){
        cout<<"\nAll elemenst are same so no min1 and min2\n";
        return 0;
    }
    cout<<"min1 =" << min1 << endl << "min2 = "<<min2;
    return 0;
}