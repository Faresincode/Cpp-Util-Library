#pragma once
#include <iostream>
#include<cmath>
 
using namespace std;


class clsMath
{

private:
	enum enOperatorType { eAdd = 1, eSub = 2, eMul = 3, eDiv = 4, eMode = 5 };

	int _IntNumber=0;
	short _ShortNumber=0;
	float _FloatNumber=0.00f;
	long long _LgLgNumber = 0;
	double _DoubleNumber = 0;
	friend class clsInputValidate;
	friend class clsUtil;

public:
	//================================== Set And Get Property======================================
	int getIntNumber()
	{
		return _IntNumber;
	}
	void setIntNumber(int Number)
	{
		this->_IntNumber = Number;
	}
	__declspec(property(get = getIntNumber, put = setIntNumber))int IntNumber;

	short getShortNumber()
	{
		return _ShortNumber;
	}
	void setShortNumber(short Number)
	{
		this->_ShortNumber = Number;
	}
	__declspec(property(get = getShortNumber, put = setShortNumber))short ShortNumber;

	float getFloatNumber()
	{
		return this->_FloatNumber;
	}
	void setFloatNumber(float Number)
	{
		this->_FloatNumber = Number;
	}
	__declspec(property(get = getFloatNumber, put = setFloatNumber))float FloatNumber;

	long long getLgLgNumber()
	{
		return _LgLgNumber;
	}
	void setLgLgNumber(long long  Number)
	{
		this->_LgLgNumber = Number;
	}
	__declspec(property(get = getLgLgNumber, put = setLgLgNumber))long long  LgLgNumber;

	double getDoubleNumber()
	{
		return this->_DoubleNumber;
	}
	void setDoubleNumber(double Number)
	{
		this->_DoubleNumber = Number;
	}
	__declspec(property(get = getDoubleNumber, put = setDoubleNumber))double DoubleNumber;

	//================================== Is Positive =============================================
	static bool IsPositive(int Number)
	{
		if (Number > 0)
			return 1;
		else
			return 0;
	}
	static bool IsPositive(float Number)
	{
		if (Number > 0)
			return 1;
		else
			return 0;
	}
	static bool IsPositive(short Number)
	{
		if (Number > 0)
			return 1;
		else
			return 0;
	}
	static bool IsPositive(double Number)
	{
		if (Number > 0)
			return 1;
		else
			return 0;
	}
	static bool IsPositive(long long Number)
	{
		if (Number > 0)
			return 1;
		else
			return 0;
	}
	//================================== Is Negative =================================================
	static bool IsNegative(int Number)
	{
		if (Number < 0)
			return 1;
		else
			return 0;
	}
	static bool IsNegative(float Number)
	{
		if (Number < 0)
			return 1;
		else
			return 0;
	}
	static bool IsNegative(short Number)
	{
		if (Number < 0)
			return 1;
		else
			return 0;
	}
	static bool IsNegative(double Number)
	{
		if (Number < 0)
			return 1;
		else
			return 0;
	}
	static bool IsNegative(long long Number)
	{
		if (Number < 0)
			return 1;
		else
			return 0;
	}
	//===============================================================================================
	static bool IsZeroInt(int Number)
	{
		return (Number == 0);
	}
	bool IsZeroInt()
	{
		return clsMath::IsZeroInt(_IntNumber);
	}

	static bool IsZeroShort(short Number)
	{
		return (Number == 0);
	}
	bool IsZeroShort()
	{
		return clsMath::IsZeroShort(_ShortNumber);
	}

	static bool IsZeroFloat(float Number)
	{
		return (Number == 0);
	}
	bool IsZeroFloat()
	{
		return clsMath::IsZeroFloat(_FloatNumber);
	}

	static bool IsZeroLgLg(long long Number)
	{
		return (Number == 0);
	}
	bool IsZeroLgLg()
	{
		return clsMath::IsZeroLgLg(_LgLgNumber);
	}

	static bool IsLeapYear(short Year)
	{
		// if year is divisible by 4 AND not divisible by 100
		// OR if year is divisible by 400
		// then it is a leap year
		return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
	}
	bool IsLeapYear()
	{
		return clsMath::IsLeapYear(_ShortNumber);
	}

