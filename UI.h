#pragma once

#include <string>

class Matrix;
class Variable;


class UI
{
public:
	static std::string GetInputLine();
	static void Print(int number);
	static void Print(double number);
	static void Print(const Matrix& matrix);
	static void Print(const Variable& var);
};

