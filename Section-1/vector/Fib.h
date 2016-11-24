#pragma once
#include "stdafx.h"

class Fib {
private:
	int partnerFibNumber, currentFibNumber;
public:
	Fib(int n){
		// init current & bigger number , fib(0) = 0, fib(1) = 1;
		partnerFibNumber = 1;
		currentFibNumber = 0;

		// find bigger or equal fib number than n
		while(currentFibNumber < n){
			// if current number < n , find next one
			next();
		}
	}

	int get(){
		return currentFibNumber;
	}

	// next step is : 0 1 1 2 3 5 8...
	// currentFibNumber			= 0; partnerFibNumber		  = 1;
	// currentFibNumber = 0 + 1 = 1; partnerFibNumber = 1 - 1 = 0;
	// currentFibNumber = 1 + 1 = 2; partnerFibNumber = 2 - 1 = 1;
	// currentFibNumber = 2 + 1 = 3; partnerFibNumber = 3 - 1 = 2;
	// currentFibNumber = 3 + 2 = 5; partnerFibNumber = 5 - 2 = 3;
	// currentFibNumber = 5 + 3 = 8; partnerFibNumber = 8 - 3 = 5;
	// currentFibNumber is right fib number
	int next(){
		currentFibNumber += partnerFibNumber;
		partnerFibNumber = currentFibNumber - partnerFibNumber;
		return currentFibNumber;
	}

	// prev step is : 8 5 3 2 1 1 0 ...
	// p = c - p => 3 - 2 = 1
	// c = c - p => 3 - 1 = 2
	// to make current number and partner number back up one time
	int prev(){
		partnerFibNumber = currentFibNumber - partnerFibNumber;
		currentFibNumber = currentFibNumber - partnerFibNumber;
		return currentFibNumber;
	}
};