#include <iostream>
using namespace std;

int main() {
    int n = 15, count, tmp, tmpi;
    int arr[n] = {10, 2, 3, 4, 11, 12, 13, 14, 15, 1, 6, 8, 7, 9, 5};

    count = 0;
    while(1) {

        tmp = arr[count];
        tmpi = count;
        for(int i = count; i < n; ++i) {
            if (tmp > arr[i]){
                tmpi = i;
                tmp = arr[i];
            }
        }
        tmp = arr[count];
        arr[count] = arr[tmpi];
        arr[tmpi] = tmp;
        count++;
        if (count == n - 1) {
            break;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}