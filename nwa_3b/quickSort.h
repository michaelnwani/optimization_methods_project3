#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<string>* wordlist, int left, int right) {
    
    int i = left, j = right;
    
    string tmp;
    string pivot = (*wordlist)[(left + right) / 2];
    
    //partition
    
    while (i <= j) {
        
        while ((*wordlist)[i] < pivot)
            
            i++;
        
        while ((*wordlist)[j] > pivot)
            
            j--;
        
        if (i <= j) {
            
            tmp = (*wordlist)[i];
            
            (*wordlist)[i] = (*wordlist)[j];
            
            (*wordlist)[j] = tmp;
            
            i++;
            
            j--;
        }
    }
    
    
    
    //Call recursively until sorted
    
    if (left < j)
        
        quickSort(wordlist, left, j);
    
    if (i < right)
        
        quickSort(wordlist, i, right);
    
}