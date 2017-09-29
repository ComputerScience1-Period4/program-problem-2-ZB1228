/*
Zachary Bates - 9/25/2017
Assignment Name : Take in data
We will take in data from the user, and processes it. (I hate anime by the way, I'm making fun of it!)
*/

// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	int shows; // total netflix shows watched
	char person; // First letter of favorite actor
	double amine; // How many amines have been watched out of the netflix shows
	double Myanimestorage = 0 // no anime
		;bool you_filthy_weeb;

		// User Queries 
		cout << "How many netflix series have you watched?";
		cin >> shows;
		cout << "What is the first letter of your favorite actor's name?";
		cin >> person;
		cout << "Out of all of your netflix series, how many of them were anime?";
		cin >> amine;
		you_filthy_weeb = amine > Myanimestorage; // Compares animes watched, and if you have more

		// After questions asked
		cout << "\nWow " << shows << " shows, that's quite the number! " << endl;
		cout << "\nThe letter you said was " << person << ", mine is A for Adam Sandler. My letter is superior. " << endl;
		cout << "\nWow you've watched " << amine << " animes! The fact you even answered that disgusting questionis completely revolting! " << '\n';
		if (you_filthy_weeb) {
			cout << "Please stop your anime addiction for the betterment of all current and \nfuture generations. Thank you in advance. ";
		}


			
	
	// Display Text
	pause(); // pauses to see the displayed text
}