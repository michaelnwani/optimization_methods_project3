#include "grid.h"
#include "dictionary.h"
#include "quickSort.h"
#include "binarySearch.h"

using namespace std;

void findMatches(Dictionary &dictionary, Grid &grid){
    
    for (int row = 0; row < grid.m.rows(); row++){
        for (int col = 0; col < grid.m.cols(); col++){
            for (int rowDir = -1; rowDir < grid.m.rows(); rowDir++){
                for (int colDir = -1; colDir < grid.m.cols(); colDir++){
                    if (rowDir != 0 && colDir != 0){
                        
                        string sequence = "";
                        sequence = sequence + grid.m[row][col];
                        
                        for (int i = row + rowDir, j = col + colDir; i >= 0 && j >= 0
                             && i < grid.m.rows() && j < grid.m.cols(); i = i + rowDir, j = j + colDir) {
                            
                            sequence = sequence + grid.m[i][j];
                            
                            //will only check for sequences greater than or equal to 5 letters.
                            if (sequence.length() >= 5 && sequence.length() <= 22) {
                                dictionary.importWords();
                                quickSort(&dictionary.wordList, 0, dictionary.wordList.size()-1);
                                
                                binarySearch(dictionary.wordList, sequence);
                                //if the sequence is equal to any word inside the word list...
                                /*for (int j = 0; j <= dictionary.wordList.size(); j++){
                                    if (sequence == dictionary.wordList.at(j)){ 
                                        cout << dictionary.wordList.at(j) << endl;
                                    }
                                    
                                }*/
                                
                            }
                        }
                        
                        
                        
                    }
                    
                }
            }
        }
    }
    
}