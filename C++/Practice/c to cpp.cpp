#include<iostream>
using namespace std;
int max(int x, int y)
{
if (x > y)

return x;

else

return y;

}

// main function that doesn't receive any parameter and // returns integer. int main(void)
int main()
{ int a = 10, b = 20;

// Calling above function to find max of 'a' and 'b' 
int m = max(a, b);

cout<<"m is "<< m;

return 0;

}
