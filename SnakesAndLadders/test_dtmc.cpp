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


// Hint: Set N - number of simulations low until you have it working
//       Then set it much much higher, and run in release mode so its faster

int main() {

	SetTransitionMatrix();
	setGameMatrix();
	// Print Results to File
	std::ofstream myfile;
	myfile.open("dtmc_results.txt");

	int start = 0;

	//simulate discrete time Markov Chain
	unsigned int N = 100;
	std::map<int, int> hist;
	
	std::vector<int> discreteMC;
	//std::vector< std::vector<double> > matrix(3, std::vector<double>(3)); //initializes a 3x3 matrix with zeros
	for (unsigned int i = 0; i < N; ++i) {
		
		//TODO (add DTMC, and histogram lines.)
		discreteMC = DTMC(TransitionMatrix,ROLLS,start);
		++hist[std::round(discreteMC.back())];
		int counter = 0;
		// Code if you wanted to print out results at each step
		for (auto elem : discreteMC) {
			if (elem < 100) counter++;
			std::cout << elem << std::endl;
			std::cout << counter << std::endl;
			myfile << elem << std::endl;
			myfile << counter << std::endl;
			
		}
		std::cout << "****New Game*****" << i << std::endl;
		myfile << "******New Game*******" << std::endl;
	}
	//Returns an array discreteMC with the states at each step of the discrete-time Markov Chain
	//The number of transitions is given by steps. The initial state is given by start 
	//(the states are indexed from 0 to n-1 where n is the number of arrays in transMatrix).
	//hist is the histogram 


	// (double)p.second / N    - (decimal) percentage.
	for (auto p : hist) {
		std::cout << p.first << "\t" << (double)p.second / N << std::endl;
	}

	myfile.close();

	return 1;
}