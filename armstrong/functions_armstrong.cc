#include <iostream>
#include <string>
#include <cmath>

void Usage(int argc,char *argv[]);

int IsArmstrong(std::string in_number){
  
  int current_number{0}, length{0}, maybe_armstrong{0};

  for (int i{0}; i < in_number.length(); i++){

    length = in_number.length();
    current_number = in_number[i];

    maybe_armstrong += pow(current_number, length);
    
  }
  
  if (maybe_armstrong == std::stoi(in_number)){

    std::cout << in_number << "is an armstrong number" << std::endl;

  }

  else {
    std::cout << in_number << "is not an armstrong number" << std::endl;
  }
}