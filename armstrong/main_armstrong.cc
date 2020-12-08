#include <iostream>
#include "functions.h"
#include <string>


int main (int argc,char *argv[]) {

Usage(argc, argv);

std::string in_number = argv[1];

IsArmstrong(in_number);

}
