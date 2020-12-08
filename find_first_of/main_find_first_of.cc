#include <iostream>
#include "functions.h"

using namespace std;

int main (int argc,char *argv[]){
  
  cout << "Este programa solicita una palabra y un caracter y devuelve la primera posición en la que está el caracter" << endl;
  Usage (argc, argv);
  string in_word{argv[1]}; 
  string in_char{argv[2]};

  FindFirstOf(in_word, in_char);
    
}