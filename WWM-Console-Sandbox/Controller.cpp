#include "Controller.h"



void CheckCorrectAnswer()
{
	if (SelectedAnswer == CurrentCorrectAnswer)
	{
		QuestionGrabber();
	}
	else
	{
		EndGame();
	}
		
}
void QuestionGrabber()
{
	SelectedAnswer = "none";
	QuestionCounter++;
	
	switch (QuestionCounter)
	{
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
		break;
	case(15):
		break;
	default: cout << "Sorry - no more questions possible!" << endl;
	}
}
void SubmitAnswer()
{
	CheckCorrectAnswer();
}
void ChangeMind()
{
	SelectedAnswer = "none";
}