#pragma once
#include "Header1.h"

using namespace System;

	String^ FunctionHolder::checkBrackets(String^& inputString)
	{
		int index = 0;
		String^ additionalBrackets;
		int count = 0;
		additionalBrackets = "";
		while (index < inputString->Length)
		{
			if (inputString[index] == '(')
				count++;
			else
			if (inputString[index] == ')')
				count--;
			index++;
		}
		if (count < 0)
		{
			while (count != 0)
			{
				for (int i = inputString->Length - 1; i >= 0; i--)
				{
					if (inputString[i] == ')')
					{
						inputString = inputString->Remove(i, 1);
						count++;
						break;
					}
				}
			}
		}
		if (count > 0)
		{
			for (int i = 0; i < count; i++)
			{
				additionalBrackets = additionalBrackets + ")";
			}
			inputString = inputString + additionalBrackets;
		}
		return inputString;
	}

	double FunctionHolder::lg(double x)
	{
		double variable;
		if (x <= 0)
		{
			error = "Argument lg is less than 0";
			functionError = true;
			return 0;
		}
		variable = log10(x);
		return variable;
	}

	double FunctionHolder::ln(double x)
	{
		double variable;
		if (x <= 0)
		{
			error = "Argument ln is less than 0";
			functionError = true;
			return 0;
		}
		variable = log(x);
		return variable;
	}

	double FunctionHolder::ctg(double x)
	{
		double variable;
		variable = 1 / tan(x);
		return variable;
	}

	double FunctionHolder::arcsin(double x)
	{
		double variable;
		if (abs(x) > 1)
		{
			error = "argument arcsin is not in [-1;1]";
			functionError = true;
			return 0;
		}
		variable = asin(x);
		return variable;
	}

	double FunctionHolder::arccos(double x)
	{
		double variable;
		if (abs(x) > 1)
		{
			error = "Arqument arccos is not in [-1;1]";
			functionError = true;
			return 0;
		}
		variable = acos(x);
		return variable;
	}

	double FunctionHolder::factorial(double x)
	{
		double variable = 1;
		if (x < 0)
		{
			error = "Arqument factorial is less than 0";
			functionError = true;
			return 0;
		}
		if (int(x) != x)
		{
			error = "Arqument factorial is not int";
			functionError = true;
			return 0;
		}
		for (int i = 1; i <= x; i++)
			variable = variable * i;
		variable -= x;
		return variable;
	}

	double FunctionHolder::sqrt(double x)
	{
		double variable;
		if (x >= 0)
			variable = Math::Sqrt(x);
		else
		{
			error = "Argument sqrt is less then 0";
			functionError = true;
			return 0;
		}
		return variable;
	}

	double FunctionHolder::powerIt(double multiplyElement, String^& inputString)
	{
		double result = multiplyElement;
		while (inputString->Length > 0)
		{
			if (inputString[0] == '^')
				inputString = inputString->Remove(0, 1);
			multiplyElement = getNextElement(inputString);
			if (functionError)
				return result;
			if ((inputString->Length >0) && (inputString[0] == '^'))
				multiplyElement = powerIt(multiplyElement, inputString);
			if (result != 0)
			{
				if (result < 0)
				{
					if (int(multiplyElement) == multiplyElement)
					{
						if (int(multiplyElement / 2) == multiplyElement / 2)
							result = exp(multiplyElement*ln(abs(result)));
						else
							result = -exp(multiplyElement*ln(abs(result)));
					}
					else
					{
						functionError = true;
						error = "unable  to multiplyElement your expression";
						return 0;
					}
				}
				else
					result = exp(multiplyElement*ln(result));
			}
			if ((inputString->Length > 0) && (inputString[0] == ')'))
			{
				return result;
			}
		}
		return result;
	}

	double FunctionHolder::convertFromStringToDouble(String^& inputString)
	{
		double result;
		functionError = true;
		try
		{
			result = System::Convert::ToDouble(inputString);
		}
		catch (System::OverflowException^)
		{
			return 0;
		}
		catch (System::FormatException^)
		{
			return 0;
		}
		catch (System::ArgumentException^)
		{
			return 0;
		}
		functionError = false;
		return result;
	}

	double FunctionHolder::getNumberFromString(String^& inputString)
	{
		double result;
		int imax;
		String^ localString = "";
		for (int i = 0; i < inputString->Length; i++)
		{
			localString = localString + inputString[i];
			result = convertFromStringToDouble(localString);
			if (functionError)
			{
				break;
			}
			imax = i;
		}
		if ((imax + 1) == inputString->Length)
		{
			result = convertFromStringToDouble(localString);
			localString = "";
			inputString = "";
			return result;
		}
		else
		{
			localString = inputString->Remove(imax + 1);
			result = convertFromStringToDouble(localString);
			inputString = inputString->Substring(imax + 1);
			return result;
		}
	}

	bool FunctionHolder::isCharFoundInString(wchar_t currentChar, String^ stringForSearching)
	{
		int  n = stringForSearching->Length;
		for (int i = 0; i < n; i++)
		{
			if (stringForSearching[i] == currentChar) 
				return true;
		}
		return false;
	}

	double FunctionHolder::getNextElement(String^& inputString)
	{
		double number, result = 0;
		String^ digit = "0123456789";
		String^ alphabet = "abcdefghijklnoqprstwyuxyz";
		int n = 16;
		array<String^>^  Funcs = { "tan", "ctg", "sin", "cos", "sinh", "cosh", "tanh", "e", "lg",
			"arctan", "arcsin", "arсcos", "pi", L"√", "ln", "!" };
		if (inputString->Length == 0)
		{
			error = "I haven't got elements to work with";
			return result;
		}
		if (isCharFoundInString(inputString[0], digit) != 0)
		{
			number = getNumberFromString(inputString);
			result = number;
			nextElement = number;
			return result;
		}
		if (inputString[0] == '(')
		{
			inputString = inputString->Remove(0, 1);
			number = mainFunction(inputString);
			result = number;
			nextElement = number;
			return result;
		}
		if ((isCharFoundInString(inputString[0], alphabet) != 0) || (isCharFoundInString(inputString[0], L"√") != 0) || (isCharFoundInString(inputString[0], "!") != 0))
		{
			for (int i = 0; i< n; i++)
			if (isPrevFunc(inputString, Funcs[i]))
			{
				switch (i)
				{
				case 0:
					number = tan(getNextElement(inputString));
					break;
				case 1:
					number = ctg(getNextElement(inputString));
					break;
				case 2:
					number = sin(getNextElement(inputString));
					break;
				case 3:
					number = cos(getNextElement(inputString));
					break;
				case 4:
					number = sinh(getNextElement(inputString));
					break;
				case 5:
					number = cosh(getNextElement(inputString));
					break;
				case 6:
					number = tanh(getNextElement(inputString));
					break;
				case 7:
					number = Math::E;
					break;
				case 8:
					number = lg(getNextElement(inputString));
					break;
				case 9:
					number = atan(getNextElement(inputString));
					break;
				case 10:
					number = arcsin(getNextElement(inputString));
					break;
				case 11:
					number = arccos(getNextElement(inputString));
					break;
				case 12:
					number = Math::PI;
					break;
				case 13:
					number = sqrt(getNextElement(inputString));
					break;
				case 14:
					number = ln(getNextElement(inputString));
					break;
				case 15:
					number = factorial(nextElement);
					break;

				default:
					break;
				}
				result = number;
				nextElement = number;
				return result;
			}
				functionError = true;
				error = "unknown element " + inputString;
				return result;
		}
		else
		{
			functionError = true;
			return result;
		}
		
	}

	bool FunctionHolder::isPrevFunc(String^& inputString, String^ searchingFunction)
	{
		String^ localString;
		String^ alphabet = "abcdefghijklnoqprstwyuxyz";
		bool result = false;
		if (inputString->Length == searchingFunction->Length)
		{
			localString = inputString;
			if (localString == searchingFunction)
			{
				inputString = "";
				result = true;
			}
		}
		if ((inputString->Length > searchingFunction->Length) && (isCharFoundInString(inputString[searchingFunction->Length], alphabet) == 0))
		{
			localString = inputString->Remove(searchingFunction->Length);
			if (localString == searchingFunction)
			{
				inputString = inputString->Remove(0, localString->Length);
				result = true;
			}
		}
		return result;
	}

	double FunctionHolder::multiplyIt(String^& inputString, double multiplyElement)
	{
		double result = multiplyElement;
		wchar_t operation;
		while (inputString->Length > 0)
		{
			if (isCharFoundInString(inputString[0], "/*") != 0)
			{
				operation = inputString[0];
				inputString = inputString->Remove(0, 1);
			}
			if (isCharFoundInString(inputString[0], "+-") != 0)
			{
				return result;
			}
			multiplyElement = getNextElement(inputString);
			if (error != "")
				return 0;
			if (inputString->Length > 0)
			if (inputString[0] == '^')
				multiplyElement = powerIt(multiplyElement, inputString);
			if (operation == '*')
				result = result*multiplyElement;
			if (operation == '/')
			{
				if (multiplyElement == 0)
				{
					error = "aiai, can't devide by 0 ";
					functionError = true;
					return 0;
				}
				else
					result = result / multiplyElement;
			}
			if ((inputString->Length > 0) && (inputString[0] == ')'))
			{
				return result;
			}
		}
		return result;
	}

	double FunctionHolder::mainFunction(String^& inputString)
	{
		double intermediateValue, result;
		wchar_t operation = '+';
		while (inputString->Length >0)
		{
			if (isCharFoundInString(inputString[0], "+-") != 0)
			{
				operation = inputString[0];
				inputString = inputString->Remove(0, 1);
			}
			intermediateValue = getNextElement(inputString);
			intermediateValue = nextElement;
			if (functionError)
				return result;
			if (inputString->Length >0)
			{
				if (inputString[0] == '^')
					intermediateValue = powerIt(intermediateValue, inputString);
				if (inputString->Length > 0)
				if (isCharFoundInString(inputString[0], L"*/√") != 0)
					intermediateValue = multiplyIt(inputString, intermediateValue);
			}
			if (operation == '+')
				result = result + intermediateValue;
			if (operation == '-')
				result = result - intermediateValue;
			if ((inputString->Length > 0) && (inputString[0] == ')'))
			{
				inputString = inputString->Remove(0, 1);
				return result;
			}
		}
		return result;
	}

	String^ FunctionHolder::checkError()
	{
		String^ finalError = error;
		error = "";
		return finalError;
	}

