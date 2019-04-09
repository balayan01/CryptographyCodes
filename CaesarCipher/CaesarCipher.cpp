#include <iostream> 
using namespace std; 

string encrypt(string text, int s) 
{ 
	string result = ""; 

	
	for (int i=0;i<text.length();i++) 
	{ 
		
		if (isupper(text[i])) 
			result += char(int(text[i]+s-65)%26 +65); 
	else
		result += char(int(text[i]+s-97)%26 +97); 
	} 

	return result; 
} 

// Driver program to test the above function 
int main() 
{ 
	string text="ATTACKATONCE"; 
	int s = 4; 
	cout << "Text : " << text; 
	cout << "\nKey: " << s; 
	cout << "\nCipher: " << encrypt(text, s); 
	return 0; 
} 
