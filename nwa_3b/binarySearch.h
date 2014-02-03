#include <vector>
#include <iostream>



void binarySearch(const vector<string> wordstring, string key) {
    
    int iteration = 0, left = 0, right = wordstring.size()-1, mid;
    
    while (left <= right) {
        iteration++;
        mid = (int) ((left + right) / 2);
        if (key == wordstring[mid]) {
            cout << "Match found: " << wordstring[mid] << endl;
            iteration++;
            return;
        }
        else if (key > wordstring[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    
    return;
    
}