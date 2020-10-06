#pragma once

#include <iostream>
#include "Viewer.h"
//#include <string>
using namespace std;

// -- VARIABLES ---

static int QuestionCounter;
static string CurrentQuestion;
static string AnswerA;
static string AnswerB;
static string AnswerC;
static string AnswerD;
static string CurrentCorrectAnswer;
static string SelectedAnswer;

// Hardcoded Question Data: {Level, Question, Four possible answers to display, correct answer (must match exact one of the four possible)}

static string Question[15][7]= 
	{
	{ "1", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" },
	{ "2", "What animal is on the Ferrari logo?", "Horse", "Elephant", "Bull", "Lion", "Horse" },
	{ "3", "What is the longest river in South America?", "Amazonas", "Nile", "Volga", "Danube", "Amazonas" },
	{ "4", "What is the name of Google's browser?", "Opera", "Firefox", "Edge", "Chrome", "Chrome" },
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
	{ "15", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" } 
	}; 

// -- FUNCTIONS --

void Run();
void CheckCorrectAnswer();
void QuestionConstructor();
int SetNextQuestion(int i);
// void SubmitAnswer();
// void ChangeMind();
// void EndGame();