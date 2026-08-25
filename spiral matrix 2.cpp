#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    int num = 1;

    while(top <= bottom && left <= right) {

        // Left -> Right
        for(int i = left; i <= right; i++) {
            arr[top][i] = num;
            num++;
        }
        top++;

        // Top -> Bottom
        for(int i = top; i <= bottom; i++) {
            arr[i][right] = num;
            num++;
        }
        right--;

        // Right -> Left
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                arr[bottom][i] = num;
                num++;
            }
            bottom--;
        }

        // Bottom -> Top
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                arr[i][left] = num;
                num++;
            }
            left++;
        }
    }

    // Print matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
