#include<iostream>
using namespace std;

void printPattern(int); 
int main()
{
    int n=13, c, k, space=1;
    cout<<"    76 85 77 65 \n\n\n";
    
    int no= 6; 
  
    printPattern(no); 
    
    space=1;
    for(k=2; k<=(n+6); k++)
	{
		for(c=1; c<=space; c++)
		{
			cout<<" ";
		}
		space++;
		for(c=1 ; c<=(2*(n-k)-1); c++)
		{
			cout<<"*";
		}
		cout<<"\n";
    }
}
void printPattern(int no) 
{ 
    int i, j, k = 0,n=no; 
    for (i = 1; i <= n; i++) 
    { 
        for (j = i; j < n; j++) { 
            cout << "  "; 
        } 
        while (k != (2 * i - 1)) { 
            if (k == 0 || k == 2 * i - 2) 
                cout << " #"; 
            else
                cout << "  "; 
            k++; 
            ; 
        } 
        k = 0; 
        cout << endl; 
    } 
    for (i = 0; i < 2 * n - 1; i++) { 
        cout << " #"; 
    } 
    cout<<"\n";
} 
