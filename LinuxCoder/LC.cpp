#include<iostream>
#include<string>

using namespace std;

/*r=4
w=2
x=1
-=0*/

int decodePermits(const string& permits);
int codePermits[8];
//int cents = 0, tens = 0, units = 0, add = 0;
int main()
{
    string permit1 = "rw-r--r--";
    string permit2 = "rwxr-x--x";
    string allpermits = "rwxrwxrwx";
    
    
    
    
    cout << endl << decodePermits(permit1) << endl;
    cout << decodePermits(permit2) << endl;
    cout << decodePermits(allpermits) << endl << endl;
    
    return 0;
}

int decodePermits(const string& permits)
{
	
	int cents = 0, tens = 0, units = 0, add = 0;
	
	for (int i = 0; i < 9; i++)
	{
	    if (permits[i]=='r')
	    {
	        codePermits[i]=4;
	    }
	    else if (permits[i]=='w')
	    {
	        codePermits[i]=2;
	    }
	    else if (permits[i]=='x')
	    {
	        codePermits[i]=1;
	 	}
	    else if (permits[i]=='-')
	    {
	        codePermits[i]=0;
	    }
	    
	}
	
	for (int j = 0; j < 9; j++)
	{
	    if (j < 3)
	    {
	        cents += codePermits[j];
	    }
	    
	    else if (j > 2 && j < 6)
	    {
	        tens += codePermits[j];
	    }
	    else if (j > 5 && j < 9 ) 
	    {
	        units += codePermits[j];
	        
	    }
	}
	
	
	add = (cents * 100) + (tens * 10) + units;
	return add;
}