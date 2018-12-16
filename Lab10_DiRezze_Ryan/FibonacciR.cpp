/*********************************************************************
** Program name: Recursion vs. Iteration Runtime Duration
** Author: Ryan DiRezze
** Date: December 2, 2018
** Description: Implements the member functions of the Fibonacci
   function, using recursion.
** Program Source: https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
** Clock Source: http://www.cplusplus.com/reference/ctime/clock/
*********************************************************************/

  #include "FibonacciR.hpp"
  #include <iostream>

  FibonacciR::FibonacciR() {

  }

  FibonacciR::FibonacciR(const int &n) :n_(&n) {

  }

  FibonacciR::~FibonacciR() {

  }

  int FibonacciR::Fibonacci(const int &n) {
  	if (n == 0)
  		return 0;
  	else if (n == 1)
  		return 1;
  	return Fibonacci(n - 1) + Fibonacci(n - 2);
  }

  void FibonacciR::PrintFibonacci() {
  	int FibonaciNum = Fibonacci(*n_);
  	std::cout << *n_ << "th fibonaci number: " << FibonaciNum << std::endl;
  }