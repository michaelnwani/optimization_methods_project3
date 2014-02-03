#include "dictionary.h"
#include "grid.h"

void bubbleSort(vector<string> &arr, int n) {
    bool swapped = true;
    int j = 0;
    string tmp;
    while (swapped) {
        swapped = false;
        j++;
        for (int i = 0; i < n - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swapped = true;
            }
        }
    }
}