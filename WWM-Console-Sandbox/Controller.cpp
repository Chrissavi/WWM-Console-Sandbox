#include "Controller.h"
using namespace std;

int QuestionCounter = 0;
int CurrentMoney = 0;
string QuestionNumber = "none";
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
	{ "6", "Which of the following is not a streaming service?", "Docker", "Netflix", "Disney+", "Prime", "Docker" },//2
	{ "7", "What is the name of Microsoft's cloud service?", "Sapphire", "Ruby", "Cyan", "Azure", "Azure" },//4
	{ "8", "In what year happened the Titanic accident?", "1905", "1912", "1885", "1965", "1912" },//8
	{ "9", "How many stars does the EU flag have?", "8", "10", "12", "16", "12" },//16
	{ "10", "What is the name of Elon Musk's Space Program?", "Space X", "Roskosmos", "NASA", "ESA", "Space X" },//32
	{ "11", "What is the highest mountain in Africa called?", "Fuji", "Mont Blanc", "Everest", "Kilimanjaro", "Kilimanjaro" },//64
	{ "12", "What is the currency in the United Kingdom called?", "Euro", "Rupee", "Pound", "Dollar", "Pound" },//125
	{ "13", "What animal is typically associated with Australia?", "Elk", "Lion", "Zebra", "Kangaroo", "Kangaroo" },//2
	{ "14", "In which country is the Holy Muslim Town 'Mecca' located?", "Jordan", "Saudi Arabia", "Algiers", "Yemen", "saudi Arabia" },//5
	{ "15", "Who is the founder of Amazon?", "Jeff Bezos", "Steve Jobs", "Bill Gates", "Elon Musk", "Jeff Bezos" } //1
	};

void Run()
{
	CurrentMoney = 0;
	QuestionCounter = 0;
	SelectedAnswer = "none";
	ShowWelcomeScreen();
}

void CheckCorrectAnswer()
{
	if (SelectedAnswer == CurrentCorrectAnswer)
	{
		if (QuestionNumber != "15")
		{
			QuestionCounter++;
			QuestionConstructor();
		}
		else
		{
			Won();
		}
		
	}
	else
	{
		EndGame();
	}
		
}


