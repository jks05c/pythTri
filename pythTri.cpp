/*

  pythTri.cpp
  Josh Stallings
  Version 3.0
  December 1, 2015

  Display every Pythagorean Triple combination with side length from one 
  to a given number.

  NOTE: Since Deitel 4 hasn't addressed testing yet, 
  I have left testing to be addressed at a later time. There is therefore a
  strong possibility that this solution is incorrect.

*/

#include<iostream>
#include<cmath>

const int test = 500; // max length of sides for test

bool IsTri( int, int, int); // returns 1 if the three sides can form a triangle

int main()
{
  
  for(int i = 1; i <= test; ++i)
    {
      for(int j = 1; j <= test; ++j)
	{
	  for (int k = 1; k <= test; ++k)
	    {
	      
	      if (IsTri(i, j, k) == 1)
		{
		  std::cout << i << std::endl
			    << j << std::endl
			    << k << std::endl << std::endl;
		};
	    } 
	}
    }

  return 0;

};

bool IsTri( int x, int y, int z)
{
  bool it = 0;

  int xS = pow( x, 2);
  int yS = pow( y, 2);
  int zS = pow( z, 2);
 
  if( xS + yS == zS || xS + zS == yS || yS + zS == xS)
    {
      
      it = 1;
    }

  return it;
}
