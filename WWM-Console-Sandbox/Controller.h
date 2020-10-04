#pragma once

#include <iostream>
#include <string>
using namespace std;

// -- VARIABLES ---

unsigned short QuestionCounter;
string CorrectAnswer;
string SelectedAnswer;

// Hardcoded Question Data: {Level (easy till 1000 Gold || medium till 16000 Gold || hard till 1 million gold), Question, Four possible answers to display, correct answer}

string Question1[7] = { "Easy", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" };								//50
string Question2[7] = { "Easy", "What animal is on the Ferrari logo?", "Berlin", "Cairo", "Athens", "Madrid", "Horse" };						// 100
string Question3[7] = { "Easy", "What is the longest river in South America?", "Amazonas", "Nile", "Volga", "Danube", "Amazonas" };				// 200
string Question4[7] = { "Easy", "What is the name of Google's browser?", "Berlin", "Cairo", "Athens", "Chrome", "Chrome" };						// 500
string Question5[7] = { "Easy", "What is the annual academy award usually called?", "Peter", "Lucas", "Oscar", "Jeremy", "Oscar" };				// 1.000*
string Question6[7] = { "Medium", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" };							// 2.000
string Question7[7] = { "Medium", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" };							// 4.000
string Question8[7] = { "Medium", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" };							// 8.000
string Question9[7] = { "Medium", "How many stars does the EU flag have?", "8", "10", "12", "16", "12" };										// 16.000*
string Question10[7] = { "Hard", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" };								// 32.000
string Question11[7] = { "Hard", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" };								// 64.000
string Question12[7] = { "Hard", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" };								// 125.000
string Question13[7] = { "Hard", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" };								// 250.000
string Question14[7] = { "Hard", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" };								// 500.000
string Question15[7] = { "Hard", "What is the capital of Egypt?", "Berlin", "Cairo", "Athens", "Madrid", "Cairo" };								// 1.000.000

// -- FUNCTIONS --
void CheckCorrectAnswer();
void QuestionGrabber();
void SubmitAnswer();
void ChangeMind();