#include <iostream>
#include <string>
#include "functions.h"


int main(int argc,char *argv[]) {

  std::cout << "Este programa solicita un número y comprueba si es un número armstrong o no" << std::endl;

  Usage(argc, argv);

  std::string in_number = argv[1];

  IsArmstrong(in_number);

}
