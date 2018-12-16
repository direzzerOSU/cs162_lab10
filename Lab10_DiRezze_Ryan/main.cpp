/*********************************************************************
** Program name: Recursion vs. Iteration Runtime Duration
** Author: Ryan DiRezze
** Date: December 2, 2018
** Description: Integrates and runs the recursion & iteration programs,
   using functions, to output the Fibonacci number of N, the input
   parameter. Runtime durations are also captured using, clock.
** Program Source: https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
** Clock Source: http://www.cplusplus.com/reference/ctime/clock/
*********************************************************************/

  #include <iostream>
  #include <stdlib.h>
  #include<ctime>
  #include "FibonacciR.hpp"
  #include "FibonacciNR.hpp"
  using namespace std;

  void Usage() {
     cout << "Correct Usage:" << endl;
     cout << "./Fibonacci [n]" << endl;
  }

  int main(int argc, char** args) {
	  cout << endl;

     try {
         const char* input; //Note: char by default initializes to '\0'

         if (args[1] != 0)
         {
             cout << "1st passed arguement: '" << args[1] << "'" << endl;
             input = args[1];
         }

		 // modify 'n', as the function input parameter, to compare runtimes
		 int n = 30;
         //int n = atoi(input);

         cout << "Finding '" << n << "'th " << "fibonacci number...." << endl << endl;

		 // initialize runtime measurement tool (recursion)
		 clock_t r;
		 r = clock();
		 
		 cout << "Calling Recursive Fibonacci implementation" << endl;
         FibonacciR fr(n);
         fr.PrintFibonacci();

		 // show runtime data (recursion)
		 r = clock() - r;
		 cout << "It took " << r << " clicks (" << static_cast<double>(r) / CLOCKS_PER_SEC << " seconds)..." << endl;

		 // initialize runtime measurement tool (iteration)
		 clock_t nr;
		 nr = clock();

		 cout << endl << "Calling Non-Recursive Fibonacci implementation" << endl;
         FibonacciNR fnr(n);
         fnr.PrintFibonacci();

		 // show runtime data (iteration)
		 nr = clock() - nr;
		 cout << "It took " << nr << " clicks (" << static_cast<double>(nr) / CLOCKS_PER_SEC << " seconds)..." << endl;

		 cout << endl << "Done!!!!" << endl << endl;

		 return 0;
	}
    catch (...)
    {
         cout << "Oops an error occured! Please check usage" << endl;
         Usage();
         return 1;
    }
  }