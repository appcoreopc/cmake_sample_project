#include <iostream>
#include "pisym.h"
#include "mymath.h"


int main()
{
   Math math; 
   int total = math.Add(100, 100);
   std::cout << "getting total " << total << std::endl;

   

   std::cout << "Hello world from The App!" << std::endl;

   piMonteCarloSimulation pisym{};
   std::cout << "Symulated value of PI:" << std::endl;
   for (int i = 0; i < 10; ++i)
      std::cout << "  " << pisym.aproxPi() << std::endl;

   return 0;
}