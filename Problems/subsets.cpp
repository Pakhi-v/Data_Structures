#include <bits/stdc++.h>
using namespace std;

// Function to print all the power set
void printPowerSet(char set[], int n)
{
	bool *contain = new bool[n]{0};
	
	// Empty subset
	cout << "" << endl;
	for(int i = 0; i < n; i++)
	{
		contain[i] = 1;
		// All permutation
		do
		{
			for(int j = 0; j < n; j++)
				if(contain[j])
					cout << set[j];
			cout << endl;
		} while(prev_permutation(contain, contain + n));
	}
}
int main()
{
	char set[] = {'a','b','c'};
	printPowerSet(set, 3);
	return 0;
}


