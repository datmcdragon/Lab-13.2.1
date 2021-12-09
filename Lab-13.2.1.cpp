#include <iostream>
#include <cmath>
using namespace std;

#define z 4
#define INPUT(x) cin >> x
#define PRINT(str) cout << (str)
#define ABS(x) (((x)<0)?(-(x)):(x))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define POW3(x) ((x)*(x)*(x))
#define POW2(x) ((x)*(x))

void main()
{
	double x, y, w = 0;
	PRINT("x = "); INPUT(x);
	PRINT("y = "); INPUT(y);

#if 1 <= z && z < 10
	w = pow(MAX(x+y,x+z),2);
#elif z < 1 , z >= 10
	w = MIN(x*x, 5*abs(y-z);
#endif

	PRINT(w);
}