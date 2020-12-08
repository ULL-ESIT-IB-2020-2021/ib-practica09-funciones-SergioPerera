#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

bool IsPrime(int number) {

  bool prime = true;

  for (int divider = 2; divider < number; divider++){
      if (number % divider == 0){

        prime = false;

      }

    }

  return prime;
}

void usage (int argc, char *argv[]){}

int Mersenne(int in_number){

    int mersenne{0};

    mersenne = (pow(2, in_number)) -1;

    cout << mersenne << endl;

}