/*********************************************************************
** Program name: Recursion vs. Iteration Runtime Duration
** Author: Ryan DiRezze
** Date: December 2, 2018
** Description: Implements the member functions of the Fibonacci
   function, using iteration (no recursion).
** Program Source: https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
** Clock Source: http://www.cplusplus.com/reference/ctime/clock/
*********************************************************************/

  #include "FibonacciNR.hpp"
  #include <iostream>

  FibonacciNR::FibonacciNR() {
  }

  FibonacciNR::FibonacciNR(const int &n) :n_(&n) {
  }

  FibonacciNR::~FibonacciNR() {
  }

  int FibonacciNR::Fibonacci(const int &n)
  {
     int first = 0;
     int second = 1;
     int counter = 2;
     while (counter < n)
     {
         int temp = second;
         second = first + second;
         first = temp;
         ++counter;
     }
     if (n == 0)
         return 0;
     else
         return first + second;
  }
  void FibonacciNR::PrintFibonacci() {
     const int result = Fibonacci(*n_);
     std::cout << *n_ << "th fibonacci Number: " << result << std::endl;
}