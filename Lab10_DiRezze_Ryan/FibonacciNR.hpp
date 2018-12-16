/*********************************************************************
** Program name: Recursion vs. Iteration Runtime Duration
** Author: Ryan DiRezze
** Date: December 2, 2018
** Description: Defines the class and associated member functions
   required for calculating the Fibonacci number with iteration (no recursion).
** Program Source: https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
** Clock Source: http://www.cplusplus.com/reference/ctime/clock/
*********************************************************************/

  #ifndef FIBONACCINR_H_
  #define FIBONACCINR_H_

  class FibonacciNR {
  public:
     FibonacciNR(const int &n);
     virtual ~FibonacciNR();
     void PrintFibonacci();
  private:
     FibonacciNR();
     int Fibonacci(const int &n);
     const int* n_;
};
#endif /* FIBONACCINR_H_ */