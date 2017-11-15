#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;

int rand1(int s1, int s2)
{
    return (int)s1+rand()%(s2-s1);
}
int solve(int x)
{
	Sleep(rand(0,1000));
	return 2*x;
}

int main()
{
    srand(time(0));

    for (int x = 0; x < 10; x++)
    {
	    cout<<solve(x);
    }
    return 0
}

