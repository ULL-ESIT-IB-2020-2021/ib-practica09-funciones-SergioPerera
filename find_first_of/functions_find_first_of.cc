#include <iostream>
#include <string>

using namespace std;

void Usage (int argc, char *argv[]){}



int FindFirstOf(string in_word, string in_char){

  int word_length{in_word.length()}, counter{0};
  string current_letter = "" ;

  for (int i{0}; i < word_length; ++i){
    
    current_letter = in_word[i];
    counter++; 

    if (current_letter == in_char){

      cout << counter - 1 << endl;

    }
    else if (counter == in_word.length()){

      cout << "-1" << endl;

    }

  }

}