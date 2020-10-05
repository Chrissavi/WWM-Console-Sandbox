#include "Controller.h"
#include <string>
using namespace std;


void Run()
{
	ShowWelcomeScreen();
}

void CheckCorrectAnswer()
{
	if (SelectedAnswer == CurrentCorrectAnswer)
	{
		QuestionConstructor();
	}
	else
	{
		//EndGame();
	}
		
}
int SetNextQuestion(int i)
{
	switch (i)
	{
	case(1):  
		break;
	}
}

void QuestionConstructor()
{
	SelectedAnswer = "none";
	// QuestionCounter = 0;
	
	switch (QuestionCounter)
	{
	case(0): CurrentQuestion = Question[0][1];
		AnswerA = Question[0][2];
		AnswerB = Question[0][3];
		AnswerC = Question[0][4];
		AnswerD = Question[0][5];
		CurrentCorrectAnswer = Question[0][6];
		PresentQuestion();
		break;
		/*
	case(1):
		break;
	case(2):
		break;
	case(3):
		break;
	case(4):
		break;
	case(5):
		break;
	case(6):
		break;
	case(7):
		break;
	case(8):
		break;
	case(9):
		break;
	case(10):
		break;
	case(11):
		break;
	case(12):
		break;
	case(13):
		break;
	case(14):
		break; */
	default: cout << "Sorry - no more questions possible!" << endl;
	}
}
/*
void SubmitAnswer()
{
	CheckCorrectAnswer();
}
void ChangeMind()
{
	SelectedAnswer = "none";
}
*/