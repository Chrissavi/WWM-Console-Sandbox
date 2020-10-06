#include "Controller.h"
#include "Viewer.h"
#include <string>
using namespace std;

int QuestionCounter = 0;
int CurrentMoney = 0;
string CurrentQuestion = "none";
string AnswerA = "none";
string AnswerB = "none";
string AnswerC = "none";
string AnswerD = "none";
string CurrentCorrectAnswer = "none";
string SelectedAnswer = "none";

string Question[15][7] =
	{
	{ "1", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },//50
	{ "2", "What animal is on the Ferrari logo?", "Horse", "Elephant", "Bull", "Lion", "Horse" },//1
	{ "3", "What is the longest river in South America?", "Amazonas", "Nile", "Volga", "Danube", "Amazonas" },//2
	{ "4", "What is the name of Google's browser?", "Opera", "Firefox", "Edge", "Chrome", "Chrome" },//5
	{ "5", "What is the annual academy award usually called?", "Peter", "Lucas", "Oscar", "Jeremy", "Oscar" },//1
	{ "6", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },//2
	{ "7", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },//4
	{ "8", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },//8
	{ "9", "How many stars does the EU flag have?", "8", "10", "12", "16", "12" },//16
	{ "10", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },//32
	{ "11", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },//64
	{ "12", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },//125
	{ "13", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },//2
	{ "14", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },//5
	{ "15", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" } //1
	};

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
	return 0;
}

void QuestionConstructor()
{
	SelectedAnswer = "none";
	
	
	switch(QuestionCounter)
	{
	case(1): CurrentQuestion = Question[0][1];
		AnswerA = Question[0][2];
		AnswerB = Question[0][3];
		AnswerC = Question[0][4];
		AnswerD = Question[0][5];
		CurrentCorrectAnswer = Question[0][6];
		PresentQuestion();
		break;
		/*
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
		break;
	case(15):
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