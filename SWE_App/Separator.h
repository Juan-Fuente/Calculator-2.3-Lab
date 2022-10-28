#pragma once
#include "ExecuteClass.h"
#include <string>
#include <vector>

class Separator : public ExecuteClass {
private:
	std::vector<int> numberVector;
	std::string tempNumStr = "";
	std::vector<char> VectorOperator;
public:
	float Execute(std::string currStr) {
		float result = SeparateString(currStr);
		tempNumStr = "";
		numberVector.clear();
		VectorOperator.clear();
		return result;
	}

	float SeparateString(std::string currStr) {
		for (int i = 0; i < currStr.size(); i++) {

			if (i == 0 && currStr[i] == '-') {
				tempNumStr.push_back(currStr[i]);
				i++;
			}
			if (currStr[i] == '+' || currStr[i] == '-' ||
				currStr[i] == '*' || currStr[i] == '/' ||
				currStr[i] == '%') {

				numberVector.push_back(std::stof(tempNumStr));
				tempNumStr = "";
				VectorOperator.push_back(currStr[i]);
			}
			else {
				tempNumStr = tempNumStr + currStr[i];
			}
			if (i == currStr.size() - 1)
			{
				numberVector.push_back(std::stof(tempNumStr));
			}
		}

		float result = performMath();

		return result;
	}

	float performMath() {
		bool dontQuit = true;

		while (dontQuit) {
			for (int i = 0; i < VectorOperator.size();)
			{
				if (VectorOperator[i] == '*' ||
					VectorOperator[i] == '/' ||
					VectorOperator[i] == '%')
				{
					numberVector[i] = performOperation(VectorOperator[i], numberVector[i], numberVector[i + 1]);
					VectorOperator.erase(VectorOperator.begin() + i);
					numberVector.erase(numberVector.begin() + i + 1);
				}
				else
					i++;
			}
			for (int i = 0; i < VectorOperator.size();)
			{
				numberVector[i] = performOperation(VectorOperator[i], numberVector[i], numberVector[i + 1]);
				VectorOperator.erase(VectorOperator.begin() + i);
				numberVector.erase(numberVector.begin() + i + 1);
			}
			if (numberVector.size() == 1)
			{
				dontQuit = false;
			}
		}
		return (float)numberVector[0];
	}

	float performOperation(char op, int x, int y) {
		float result = 0;
		switch (op)
		{
		default:
			break;
		case '+':
			result = x + y;
			break;
		case '-':
			result = x - y;
			break;
		case '*':
			result = x * y;
			break;
		case '/':
			result = x / y;
			break;
		case '%':
			result = (int)x % (int)y;
			break;
		}

		return result;
	}

};

