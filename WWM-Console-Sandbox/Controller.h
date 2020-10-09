#pragma once

#include <iostream>
#include "Viewer.h"

using namespace std;

// -- VARIABLES ---

extern int QuestionCounter;
extern int CurrentMoney;
extern string QuestionNumber;
extern string CurrentQuestion;
extern string AnswerA;
extern string AnswerB;
extern string AnswerC;
extern string AnswerD;
extern string CurrentCorrectAnswer;
extern string SelectedAnswer;

// Hardcoded Question Data: {Level, Question, Four possible answers to display, correct answer (must match exact one of the four possible)}

extern string Question[15][7];

// -- FUNCTIONS --

void Run();
void EndGame();
void CheckCorrectAnswer();
void QuestionConstructor();
void Won();
