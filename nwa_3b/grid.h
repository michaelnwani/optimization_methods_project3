#include "d_matrix.h"
#include <string>
#include <iostream>
#include <vector>
#include "d_except.h"
#include <fstream>

using namespace std;

//reads the letters in the grid from a file and stores them in a matrix.
class Grid{
public:
    
    Grid(string filename);
    matrix<char> m; //matrix class object
    
};

Grid::Grid(string filename){
    
    ifstream fin;
    
    fin.open(filename.c_str());
    if (!fin){
        throw fileError("Something went wrong. File cannot be opened");
        return;
    }
    
    int numRows, numCols;
    fin >> numRows;
    fin >> numCols;
    
    m.resize(numRows, numCols);
    for (int i=0; i <numCols; i++){
        for (int j=0; j< numRows; j++){
            fin >> m[i][j];
        }
    }
    
}