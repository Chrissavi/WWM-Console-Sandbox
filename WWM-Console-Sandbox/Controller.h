#pragma once

#include <iostream>
#include <string>
using namespace std;

// -- VARIABLES ---

unsigned short QuestionCounter = 0;
string CurrentCorrectAnswer;
string SelectedAnswer;

// Hardcoded Question Data: {Level, Question, Four possible answers to display, correct answer}

string Question[15][7] = { 
	{ "1", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },
	{ "2", "What animal is on the Ferrari logo?", "Berlin", "Cairo", "Athens", "Madrid", "Horse" },
	{ "3", "What is the longest river in South America?", "Amazonas", "Nile", "Volga", "Danube", "Amazonas" },
	{ "4", "What is the name of Google's browser?", "Berlin", "Cairo", "Athens", "Chrome", "Chrome" },
	{ "5", "What is the annual academy award usually called?", "Peter", "Lucas", "Oscar", "Jeremy", "Oscar" },
	{ "6", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },
	{ "7", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },
	{ "8", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },
	{ "9", "How many stars does the EU flag have?", "8", "10", "12", "16", "12" },
	{ "10", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },
	{ "11", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },
	{ "12", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },
	{ "13", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },
	{ "14", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },
	{ "15", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" } };

// -- FUNCTIONS --
void CheckCorrectAnswer();
void QuestionGrabber();
void SubmitAnswer();
void ChangeMind();
void TakeMoney();
void EndGame();