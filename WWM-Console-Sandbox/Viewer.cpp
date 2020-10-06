#include "Viewer.h"
#include "Controller.h"
#include<iostream>
using namespace std;

// Presents the Generated Question to the User in a "readable" style.
void PresentQuestion()
{
	system("cls");
	cout << "================================================================" << endl;
	cout << "||                                       Money: " << CurrentMoney << "             ||" << endl;
	cout << "||                  Question 1:                               ||" << endl;
	cout << "||                 "<<CurrentQuestion<< "                    ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||     You'll be presented with a total of 15 questions       ||" << endl;
	cout << "||    If you solve them all correctly, you'll win 1M gold     ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||               Press [H] to display the rules               ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                Press [S] to start the quiz                 ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "================================================================" << endl;
}


void ShowWelcomeScreen()
{
	system("cls");
	cout << "================================================================" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                  Welcome to the famous                     ||" << endl;
	cout << "||                 TV-Quiz-Game-Show Clone                    ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||     You'll be presented with a total of 15 questions       ||" << endl;
	cout << "||    If you solve them all correctly, you'll win 1M gold     ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||          Press [H] and [Enter] to display the rules        ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||           Press [S] and [Enter] to start the quiz          ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "================================================================" << endl;

	char key = cin.get();

	if (key == 'h')
	{
		system("cls");
		cout << "================================================================" << endl;
		cout << "||                                                            ||" << endl;
		cout << "||                           Rules:                           ||" << endl;
		cout << "||                                                            ||" << endl;
		cout << "||   For each correct answer you win Gold. After the 5.       ||" << endl;
		cout << "||     and 10. question you keep the money at this stage      ||" << endl;
		cout << "||     if any further question has a wrong answer.            ||" << endl;
		cout << "||    When you answer a question wrong, the game is over.     ||" << endl;
		cout << "||                                                            ||" << endl;
		cout << "||               Press [K] to go back to MAIN MENU            ||" << endl;
		cout << "||                                                            ||" << endl;
		cout << "||                                                            ||" << endl;
		cout << "||                                                            ||" << endl;
		cout << "||                                                            ||" << endl;
		cout << "================================================================" << endl;
	}
	else if (key == 's')
	{

		QuestionCounter++;
		QuestionConstructor();
		
	}
	else
	{
		cout << "Please press either [H] or [S]" << endl;
		system("pause");
		ShowWelcomeScreen();
	}





	// This is the first screen, the user will see
	// Press button to start Quiz
	// Start Button sends Signal to SetNextQuestion with integer of 0 and the Qestion queue begins. 
}