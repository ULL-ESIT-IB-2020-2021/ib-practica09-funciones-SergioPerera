#include <iostream>
#include "functions.h"

using namespace std;

int main (int argc,char *argv[]){

  Usage (argc, argv);
  string in_word{argv[1]}; 
  string in_char{argv[2]};

  FindFirstOf(in_word, in_char);
    
}