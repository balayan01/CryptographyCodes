#include<iostream> 
#include<cmath> 
#include<cstdlib>
#include<ctime> 
#include<string>
#define ll long long

using namespace std;

// Returns gcd of a and b 
ll gcd(ll a, ll b) 
{ 
	if(b == 0)
	return a;
	return gcd(b, a%b);
} 

void encryptMessage(char x , double e, double n )
{
    double msg ;
    if(x>= 'a' and x<'z')
    msg = x-'a';
    
    else if(x>='A' and x<='Z')
    msg = x - 'A';
    
    else
    msg = x-'0';
    
    
    double c  = pow(msg,e);
    c = fmod(c,n);
    cout<<c<<" ";
}

int main() 
{ 
	double p = 3; 
	double q = 7; 

	double n = p*q; 

	srand(time(0)); 
	double e =   rand()%(ll)n;

	//printf("%lf", e );
	double phi = (p-1)*(q-1);          // euler totient function
	while (e < phi) 
	{ 
		if (gcd(e, phi)==1) 
			break; 
		else
			e++; 
	} 

	int k = 2; 
	double d = (1 + (k*phi))/e; 
	
	char x;
	
	while(cin>>x)
	{
	    cout<<x<<":";
	    encryptMessage(x, e, n);
	    
	}

	return 0; 
} 
// This code is contributed by Akash Sharan. 
