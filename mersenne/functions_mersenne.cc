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

void usage (int argc, char *argv[]){

  if ( argc == 1 ){

    cout << argv[0] << ": Falta un número natural como parámetro" << endl;
    cout << "Pruebe " << argv[0] << " --help para más información" << endl;

    exit(EXIT_SUCCESS);
  }

  string kHelpText = "\nPara el correcto funcionamiento del mismo se necesita que se le introduzca un único número natural para poder calcular la sucesión de mersenne. Debe introducir ./mersenne N";
  string parameter{argv[1]};

  if ( parameter == "--help" ) {

    cout << kHelpText << endl;

    exit(EXIT_SUCCESS);
  }
}


int Mersenne(int in_number){

    int mersenne{0};

    mersenne = (pow(2, in_number)) -1;
    
    return(mersenne);
    


}
