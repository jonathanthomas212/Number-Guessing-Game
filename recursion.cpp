//Jonathan Thomas

#include <iostream>
#include <cstdlib>
#include <cmath>


 using namespace std;
 
 bool guesser(int max, int min,int count)
 {
 	int guess= (max+min)/2;
 	cout<< "Is " <<guess << " your number?" <<endl << 
	"Press 'y' for yes, 'h'to guess higher or 'l'to guess lower"<< endl; 
 	string response = "";
 	cin>> response;
	
	
 	if(response == "y")
 	{
 		;cout<< "Your number was guessed in "<< count << " tries"<< endl;	
 		return 1;	
	}
	
	if(max==min||guess>max||guess<min)
	{
		cout<< "LIAR!!!";
		return -1;	
	}
	count++;
	
	if(response == "h")
 	{
 		min=guess+1;
		return guesser(max,min,count);
	}
	
	if(response == "l")
 	{
 		max=guess-1;	
 		return guesser(max,min,count);
	}
		
	
 }

 
 
 
int main()
{
	
cout<< "Think of a number in your head" << endl<< 
"what is the lowest possible number:  ";

int min=0;
cin>> min;

cout<< "what is the largest possible number:  ";

int max=0;
cin>> max;

int count = 1;
guesser(max,min,count);


return 0;	
}




/*

Think of a number in your head
what is the lowest possible number:  1
what is the largest possible number:  100
Is 50 your number?
Press 'y' for yes, 'h'to guess higher or 'l'to guess lower
h
Is 75 your number?
Press 'y' for yes, 'h'to guess higher or 'l'to guess lower
l
Is 62 your number?
Press 'y' for yes, 'h'to guess higher or 'l'to guess lower
h
Is 68 your number?
Press 'y' for yes, 'h'to guess higher or 'l'to guess lower
h
Is 71 your number?
Press 'y' for yes, 'h'to guess higher or 'l'to guess lower
y
Your number was guessed in 5 tries

--------------------------------
Process exited after 51.82 seconds with return value 0
Press any key to continue . . .




Think of a number in your head
what is the lowest possible number:  1
what is the largest possible number:  5
Is 3 your number?
Press 'y' for yes, 'h'to guess higher or 'l'to guess lower
h
Is 4 your number?
Press 'y' for yes, 'h'to guess higher or 'l'to guess lower
h
Is 5 your number?
Press 'y' for yes, 'h'to guess higher or 'l'to guess lower
h
LIAR!!!
--------------------------------
Process exited after 10.2 seconds with return value 0
Press any key to continue . . .

*/
