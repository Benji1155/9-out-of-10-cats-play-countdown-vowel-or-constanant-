#include <iostream>
using namespace std;
int main()
{
	//defining the variables
	char inputed_character;
	//asking question
	cout << "Input a character and I'll tell you if its a vowel or constanant: ";
	cin >> inputed_character;

	if (inputed_character == 'a' || inputed_character == 'o' || inputed_character == 'e' 
		|| inputed_character == 'u' || inputed_character == 'i' || inputed_character == 'A' || inputed_character == 'O' || 
		inputed_character == 'E' || inputed_character == 'U' || inputed_character == 'I')
	
		cout << "Its a vowel! Can confirm.";

	else
		cout << "Its a constanant! Unless you inputted multiple characters. idk how to determine that yet soo...";
	
return(0);
}