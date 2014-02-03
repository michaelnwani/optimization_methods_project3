#include "grid.h"
#include "dictionary.h"
#include "findMatches.h"

using namespace std;


void testSearch(string gridfile){
    
    Grid grid(gridfile);
    
    Dictionary dictionary;
    
    //will then print out all the words from the dictionary that can be found in the grid.
    findMatches(dictionary, grid);
    
}