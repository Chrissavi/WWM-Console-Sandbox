#include "Viewer.h"
#include<iostream>
using namespace std;

// Presents the Generated Question to the User in a "readable" style.
void PresentQuestion()
{

}


void ShowWelcomeScreen()
{

	cout << "================================================================" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                  Welcome to the famous                     ||" << endl;
	cout << "||                 TV-Quiz-Game-Show Clone                    ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||     You'll be presented with a total of 15 questions       ||" << endl;
	cout << "||    If you solve them all correctly, you'll win 1M gold     ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||               Press H to display the rules                 ||" << endl;
	cout << "||                Press S to start the quiz                   ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "================================================================" << endl;


	// This is the first screen, the user will see
	// Press button to start Quiz
	// Start Button sends Signal to SetNextQuestion with integer of 0 and the Qestion queue begins. 
}