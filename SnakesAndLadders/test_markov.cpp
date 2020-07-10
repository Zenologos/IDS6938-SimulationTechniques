#include <iostream>
#include <functional>   
#include <numeric> 
#include <iostream>
#include <iomanip>
#include <fstream>
#include <map>
#include <Eigen\dense>

#include "markov.h"
#include "TransitionMatrix.h"

int main() {

	SetTransitionMatrix();
	setGameMatrix();

	//Output Vector
	v.setZero();
	v(0) = 1.0;

	// Print Results to File
	std::ofstream myfile;
	std::ofstream myfile2;
	myfile.open("markov_results.txt");
	myfile2.open("GameMatrix_results.txt");


	// TODO add Markov vector - Matrix multiplication
	for (int i = 0; i < 101; i++) {

	v = v.transpose() * TransitionMatrix;
	std::cout << v << std::endl; //this is just a sample, becareful how you print to file so you can mine useful stats
	myfile << v << std::endl;
	myfile << "*************" << std::endl;
	}
	
	v.setZero();
	v(0) = 1.0;

	for (int i = 0; i < 100; i++) {
		v = v.transpose() * GameMatrix;
		for (int j = 0; j < size - 1; j++)
		myfile2 << v(j) << std::endl;
		std::cout << v << std::endl; //this is just a sample, becareful how you print to file so you can mine useful stats
		myfile2 << "*************" << std::endl;
	}

	
	
	
	myfile.close();
	myfile2.close();


  return 1;
}