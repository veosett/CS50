#include <iostream>
using namespace std;

int main() {
    int n = 10, count, tmp;
    int arr[n] = {10, 2, 3, 4, 1, 6, 8, 7, 9, 5};

    while(1) {
        count = 0;
        for(int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]){
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                count++;
            }
        }
        if (count == 0) {
            break;
        }
    }

    for(int i = 0; i < n;i++){
        cout << arr[i] << endl;
    }

    return 0;
}