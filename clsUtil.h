#pragma once
#include<iostream>
#include<string>
#include "clsDate.h";

class clsUtil
{


private:

	enum enCharType 
	{
		Capitalletter = 1,
		SmallLetter = 2,
		Degit  = 3, 
		SpecialChar = 4 ,
		Punctuation = 5,
		Spaces = 6, 
		All = 7,
		MixChars =8
	};
	enum enOperatorType { Add = 1, Sub = 2, Mul = 3, Div = 4, Mode = 5 };
	enum enLevel { EasyLevel = 1, MedLevel = 2, HardLevel = 3 };

public:
	static void Srand()
	{
		srand(unsigned(time(NULL)));
	}
	static int RandomNumber(int From, int To)
	{
		if (From > To) 
			swap(From, To);
		return rand() % (To - From + 1) + From;
	} 
	static char GetRandomCharacter(enCharType CharType)
	{

		//updated this method to accept mixchars
		if (CharType == MixChars)
		{
			//Capital/Samll/Digits only
			CharType = (enCharType)RandomNumber(1, 3);

		}

		switch (CharType)
		{

		case enCharType::SmallLetter:
		{
			return char(RandomNumber(97, 122));
		}
		case enCharType::Capitalletter:
		{
			return char(RandomNumber(65, 90));
		}
		case enCharType::SpecialChar:
		{
			return char(RandomNumber(33, 47));
		}
		case enCharType::Degit:
		{
			return char(RandomNumber(48, 57));
		}
		default:
		{
			return char(RandomNumber(65, 90));
		}
		}
	}
	static string EncryptText(string text, int EncryptedKey)
	{
		for (int i = 0; i <= text.length(); i++)
			text[i] = char((int)text[i] + EncryptedKey);
		return text;
	}
	static string DecryptText(string text, int EncryptedKey)
	{
		for (int i = 0; i <= text.length(); i++)
			text[i] = char((int)text[i] - EncryptedKey);
		return text;
	}
	static string GenerateWord(enCharType CaracterType, int length)
	{
		string Word = "";
		for (int i = 1; i <= length; i++)
			Word = Word + GetRandomCharacter(CaracterType);
		return Word;
	}
	static string GenerateKey(enCharType CaracterType= enCharType::Capitalletter)
	{
		string Key = "";
		Key = GenerateWord(CaracterType, 4) + "-";
		Key = Key + GenerateWord(CaracterType, 4) + "-";
		Key = Key + GenerateWord(CaracterType, 4) + "-";
		Key = Key + GenerateWord(CaracterType, 4);
		return Key;
	}
	static void GenerateKeys(int NumberOfKeys)
	{
		for (int i = 1; i <= NumberOfKeys; i++)
		{
			cout << "Key [" << i << "] : ";
			cout << GenerateKey() << endl;
		}
	} 
	static char OperationTypeCaracter(enOperatorType OpType)
	{
		char arrOperationType[5] = { '+','-','*','/','%' };
		return arrOperationType[OpType - 1];
	}
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
	static void Swap(string & A, string & B)
	{
		string Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	static void Swap(clsDate & A, clsDate& B)
	{
		clsDate Temp;
		Temp = A;
		A = B;
		B = Temp;
	}
	static void ShuffleArray(int arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
	}
	static void FillArrayWithRandomNumber(int arr[], int& arrLength, int From, int To)
	{
		cout << "\n Enter array length \n";
		cin >> arrLength;
		for (int i = 0; i < arrLength; i++)
			arr[i] = RandomNumber(From, To);
	}
	static void FillArrayWithRandomWords(string arr[], int& arrLength, enCharType CharacterType)
	{
		cout << "\n Enter array length \n";
		cin >> arrLength;
		for (int i = 0; i < arrLength; i++)
			arr[i] = GenerateWord(enCharType::MixChars, 1);
	}
	static void FillArrayWithRandomKey(string arr[], int& arrLength,enCharType CharacterType)
	{
		cout << "\n Enter array length \n";
		cin >> arrLength;
		for (int i = 0; i < arrLength; i++)
			arr[i] = GenerateKey(CharacterType);
	}
	static void ShuffleArray(string arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
	}
	static short VerifyNum(short Number)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}
		return Number;
	}
	static int VerifyNum(int Number)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}
		return Number;
	}
	static float VerifyNum(float Number)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}
		return Number;
	}
	static double VerifyNum(double Number)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}
		return Number;
	}
	static long long VerifyNum(long long Number)
	{
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}
		return Number;
	}
	static void ResetScreen()
	{
		system("cls");
		system("color 0F");
	}
	static string LevelText(enLevel QuestionLevel)
	{
		string arrQuestionLevel[3] = { "Easy","Med","Hard" };
		return arrQuestionLevel[QuestionLevel - 1];
	}
	static string WinOrFaiLText(bool IsWin)
	{
		if (IsWin)
			return " Win :-) \n";
		else
			" Fail :-( \n";
	}
	static void PrintFibonacciUsingRecursion(short Number, int Prev1, int Prev2)
	{
		int FebNumber = 0;
		if (Number > 0)
		{
			FebNumber = Prev2 + Prev1;
			Prev2 = Prev1;
			Prev1 = FebNumber;
			cout << FebNumber << " ";
			PrintFibonacciUsingRecursion(Number - 1, Prev1, Prev2);
		}
	}

};

