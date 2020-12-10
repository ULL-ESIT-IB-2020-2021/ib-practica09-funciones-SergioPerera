#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <unistd.h>
#include <cmath>
using namespace std;

void Usage(int argc, char *argv[]){}

double RandVar(int in_vector_size, int max_value, int min_value){

  double random_variable;
  vector<double> vector_random;
  srand (time(NULL));

  for (int i = 0; i < in_vector_size; i++){

    random_variable = ((double) rand() / (RAND_MAX)) * (max_value) + min_value;

    if (random_variable > max_value){

      random_variable -= min_value;

    }

    usleep(1000000);  // como la semilla del número pseudoaleatorio depende de la variación del tiempo lo que hacemos es esperar a que pase 1 s para que la semilla cambie

    return random_variable;

  }

}

double Median(vector<double> vector_random, int in_vector_size){


  double median{0};

  for (int i{0}; i < in_vector_size; i++){

    median += vector_random[i];

  }

  median = median / in_vector_size;

  return median;

}

double MaxMinValue(vector<double> vector_random, int in_vector_size){

  double min_value{RAND_MAX}, max_value{0};

  for (int i {0}; i < in_vector_size; i++){

    if(vector_random[i] > max_value){

      max_value = vector_random[i];

    }

    if (vector_random[i] < min_value){

      min_value = vector_random[i];

    }

  }

  cout << "El valor máximo es: " << max_value << "\nEl valor mínimo es: " << min_value << endl;
}

double Sum(vector<double> vector_random, int in_vector_size){

  double sum_of_components{0};

  for (int i{0}; i < in_vector_size; i++){

    sum_of_components += vector_random[i];

  }

  std:cout << "La suma de las componentes del vector es: " << sum_of_components << std::endl;

}

double Product(vector<double> vector_random, int in_vector_size){

  double product_of_components{1};

  for( int i{0}; i < in_vector_size; i++ ){

    product_of_components *= vector_random[i];

  }

  std::cout << "El producto de las componentes del vector es: " << product_of_components << std::endl;
}