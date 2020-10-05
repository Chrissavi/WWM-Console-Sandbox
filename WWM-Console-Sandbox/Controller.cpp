#include "Controller.h"
#include <string>
using namespace std;



/*
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
*/
void QuestionGrabber()
{
	SelectedAnswer = "none";
	QuestionCounter = 0;
	
	switch (QuestionCounter)
	{
	case(0): cout << Question[0][1] << endl;
		cout << "answer a: " << Question[0][2] << endl;
		cout << "answer b: " << Question[0][3] << endl;
		cout << "answer c: " << Question[0][4] << endl;
		cout << "answer d: " << Question[0][5] << endl;
		cout << "answer correct: " << Question[0][6] << endl;
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