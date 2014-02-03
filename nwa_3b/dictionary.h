#include "d_matrix.h"
#include <string>
#include <iostream>
#include <vector>
#include "d_except.h"
#include <fstream>

using namespace std;

//this class should handle all word lookups
class Dictionary{
    //reads the words from the dictionary file.
    //stores the words in a vector.
    
public:
    
    vector<string> wordList;
    void importWords();
    
    
};

void Dictionary::importWords(){
    ifstream fin;
    
    
    fin.open("dictionary");
    if (!fin){
        throw fileError("Something went wrong. File cannot be opened");
        return;
    }
    
    //need to store the words in a vector, and then close the file. (words less than 5 characters aren't counted)
    while (!(fin.eof())){
        //if the word its reading is >= 5 characters, push_back into vector. else, do nothing.
        string s; //each line is becoming s
        fin>>s;
        while (s.length() >= 5){ //wordList only holds words of length >= 5.
            wordList.push_back(s);
        }
        
    }


                               
}