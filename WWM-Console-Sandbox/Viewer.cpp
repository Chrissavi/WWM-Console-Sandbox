#include "Viewer.h"
#include "Controller.h"
#include<iostream>
using namespace std;

// Presents the Generated Question to the User in a "readable" style.
void PresentQuestion()
{
	system("cls");
	cout << "======================================================================" << endl;
	cout << "||                                       Money:   " << CurrentMoney << " Gold" << endl;
	cout << "||                              Question "<< QuestionNumber <<":      " << endl;
	cout << "||" << endl;
	cout << "||" << CurrentQuestion << endl;
	cout << "||" << endl;
	cout << "||" << endl;
	cout << "||" << endl;
	cout << "||" << endl;
	cout << "||" << endl;
	cout << "||--------------------------------------------------------------------" << endl;
	cout << "|| A: " << AnswerA << endl;
	cout << "||--------------------------------------------------------------------" << endl;
	cout << "|| B: " << AnswerB  << endl;
	cout << "||--------------------------------------------------------------------" << endl;
	cout << "|| C: " << AnswerC << endl;
	cout << "||--------------------------------------------------------------------" << endl;
	cout << "|| D: " << AnswerD << endl;
	cout << "======================================================================" << endl;
	cout << "||            Please select your answer and press either              " << endl;
	cout << "||                  [A],[B],[C] or [D] and [Enter]                    " << endl;
	cout << "======================================================================" << endl;
	
	char chosenAnswer = cin.get();
	
	if (chosenAnswer == 'a' || chosenAnswer == 'b' || chosenAnswer == 'c' || chosenAnswer == 'd')
	{
		switch (chosenAnswer)
		{
		case('a'): SelectedAnswer = AnswerA;
			CheckCorrectAnswer();
			break;
		case('b'): SelectedAnswer = AnswerB;
			CheckCorrectAnswer();
			break;
		case('c'): SelectedAnswer = AnswerC;
			CheckCorrectAnswer();
			break;
		case('d'): SelectedAnswer = AnswerD;
			CheckCorrectAnswer();
			break;
		}
		
	}
	else
	{
		PresentQuestion();
	}
	
	system("pause");
}


/* This is the first Screen, the user sees: */
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

	/*This will evaluate if either Help-Screen to display or start the quiz*/
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
		cout << "||           Press any key to go back to MAIN MENU            ||" << endl;
		cout << "||                                                            ||" << endl;
		cout << "||                                                            ||" << endl;
		cout << "||                                                            ||" << endl;
		cout << "||                                                            ||" << endl;
		cout << "================================================================" << endl;
		system("pause");
		ShowWelcomeScreen();
	}
	else if (key == 's')
	{

		QuestionCounter++;
		QuestionConstructor();
		
	}
	else
	{
		ShowWelcomeScreen();
	}
 
}
void ShowWinScreen()
{

	system("cls");
	cout << "================================================================" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||               C O N G R A T U L A T I O N S                ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                         YOU WON                            ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                1   M I L L I O N   G O L D                 ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                           BY                               ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                ANSWERING ALL 15 QUESTIONS                  ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "||                         CORRECT                            ||" << endl;
	cout << "||                                                            ||" << endl;
	cout << "================================================================" << endl;
	system("pause");
}