	static bool IsOdd(int Number)
	{
		if (Number % 2 != 0)
			return 1;
		else
			return 0;
	}
	bool IsOdd()
	{
		return clsMath::IsOdd(_IntNumber);
	}

	static bool IsEven(int Number)
	{
		if (Number % 2 == 0)
			return 1;
		else
			return 0;
	}
	bool IsEven()
	{
		return clsMath::IsEven(_IntNumber);
	}

	static bool IsPrime(int Number)
	{
		int M = round(Number / 2);
		for (int counter = 2; counter <= M; counter++)
			if (Number % counter == 0)
				return 0;
		return 1;
	}
	bool IsPrime()
	{
		return clsMath::IsPrime(_IntNumber);
	}

	static bool IsPalindrome(int Number)
	{
		return (Number == ReverseNum(Number));
	}
	bool IsPalindrome()
	{
		return clsMath::IsPalindrome(_IntNumber);
	}

	static bool IsPerfect(int Number)
	{
		int Sum = 0;
		for (int i = 1; i < Number; i++)
			if (Number % i == 0)
				Sum += i;
		return Number == Sum;
	}
	bool IsPerfect()
	{
		return clsMath::IsPerfect(_IntNumber);
	}
	//===============================================================================================
	static int RandomNumber(int From, int To)
	{
		if (From > To)
			swap(From, To);
		return rand() % (To - From + 1) + From;
	}

