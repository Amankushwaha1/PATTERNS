// C++ Implementation to print the pattern
#include <bits/stdc++.h>
using namespace std;

// Function definition
void pattern(int n)
{
	int i, j;
	for (i = n - 1; i >= 0; i--) {

		// outer gap loop
		for (j = n - 1; j > i; j--) {
			cout << " ";
		}

		// 65 is ASCII of 'A'
		cout <<"*";

		// inner gap loop
		for (j = 1; j < (i * 2); j++){

            cout << " ";
		}


		if (i >= 1)
			cout <<"*";
		cout << "\n";

	}
    for(int j = 0 ; j < 6 ; j++){
    for(int i = 0 ; i < 4 ; i++)
    {
    cout<<" ";
    }
    cout<<"*\n";
}
}

// Driver code
int main()
{
	// taking size from the user
	int n = 5;

	// function calling
	pattern(n);
	return 0;
}