void QuestionConstructor()
{
	SelectedAnswer = "none";
	
	
	switch(QuestionCounter)
	{
	case(1): 
		QuestionNumber = Question[0][0];
		CurrentQuestion = Question[0][1];
		AnswerA = Question[0][2];
		AnswerB = Question[0][3];
		AnswerC = Question[0][4];
		AnswerD = Question[0][5];
		CurrentCorrectAnswer = Question[0][6];
		PresentQuestion();
		break;
	case(2): 
		CurrentMoney = 50;
		QuestionNumber = Question[1][0];
		CurrentQuestion = Question[1][1];
		AnswerA = Question[1][2];
		AnswerB = Question[1][3];
		AnswerC = Question[1][4];
		AnswerD = Question[1][5];
		CurrentCorrectAnswer = Question[1][6];
		PresentQuestion();
		break;
	case(3): 
		CurrentMoney = 100;
		QuestionNumber = Question[2][0];
		CurrentQuestion = Question[2][1];
		AnswerA = Question[2][2];
		AnswerB = Question[2][3];
		AnswerC = Question[2][4];
		AnswerD = Question[2][5];
		CurrentCorrectAnswer = Question[2][6];
		PresentQuestion();
		break;
	case(4):
		CurrentMoney = 250;
		QuestionNumber = Question[3][0];
		CurrentQuestion = Question[3][1];
		AnswerA = Question[3][2];
		AnswerB = Question[3][3];
		AnswerC = Question[3][4];
		AnswerD = Question[3][5];
		CurrentCorrectAnswer = Question[3][6];
		PresentQuestion();
		break;
	case(5):
		CurrentMoney = 500;
		QuestionNumber = Question[4][0];
		CurrentQuestion = Question[4][1];
		AnswerA = Question[4][2];
		AnswerB = Question[4][3];
		AnswerC = Question[4][4];
		AnswerD = Question[4][5];
		CurrentCorrectAnswer = Question[4][6];
		PresentQuestion();
		break;
	case(6): 
		CurrentMoney = 1000;
		QuestionNumber = Question[5][0];
		CurrentQuestion = Question[5][1];
		AnswerA = Question[5][2];
		AnswerB = Question[5][3];
		AnswerC = Question[5][4];
		AnswerD = Question[5][5];
		CurrentCorrectAnswer = Question[5][6];
		PresentQuestion();
		break;
	case(7): 
		CurrentMoney = 2000;
		QuestionNumber = Question[6][0];
		CurrentQuestion = Question[6][1];
		AnswerA = Question[6][2];
		AnswerB = Question[6][3];
		AnswerC = Question[6][4];
		AnswerD = Question[6][5];
		CurrentCorrectAnswer = Question[6][6];
		PresentQuestion();
		break;
	case(8): 
		CurrentMoney = 4000;
		QuestionNumber = Question[7][0];
		CurrentQuestion = Question[7][1];
		AnswerA = Question[7][2];
		AnswerB = Question[7][3];
		AnswerC = Question[7][4];
		AnswerD = Question[7][5];
		CurrentCorrectAnswer = Question[7][6];
		PresentQuestion();
		break;
	case(9): 
		CurrentMoney = 8000;
		QuestionNumber = Question[8][0];
		CurrentQuestion = Question[8][1];
		AnswerA = Question[8][2];
		AnswerB = Question[8][3];
		AnswerC = Question[8][4];
		AnswerD = Question[8][5];
		CurrentCorrectAnswer = Question[8][6];
		PresentQuestion();
		break;
	case(10): 
		CurrentMoney = 16000;
		QuestionNumber = Question[9][0];
		CurrentQuestion = Question[9][1];
		AnswerA = Question[9][2];
		AnswerB = Question[9][3];
		AnswerC = Question[9][4];
		AnswerD = Question[9][5];
		CurrentCorrectAnswer = Question[9][6];
		PresentQuestion();
		break;
	case(11): 
		CurrentMoney = 32000;
		QuestionNumber = Question[10][0];
		CurrentQuestion = Question[10][1];
		AnswerA = Question[10][2];
		AnswerB = Question[10][3];
		AnswerC = Question[10][4];
		AnswerD = Question[10][5];
		CurrentCorrectAnswer = Question[10][6];
		PresentQuestion();
		break;
	case(12): 
		CurrentMoney = 64000;
		QuestionNumber = Question[11][0];
		CurrentQuestion = Question[11][1];
		AnswerA = Question[11][2];
		AnswerB = Question[11][3];
		AnswerC = Question[11][4];
		AnswerD = Question[11][5];
		CurrentCorrectAnswer = Question[11][6];
		PresentQuestion();
		break;
	case(13): 
		CurrentMoney = 125000;
		QuestionNumber = Question[12][0];
		CurrentQuestion = Question[12][1];
		AnswerA = Question[12][2];
		AnswerB = Question[12][3];
		AnswerC = Question[12][4];
		AnswerD = Question[12][5];
		CurrentCorrectAnswer = Question[12][6];
		PresentQuestion();
		break;
	case(14): 
		CurrentMoney = 250000;
		QuestionNumber = Question[13][0];
		CurrentQuestion = Question[13][1];
		AnswerA = Question[13][2];
		AnswerB = Question[13][3];
		AnswerC = Question[13][4];
		AnswerD = Question[13][5];
		CurrentCorrectAnswer = Question[13][6];
		PresentQuestion();
		break;
	case(15): 
		CurrentMoney = 500000;
		QuestionNumber = Question[14][0];
		CurrentQuestion = Question[14][1];
		AnswerA = Question[14][2];
		AnswerB = Question[14][3];
		AnswerC = Question[14][4];
		AnswerD = Question[14][5];
		CurrentCorrectAnswer = Question[14][6];
		PresentQuestion();
		break;
	default: cout << "Sorry - no more questions possible!" << endl;
	}
}
void EndGame()
{
	cout << "Sorry, the answer is incorrect, you have lost" << endl;
	system("pause");
	Run();
}
void Won()
{
	ShowWinScreen();
}