	static int ReverseNum(int Number)
	{
		int Remainder = 0;
		int Reversed = 0;
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			Reversed = Reversed * 10 + Remainder;
		}
		return Reversed;
	}
	static short ReverseNum(short Number)
	{
		short Remainder = 0;
		short Reversed = 0;
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			Reversed = Reversed * 10 + Remainder;
		}
		return Reversed;
	}

	static float FractionPart(float Number)
	{
		return Number - int(Number);
	}
	float FractionPart()
	{
		return clsMath::FractionPart(_FloatNumber);
	}

	static int SumDigits(int Number)
	{
		int Remainder = 0;
		int Sum = 0;
		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			Sum = Sum + Remainder;
		}
		return Sum;
	}
	int SumDigits()
	{
		return clsMath::SumDigits(_IntNumber);
	}

	static string NumberToText(int Number)
	{

		if (Number == 0)
			return "";

		if (Number >= 1 && Number <= 19)
		{
			string arr[] = { "","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen" };
			return arr[Number] + " ";
		}

		if (Number >= 20 && Number <= 99)
		{
			string arr[] = { "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety" };
			return arr[Number / 10] + " " + NumberToText(Number % 10);
		}

		if (Number >= 100 && Number <= 199)
			return "One Hundred " + NumberToText(Number % 100);

		if (Number >= 200 && Number <= 999)
			return NumberToText(Number / 100) + "Hundreds " + NumberToText(Number % 100);

		if (Number >= 1000 && Number <= 1999)
			return "One Thousand " + NumberToText(Number % 1000);

		if (Number >= 2000 && Number <= 999999)
			return NumberToText(Number / 1000) + "Thousands " + NumberToText(Number % 1000);

		if (Number >= 1000000 && Number <= 1999999)
			return "One Million " + NumberToText(Number % 1000000);

		if (Number >= 2000000 && Number <= 999999999)
			return NumberToText(Number / 1000000) + "Millions " + NumberToText(Number % 1000000);

		if (Number >= 1000000000 && Number <= 1999999999)
			return "One Billion " + NumberToText(Number % 1000000000);
		else
			return NumberToText(Number / 1000000000) + "Billions " + NumberToText(Number % 1000000000);

	}
	string NumberToText()
	{
		return clsMath::NumberToText(_IntNumber);
	}
	//===============================================================================================

	static int Abs(int Number)
	{
		return (Number < 0) ? Number * -1 : Number;
	}
	static short Abs(short Number)
	{
		return (Number < 0) ? Number * -1 : Number;
	}
	static long long Abs(long long Number)
	{
		return (Number < 0) ? Number * -1 : Number;
	}
	static float Abs(float Number)
	{
		return (Number < 0) ? Number * -1 : Number;;
	}
	static double Abs(double Number)
	{
		return (Number < 0) ? Number * -1 : Number;
	}
	//===============================================================================================
	static short Sqrt(short Number)
	{
		return pow(Number, 0.5);
	}
	static float Sqrt(int Number)
	{
		return pow(Number, 0.5);
	}
	static float Sqrt(long long Number)
	{
		return pow(Number, 0.5);
	}

	static float Ceil(float Number)
	{
		if (abs(FractionPart(Number)) > 0)
		{
			if (Number > 0)
				return int(Number) + 1;
			else
				return int(Number);
		}
		else
			return Number;
	}
	float Ceil()
	{
		return clsMath::Ceil(FloatNumber);
	}

	static float Floor(float Number)
	{
		if (Number > 0)
			return int(Number);
		else
			return int(Number) - 1;
	}
	float Floor()
	{
		return clsMath::Floor(FloatNumber);
	}

	static float Round(float Number)
	{
		int IntPart = int(Number);
		if (abs(FractionPart(Number)) >= .5)
		{
			if (Number > 0)
				return ++IntPart;
			else
				return --IntPart;
		}
		else
			return IntPart;
	}
	float Round()
	{
		return clsMath::Round(_FloatNumber);
	}

	//===============================================================================================

	static float Half(int Num)
	{
		return (Num / 2);
	}
	static float Half(short Num)
	{
		return (Num / 2);
	}
	static float Half(float Num)
	{
		return (Num / 2);
	}
	static float Half(long long Num)
	{
		return (Num / 2);
	}
	static float Half(double Num)
	{
		return Num / 2;
	}
	//===============================================================================================
	static int Opposite(int Number)
	{
		return Number * -1;
	}
	static float Opposite(float Number)
	{
		return Number * -1;
	}
	static short Opposite(short Number)
	{
		return Number * -1;
	}
	static double Opposite(double Number)
	{
		return Number * -1;
	}
	static long long Opposite(long long Number)
	{
		return Number * -1;
	}
	//===============================================================================================
	static void Swap(int& A, int& B)
	{
		int Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	static void Swap(float& A, float& B)
	{
		float Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	static void Swap(short& A, short& B)
	{
		short Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	static void Swap(double& A, double& B)
	{
		double Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	static void Swap(long long& A, long long& B)
	{
		long long Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	//===============================================================================================
	static int Sum(int Num1, int Num2, int Num3 = 0, int Num4 = 0, int Num5 = 0)
	{
		return (Num1 + Num2 + Num3 + Num4 + Num5);
	}
	static float Sum(float Num1, float Num2, float Num3 = 0, float Num4 = 0, float Num5 = 0)
	{
		return (Num1 + Num2 + Num3 + Num4 + Num5);
	}
	static short Sum(short Num1, short Num2, short Num3 = 0, short Num4 = 0, short Num5 = 0)
	{
		return (Num1 + Num2 + Num3 + Num4 + Num5);
	}
	static double Sum(double Num1, double Num2, double Num3 = 0, double Num4 = 0, double Num5 = 0)
	{
		return (Num1 + Num2 + Num3 + Num4 + Num5);
	}
	static long long Sum(long long Num1, long long Num2, long long Num3 = 0, long long Num4 = 0, long long Num5 = 0)
	{
		return (Num1 + Num2 + Num3 + Num4 + Num5);
	}
	//===============================================================================================
	static int Subtract(int Num1, int Num2, int Num3 = 0, int Num4 = 0, int Num5 = 0)
	{
		return (Num1 - Num2 - Num3 - Num4 - Num5);
	}
	static float Subtract(float Num1, float Num2, float Num3 = 0, float Num4 = 0, float Num5 = 0)
	{
		return (Num1 - Num2 - Num3 - Num4 - Num5);
	}
	static short Subtract(short Num1, short Num2, short Num3 = 0, short Num4 = 0, short Num5 = 0)
	{
		return  (Num1 - Num2 - Num3 - Num4 - Num5);
	}
	static double Subtract(double Num1, double Num2, double Num3 = 0, double Num4 = 0, double Num5 = 0)
	{
		return (Num1 - Num2 - Num3 - Num4 - Num5);
	}
	static long long Subtract(long long Num1, long long Num2, long long Num3 = 0, long long Num4 = 0, long long Num5 = 0)
	{
		return (Num1 - Num2 - Num3 - Num4 - Num5);
	}
	//===============================================================================================
	static int Multiplicate(int Num1, int Num2, int Num3 = 1, int Num4 = 1, int Num5 = 1)
	{
		return (Num1 * Num2 * Num3 * Num4 * Num5);
	}
	static float Multiplicate(float Num1, float Num2, float Num3 = 1, float Num4 = 1, float Num5 = 1)
	{
		return (Num1 * Num2 * Num3 * Num4 * Num5);
	}
	static short Multiplicate(short Num1, short Num2, short Num3 = 1, short Num4 = 1, short Num5 = 1)
	{
		return (Num1 * Num2 * Num3 * Num4 * Num5);
	}
	static double Multiplicate(double Num1, double Num2, double Num3 = 1, double Num4 = 1, double Num5 = 1)
	{
		return (Num1 * Num2 * Num3 * Num4 * Num5);
	}
	static long long Multiplicate(long long Num1, long long Num2, long long  Num3 = 1, long long Num4 = 1, long long Num5 = 1)
	{
		return (Num1 * Num2 * Num3 * Num4 * Num5);
	}
	//===============================================================================================
	static int Divide(int Num1, int Num2, int Num3 = 1, int Num4 = 1, int Num5 = 1)
	{
		return (Num1 / Num2 / Num2 / Num3 / Num4 / Num5);
	}
	static float Divide(float Num1, float Num2, float Num3 = 1, float Num4 = 1, float Num5 = 1)
	{
		return (Num1 / Num2 / Num2 / Num3 / Num4 / Num5);
	}
	static short Divide(short Num1, short Num2, short Num3 = 1, short Num4 = 1, short Num5 = 1)
	{
		return (Num1 / Num2 / Num2 / Num3 / Num4 / Num5);
	}
	static double Divide(double Num1, double Num2, double Num3 = 1, double Num4 = 1, double Num5 = 1)
	{
		return (Num1 / Num2 / Num2 / Num3 / Num4 / Num5);
	}
	static long long Divide(long long Num1, long long Num2, long long  Num3 = 1, long long Num4 = 1, long long Num5 = 1)
	{
		return (Num1 / Num2 / Num2 / Num3 / Num4 / Num5);
	}
	//===============================================================================================
	static int Mode2Num(int Num1, int Num2)
	{
		return Num1 % Num2;
	}
	static short Mode2Num(short Num1, short Num2)
	{
		return Num1 % Num2;
	}
	static long long Mode2Num(long long Num1, long long Num2)
	{
		return Num1 % Num2;
	}
	static int Calculate2Num(int Num1, int Num2, enOperatorType OpType)
	{
		switch (OpType)
		{
		case enOperatorType::eAdd:
		{
			return (Num1 + Num2);
		}
		case enOperatorType::eSub:
		{
			return (Num1 - Num2);
		}
		case enOperatorType::eMul:
		{
			return (Num1 * Num2);
		}
		case enOperatorType::eDiv:
		{
			return (Num1 / Num2);
		}
		case enOperatorType:: eMode:
		{
			return (Num1 % Num2);
		}
		default:
			return (Num1 + Num2);
		}
	}
	static short Calculate2Num(short Num1, short Num2, enOperatorType OpType)
	{
		switch (OpType)
		{
		case enOperatorType::eAdd:
		{
			return (Num1 + Num2);
		}
		case enOperatorType::eSub:
		{
			return (Num1 - Num2);
		}
		case enOperatorType::eMul:
		{
			return (Num1 * Num2);
		}
		case enOperatorType::eDiv:
		{
			return (Num1 / Num2);
		}
		case enOperatorType::eMode:
		{
			return (Num1 % Num2);
		}
		default:
			return (Num1 + Num2);
		}
	}

	//===============================================================================================


};

