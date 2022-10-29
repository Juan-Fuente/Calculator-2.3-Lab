#pragma once
#include <string>
#include <vector>
#include <sstream>
#include "ExecuteClass.h"
#include "Separator.h"

class CalculatorProcessor
{
	//vectors and processing machine
private:
	static CalculatorProcessor* processing_machine;
	int base = 0; int before = 0;
	std::vector<float> vector;
	std::vector<char> operatorvector;
	std::string valueOfString = "0";
	Separator separator;
	CalculatorProcessor() {}

public:

	static CalculatorProcessor* GetInstance()
	{
		if (processing_machine == nullptr) {
			processing_machine = new CalculatorProcessor();
		}
		else
			return processing_machine;
	}

	std::string StringValue() {
		return valueOfString;
	}

	void SetStringValue(std::string newValue) {
		valueOfString = newValue;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete;

	void operator=(const CalculatorProcessor& other) = delete;

	void operatorCheck() {
		if (valueOfString.back() == '+' || valueOfString.back() == '-' ||
			valueOfString.back() == '*' || valueOfString.back() == '/' ||
			valueOfString.back() == '%')
		{
			valueOfString.pop_back();
		}
		
	}
	static double Add(double n1, double n2) { return n1 + n2; }
	static double Minus(double n1, double n2) { return n1 - n2; }
	static double Multiply(double n1, double n2) { return n1 * n2; }
	static double Divide(double n1, double n2) { return n1 / n2; }
	static double Mod(int n1, int n2) { return n1 % n2; }

	// bool checker for 0
	bool CheckForNull() {
		if (valueOfString == "0") {
			return true;
		}
		else if (valueOfString == "") {
			SetStringValue("0");
			return true;
		}
		return false;
	}
	// turn str into int/float/double
	float convertString(std::string currStr) {

		float answer = separator.Execute(currStr);
		return answer;
	}
	// cos formula
	std::string GetCos() {
		std::string result = "";
		int number = separator.Execute(valueOfString);
		const double PI = 3.1415928;
		double getCos = cos(number * PI / 180);
		result = std::to_string(getCos);
		return result;
	}
	static double Cos (double n1) { return cos(n1* 3.1415928/180); }
	// sin formula
	std::string GetSin() {
		std::string result = "";
		double number = (int)separator.Execute(valueOfString);
		const double PI = 3.1415928;
		double getSin = sin(number * PI / 180);
		result = std::to_string(getSin);
		return result;
	}
	static double Sin(double n1) { return sin(n1 * 3.1415928 / 180); }
	void numberToString(std::string strNumToAdd) {
		valueOfString = valueOfString + strNumToAdd;
	}
	void charToString(char charToAdd) {
		operatorCheck();
		valueOfString = valueOfString + charToAdd;
		operatorvector.push_back(charToAdd);
	}
	//switching numbers to negative
	std::string MakeNegative() {
		std::string checkNegative = StringValue();
		if (checkNegative[0] == '-')
		{
			checkNegative.erase(0, 1);
			return (checkNegative);
		}
		else {
			float floatCompare = convertString(StringValue());
			if (floatCompare == (int)floatCompare) {
				return (std::to_string((int)(-1 * floatCompare)));
			}
			else {
				return (std::to_string(-1 * floatCompare));
			}
		}
	}
	int Equals() {
		int result = convertString(valueOfString);
		return result;
	}
	void Clear() {
		valueOfString = "0";
	}
	static double ClearNow(double n1) { return tan(n1 *0); }
	// tan formula
	std::string GetTan() {
		std::string result = "";
		double number = (int)separator.Execute(valueOfString);
		const double PI = 3.1415928;
		double getTan = tan(number * PI / 180);
		result = std::to_string(getTan);
		return result;
	}
	static double Tan(double n1) { return tan(n1 * 3.1415928 / 180); }
};

CalculatorProcessor* CalculatorProcessor::processing_machine = nullptr;
