/* C++ Program - Print Diamond Pattern */
#include<bits/stdc++.h>
int main()
{

    int n, c, k, space=1;
    n=5;
    space=n-1;
    for (k=1; k<=n; k++)
    {
	for(c=1; c<=space; c++)
	{
		std::cout<<" ";
	}
	space--;
	for(c=1; c<=(2*k-1); c++)
	{
	    if(k==5 && c==5)
            std::cout<<"2";
        else if(k==5 && c!=5)
            std::cout<<" ";
		else
		std::cout<<"*";
	}
	std::cout<<"\n";
    }
    space=1;

    for(k=1; k<=(n-1); k++)
    {
	for(c=1; c<=space; c++)
	{
		std::cout<<" ";
	}
	space++;
	for(c=1 ; c<=(2*(n-k)-1); c++)
	{
		std::cout<<"*";
	}
	std::cout<<"\n";
    }
return 0;
}
