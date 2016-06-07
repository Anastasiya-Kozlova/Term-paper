#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <Shlwapi.h>

using namespace System;
public ref class FunctionHolder
{
private:
	static String^ error = "";
	static bool functionError = false;
	static double nextElement = 0;
public:
	static String^ checkBrackets(String^& inputString);
	static double ln(double x);
	static double lg(double x);
	static double ctg(double x);
	static double arcsin(double x);
	static double arccos(double x);
	static double factorial(double x);
	static double sqrt(double x);
	static double powerIt(double multiplyElement, String^& inputString);
	static double convertFromStringToDouble(String^& inputString);
	static double getNumberFromString(String^& inputString);
	static bool isCharFoundInString(wchar_t currentChar, String^ stringForSearching);
	static double getNextElement(String^& inputString);
	static bool isPrevFunc(String^& inputString, String^ searchingFunction);
	static double multiplyIt(String^& inputString, double multiplyElement);
	static double mainFunction(String^& inputString);
	static String^ checkError();
};


