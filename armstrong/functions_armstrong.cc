#include <iostream>
#include <string>
#include <cmath>

void Usage(int argc,char *argv[]){}

int IsArmstrong(std::string in_number){
  
  int maybe_armstrong{0}, conversion{0};
  std::string current_number;

  for (int i{0}; i < in_number.length(); i++){

    current_number = in_number[i]; 
    conversion = stoi(current_number);

    maybe_armstrong += pow(conversion, in_number.length());
    
  }
  
  if (maybe_armstrong == std::stoi(in_number)){

    std::cout << in_number << " is an armstrong number" << std::endl;
    
  }

  else {
    std::cout << in_number << " is not an armstrong number" << std::endl;
  }
}