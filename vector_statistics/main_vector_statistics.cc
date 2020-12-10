#include <iostream>
#include "functions.h"
#include <cstdlib>
#include <vector>
#include <unistd.h>


int main (int argc,char *argv[]){

  double RandVar(int in_vector_size, int max_value, int min_value);

  int in_vector_size{0}, max_value{0}, min_value{0};
  double random_variable{0}, median{0}, deviation{0}, max_min_value{0};
  std::vector<double> vector_random;

  Usage(argc, argv);

  in_vector_size = atoi(argv [1]);
  max_value = atoi(argv [2]);
  min_value = atoi(argv [3]);

  std::cout << "Este programa solicita el tamaño de un vector y el intervalo en el que estarán comprendidas sus componentes y calculará"
  << " la suma, el producto, la media, el máximo y el mínimo de los valores almacenados en el vector" << std::endl;


  std::cout << "\n" << " ( "; // hacemos esto para separar la componentes del vector

  for (int i = 0; i < in_vector_size; i++){

    vector_random.emplace_back(RandVar(in_vector_size, max_value, min_value));
    std::cout << vector_random[i] << " ";

  }

  std::cout << ")" << std::endl;

  median = Median(vector_random, in_vector_size);
  std::cout << "La media es: " << median << std::endl;

  max_min_value = MaxMinValue(vector_random, in_vector_size);

  Sum(vector_random, in_vector_size);

  Product(vector_random, in_vector_size);
}
