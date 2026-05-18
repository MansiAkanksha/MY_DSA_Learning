#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int top = 0, bottom = mat.size() - 1;
    int left = 0, right = mat[0].size() - 1;

    while(top <= bottom && left <= right) {

        // top row
        for(int i = left; i <= right; i++)
            cout << mat[top][i] << " ";
        top++;

        // right column
        for(int i = top; i <= bottom; i++)
            cout << mat[i][right] << " ";
        right--;

        // bottom row
        if(top <= bottom) {
            for(int i = right; i >= left; i--)
                cout << mat[bottom][i] << " ";
            bottom--;
        }

        // left column
        if(left <= right) {
            for(int i = bottom; i >= top; i--)
                cout << mat[i][left] << " ";
            left++;
        }
    }

    return 0;
}