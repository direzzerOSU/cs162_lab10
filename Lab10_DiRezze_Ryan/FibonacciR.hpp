/*********************************************************************
** Program name: Recursion vs. Iteration Runtime Duration
** Author: Ryan DiRezze
** Date: December 2, 2018
** Description: Defines the class and associated member functions
   required for calculating the Fibonacci number with recursion.
** Program Source: https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
** Clock Source: http://www.cplusplus.com/reference/ctime/clock/
*********************************************************************/

  #ifndef FIBONACCIR_H_
  #define FIBONACCIR_H_

  class FibonacciR {
  public:
     FibonacciR(const int &n);
     virtual ~FibonacciR();
     void PrintFibonacci();
  private:
     FibonacciR();
     int Fibonacci(const int &n);
     const int *n_;

};
#endif /* FIBONACCIR_H_ */