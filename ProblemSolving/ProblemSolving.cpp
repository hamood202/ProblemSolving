#include <iostream>
#include <string>
using namespace std;

#pragma region All Methods
#pragma region PrintMulitbl

void PrintHeader()
{
	for (int i = 1;i <= 10;i++)
	{
		cout << "\t" << i;
	}
	cout << "\n------------------------------------------------------------------------------------\n";
}
string ColumnSperator(int i)
{
	if (i < 10)
		return "   |";
	else
		return "  |";
}
void PrintMulitbl()
{
	for (int i = 1;i <= 10;i++)
	{
		cout << " " << i << ColumnSperator(i) << "\t";

		for (int j = 1;j <= 10;j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}


}

#pragma endregion

#pragma region Print Prime 1 to n
enum enPrimeNotPrime { Prime = 1, NotPrime };
float ReadPositiveNumber(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0);
	return number;
}
enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int counter = 2;counter <= M;counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}
void PrintNumberType(int Number)
{
	for (int i = 1;i <= Number;i++)
	{
		if (CheckPrime(i) == enPrimeNotPrime::Prime)
		{
			cout << " " << i << endl;
		}
	}


}

#pragma endregion

#pragma region Perfect Number

int ReadPositiveNumberPerfect(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0);
	return number;
}
bool IsPerfectNumber(int Number)
{
	int sum = 0;
	for (int i = 1;i < Number;i++)
	{
		if (Number % i == 0)
			sum += i;
	}
	return Number == sum;
}
void PrintPrefectNumber(int Number)
{

	for (int i = 1;i < Number;i++)
	{
		if (IsPerfectNumber(i))
		{
			cout << i << endl;

		}
	}
	//cout << Number << " The Number Prefect" << endl;
//else
	//cout << Number << " The Number is Not Prefect" << endl;
}

#pragma endregion

#pragma region PrintDigits
int ReadNumberToRevers(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0);
	return  number;
}
void PrintDigits(int Number)
{
	int  Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}
int PrintDigitsSum(int Number)
{
	int  Remainder = 0;
	int sum = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		sum += Remainder;
	}
	return sum;
}
void PrintNumberToRevers(string number)
{
	for (int i = number.length();i >= 0;i--)
	{
		cout << number[i] << endl;
	}
}
#pragma endregion

int ReadNumberToRevers2(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0);
	return  number;
}

#pragma region CountDigitFrequency
int ReadNumberToReversFreconcy(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0);
	return  number;
}
int CountDigitFrequency(short DigitToCheck, int Number)
{
	int FreqCount = 0, Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (DigitToCheck == Remainder)
		{
			FreqCount++;
		}

	}
	return FreqCount;
}
void PrintDigitsFreconcy(int Number)
{
	cout << endl;
	for (int i = 1;i <= 10;i++)
	{
		short DigitFreconcy = 0;
		DigitFreconcy = CountDigitFrequency(i, Number);
		if (DigitFreconcy > 0)
		{
			cout << "Digit " << i << " Frequency " << DigitFreconcy << " Time(s).\n";
		}
	}
}

#pragma endregion

#pragma region ReversOrder
int PrintDigits2(int Number)
{
	int  Remainder = 0, Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}
int ReadNumberToReversOrder(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;

	} while (number <= 0);
	return  number;
}
void PrintNumberToReversOrder(int Number)
{
	int Remainder = 0;
	while (Number > 0)
	{

		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
		//FreqCount = FreqCount * 10 + Remainder;

	}


}

#pragma endregion

#pragma region ReversPalindromeNumber
int ReversPalindromeNumber(int Number)
{
	int  Remainder = 0, Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}
bool IsPalindromeNumber(int number)
{
	return number == ReversPalindromeNumber(number);
}

#pragma endregion

#pragma region InvertedPattern

void PrintInvertedPattern(int number)
{
	for (int i = number; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

#pragma endregion

#pragma region AAToZZZ
void PrintInvertedPatternCharZtoA(int number)
{

	for (int i = (65 + number - 1); i >= 65; i--)
	{
		for (int j = 1; j <= number - (65 + number - 1 - i); j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}

void PrintInvertedPatternCharAtoZ(int number)
{
	for (int i = 65; i <= (65 + number - 1); i++)
	{
		for (int j = 1; j <= number - (65 + number - 1 - i); j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}
#pragma endregion

void PrintCharAAAtoZZZ()
{
	string word = "";
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);

				cout << word << endl;
				word = "";
				//cout << char(i) << char(j) << char(k) << endl;
			}
			//cout << char(i)<< char(j) << endl;
		}

		//cout <<char( i) << endl;
	}
}

#pragma region Found Password

string ReadStrPassword()
{
	string pass = "";
	cout << "Enter the password : " << endl;
	cin >> pass;
	return pass;
}
void PrintPasswordCharAAAtoZZZ(string password)
{
	string word = "";
	int count = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				count++;
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				cout << word << endl;

				if (password == word)
				{
					cout << "the password " << word << endl;
					cout << "Found tne password in " << count << endl;
					return;
				}
				word = "";
				//cout << char(i) << char(j) << char(k) << endl;
			}
		}
	}
}

#pragma endregion

#pragma region EncryptText

string ReadText() {
	string Text;
	cout << "Please enter Text?\n";
	getline(cin, Text);
	return Text;
}
string  EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return Text;
}
string  DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}

#pragma endregion

#pragma endregion


#pragma region All Problem to 37

#pragma region GenerateWordRandom
enum RandChNumSym { SamallLetter = 1, CapitalLetter = 2, Digit = 3, SpecialCharacter = 4 };

int PrintNumberRandom(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}
char GetRandomCharacter(RandChNumSym CharType)
{
	switch (CharType)
	{
	case RandChNumSym::SamallLetter:
	{
		return char(PrintNumberRandom(97, 122));
		break;
	}
	case RandChNumSym::CapitalLetter:
	{
		return char(PrintNumberRandom(65, 90));
		break;
	}
	case RandChNumSym::SpecialCharacter:
	{
		return char(PrintNumberRandom(33, 47));
		break;
	}
	case RandChNumSym::Digit:
	{
		return PrintNumberRandom(48, 57);
		break;
	}
	}
}
void PrintCharCaptlIn4_char(int number)
{
	for (int h = 1;h < number;h++)
	{
		cout << "\n";
		cout << "Key[" << h << "] : ";
		for (int i = 1;i < 5;i++)
		{
			for (int j = 1;j < 5;j++)
			{
				cout << GetRandomCharacter(RandChNumSym::CapitalLetter);
				if (j == 4)
					cout << "-";
			}
		}
	}
}
string GenerateWord(RandChNumSym CharType, short Length)
{
	string Word;
	for (int i = 1; i <= Length; i++)
	{
		Word += GetRandomCharacter(CharType);
	}
	return Word;
}
string  GenerateKey()
{
	string Key = "";

	Key = GenerateWord(RandChNumSym::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(RandChNumSym::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(RandChNumSym::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(RandChNumSym::CapitalLetter, 4);

	return Key;
}
void GenerateKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "] : ";
		cout << GenerateKey() << endl;
	}
}

#pragma endregion


int PrintDigitsSRebl(int Number)
{
	int  Remainder = 0;
	int Count = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (Count == Remainder)
		{
			Count++;
		}
	}
	return Count;
}
int ChekCountNumber()
{
	int num;
	cout << "chek Number count :";
	cin >> num;

	return num;

}
void ReadCountNumber()
{
	int Count = 0;
	cout << "Please enter the Count number?" << endl;
	cin >> Count;
	for (int i = 1;i <= Count;i++)
	{
		cout << "Elemant " << "[" << i << "] : ";
		cin >> Count;
	}

	PrintDigitsSRebl(ChekCountNumber());

}

#pragma region ReadArray and TimesRepeated

float ReadPositiveNumberInArry(string message)
{
	float number = 0;
	do
	{
		cout << message;
		cin >> number;

	} while (number <= 0);
	return number;
}
void ReadArray(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	cout << "\nEnter array elements: \n";
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;
}
void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
int TimesRepeated(int Number, int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0; i <= arrLength - 1; i++)
	{
		if (Number == arr[i])
		{
			count++;
		}
	}
	return count;
}

#pragma endregion

#pragma region Array

int PrintFillArrayNumberRandom(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}
void ReadRandomNumberInArray(int arr[100], int& arrLength)
{
	cout << "Enter the Elemint array  : ";
	cin >> arrLength;

	for (int i = 0;i < arrLength;i++)
		arr[i] = PrintFillArrayNumberRandom(1, 100);

}
void PrintRandomNumberInArray(int arr[100], int arrLength)
{
	for (int i = 0;i < arrLength;i++)
		cout << arr[i] << "\t";
}
int MaxNumberInArray(int arr[100], int arrLength)
{
	int max = arr[0]; // Initialize max with the first element
	for (int i = 1; i < arrLength; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;

}
int MinNumberInArray(int arr[100], int arrLength)
{
	int min = arr[0]; // Initialize max with the first element
	for (int i = 1; i < arrLength; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;

}
int SumNumberInArray(int arr[100], int arrLength)
{
	int sum = arr[0]; // Initialize max with the first element
	for (int i = 1; i < arrLength; i++)
	{
		sum += arr[i];
	}
	return sum;

}
float AvrageNumberInArray(int arr[100], int arrLength)
{
	return (float)SumNumberInArray(arr, arrLength) / arrLength;;
}
void CopyArry1ToArray2(int arr[100], int arr2[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr2[i] = arr[i];
	}

}
void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Lenght)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
		{
			arrDestination[Counter] = arrSource[i];
			Counter++;
		}
	}
	arr2Lenght = --Counter;
}

#pragma endregion

#pragma region Sum2ArraysProblome30

int PrintFillArrayNumberRandomAndSum(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = PrintFillArrayNumberRandomAndSum(1, 100);
}
void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}
void PrintArray2(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

#pragma endregion

#pragma region Prblome31

int PrintFillArrayNumberRandom2(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;
	return randNum;
}
void FillArrayShuffleOrder(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}
void PrintArrayShuffleOrder(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
void Swap(int& A, int& B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}
void PrintArrayShuffle(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		Swap(arr[PrintFillArrayNumberRandom2(1, arrLength) - 1], arr[PrintFillArrayNumberRandom2(1, arrLength) - 1]);

	}
}

#pragma endregion

#pragma region ReversNumberProblome32

//void FillArray(int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)
//		arr[i] = PrintFillArrayNumberRandom2(1, 100);
//}
//void PrintArray3(int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)
//		cout << arr[i] << " ";
//	cout << "\n";
//}

void PrintArrayrevers(int arr[100], int arr2[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr2[i] = arr[arrLength - 1 - i];

}


#pragma endregion
#pragma region ArrayStringProblome33

void GenerateKeysWirhArray(string arr[100], int arrLength)
{
	for (int i = 0;i < arrLength;i++)
		arr[i] = GenerateKey();
}
void PrintArrayString(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Key [" << i << "] : ";
		cout << arr[i] << " ";
		cout << "\n";
	}


}

#pragma endregion


#pragma region  SearchNumberProblome34Distinct

//void FillArray(int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)
//		arr[i] = PrintFillArrayNumberRandom2(1, 100);
//}
//void PrintArray3(int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)
//		cout << arr[i] << " ";
//	cout << "\n";
//}
short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
	/*This function will search for a number in array and return its index, or return -1 if it does not exists*/

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return i;// and return the index   
	} //if you reached here, this means the number is not found 
	return -1;
}
void SearchNumber(int arr[100], int arrLength)
{
	int search = 0;
	int count = 0;
	int count2 = 0;
	cout << "Enter that number at search : \n";
	cin >> search;
	for (int i = 0; i < arrLength; i++)
	{
		count2++;
		if (search == arr[i])
		{
			cout << "the number foubd : " << arr[i] << "\n";
			cout << "the number foubd Position   : " << count << "\n";
			cout << "the number foubd Order   : " << count2 << " ";
			return;

		}
		else if (arr[i] != search)
		{
			cout << "the number not foubd ? " << "\n";
		}
		count++;

	}

	cout << "\n";
}
int ReadNumber()
{
	int Number;
	cout << "\nPlease enter a number to search for?\n";
	cin >> Number;
	return Number;
}

#pragma endregion

#pragma region  SearchNumberYesNoProblome35

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

#pragma endregion


//void AddArrayElement(int Number, int arr[100], int& arrLength)
//{
//	//its a new element so we need to add the length by
//	 arrLength++;
//	 arr[arrLength - 1] = Number;
//}
//void InputUserNumbersInArray(int arr[100], int& arrLength)
//{
//	bool AddMore = true;
//	do
//	{
//		AddArrayElement(ReadNumber(), arr, arrLength);
//		cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? "; 
//		cin >> AddMore;
//	}
//	while (AddMore); 
//}
//void PrintArray(int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)  
//		cout << arr[i] << " ";   
//	cout << "\n";
//} 

#pragma endregion


#pragma region Problme 39 38 
void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	//its a new element so we need to add the length by
	arrLength++;
	arr[arrLength - 1] = Number;
}
//void FillArray(int arr[100], int& arrLength)
//{
//	cout << "\nEnter number of elements:\n";
//	cin >> arrLength;
//
//	for (int i = 0; i < arrLength; i++)
//		arr[i] = PrintFillArrayNumberRandom2(1, 100);
//}
void FillArrayStatic(int arr[100], int& arrLength)
{
	arrLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70; arr[8] = 70; arr[9] = 90;
}
//problme 40
void CopyArrayUsingAddArrayElementDistinct(int arr[100], int arr2[100], int arrLength, int& arrLength2)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (!IsNumberInArray(arr[i], arr2, arrLength2))
		{
			AddArrayElement(arr[i], arr2, arrLength2);
		}
	};
}
void CopyArrayUsingAddArrayElement(int arr[100], int arr2[100], int arrLength, int& arrLength2)
{
	for (int i = 0; i < arrLength; i++)
		//	if(arr[i]% 2!=0) //problme 38
		if (CheckPrime(arr[i]) == enPrimeNotPrime::Prime)
			AddArrayElement(arr[i], arr2, arrLength2);
}
void PrintArray3(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

#pragma endregion

#pragma region Problme 40

//
//void FillArray(int arr[100], int& arrLength)
//{
//	arrLength = 10; arr[0] = 10; arr[1] = 10; arr[2] = 10; arr[3] = 50; arr[4] = 50; arr[5] = 70; arr[6] = 70; arr[7] = 70; arr[8] = 70; arr[9] = 90;
//}
//void PrintArray(int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++) 
//		cout << arr[i] << " ";     cout << "\n";
//}
//short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)
//	{
//		if (arr[i] == Number) return i;//return the index  
//	} //if you reached here, this means the number is not foundreturn -1;
//	}
//	bool IsNumberInArray(int Number, int arr[100], int arrLength) 
//	{
//		return FindNumberPositionInArray(Number, arr, arrLength) != -1;
//	} 
//	 void AddArrayElement(int Number, int arr[100], int& arrLength)
//	 { //its a new element so we need to add the length by 
//		 arrLength++; 
//		 arr[arrLength - 1] = Number;
//	 }
//	 void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
//	 {
//		 for (int i = 0; i < SourceLength; i++)  
//		 {
//			 if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
//			 {
//				 AddArrayElement(arrSource[i], arrDestination, DestinationLength); 
//			 }
//		 };
//	 }

#pragma endregion

#pragma region Problem 41

//void FillArray(int arr[100], int& arrLength)
//{ // 10 20 30 30 20 10
//	arrLength = 6;
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 30;
//	arr[4] = 20;
//	arr[5] = 10;
//}
////void PrintArray(int arr[100], int arrLength)
////{
////	for (int i = 0; i < arrLength; i++) 
////		cout << arr[i] << " ";     cout << "\n";
////}
//bool IsPalindromeArray(int arr[100], int Length)
//{
//	for (int i = 0; i < Length; i++)
//	{
//		if (arr[i] != arr[Length - i - 1])
//		{
//			return false;
//		}
//	};
//	return true;
//}

#pragma endregion

#pragma region Problem 42

//void ReadRandomNumberInArray(int arr[100], int& arrLength)
//{
//	cout << "Enter the Elemint array  : ";
//	cin >> arrLength;
//
//	for (int i = 0;i < arrLength;i++)
//		arr[i] = PrintFillArrayNumberRandom(1, 100);
//
//}
//void PrintArray(int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)
//		cout << arr[i] << " ";
//	cout << "\n";
//}
int CountOddRandomNumberInArray(int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0;i < arrLength;i++)
		if (arr[i] % 2 != 0)
			count++;

	return count;
}

#pragma endregion

#pragma region  Problem 43

//void ReadRandomNumberInArray(int arr[100], int& arrLength)
//{
//	cout << "Enter the Elemint array  : ";
//	cin >> arrLength;
//
//	for (int i = 0;i < arrLength;i++)
//		arr[i] = PrintFillArrayNumberRandom(1, 100);
//
//}
//void PrintArray(int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)
//		cout << arr[i] << " ";
//	cout << "\n";
//}
int CountEvenRandomNumberInArray(int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0;i < arrLength;i++)
		if (arr[i] % 2 == 0)
			count++;

	return count;
}


#pragma endregion

#pragma region Problem 44

void ReadRandomNumberInArray2(int arr[100], int& arrLength)
{
	cout << "Enter the Elemint array  : ";
	cin >> arrLength;

	for (int i = 0;i < arrLength;i++)
		arr[i] = PrintFillArrayNumberRandom(-100, 100);

}
//void PrintArray(int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)
//		cout << arr[i] << " ";
//	cout << "\n";
//}
int CountPositiveRandomNumberInArray(int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0;i < arrLength;i++)
		if (arr[i] >= 0)
			count++;

	return count;
}

#pragma endregion


#pragma region Problem 45

//void ReadRandomNumberInArray2(int arr[100], int& arrLength)
//{
//	cout << "Enter the Elemint array  : ";
//	cin >> arrLength;
//
//	for (int i = 0;i < arrLength;i++)
//		arr[i] = PrintFillArrayNumberRandom(-100, 100);
//
//}
//void PrintArray(int arr[100], int arrLength)
//{
//	for (int i = 0; i < arrLength; i++)
//		cout << arr[i] << " ";
//	cout << "\n";
//}
int CountNegativeRandomNumberInArray(int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0;i < arrLength;i++)
		if (arr[i] < 0)
			count++;

	return count;
}

#pragma endregion


float ReadNumber2()
{
	float Number;
	cout << "\nPlease enter a number ?\n";
	cin >> Number;
	return Number;
}
float MyPow(float y, float x)
{
	int count = 0;
	int sum = 1;
	if (x == 0)
	{
		return 1;
	}
	else
	{
		for (int i = 0;i <= x;i++)
		{
			count++;
			if (count != x)
			{
				sum = sum * y;
			}
		}
	}
	return sum;
}

float MyABS(float Number)
{
	if (Number < 0)
		return  Number * (-1);
	else
		return Number;
}


float GetFractionPart(float Number)
{
	//10.7 - 10 = .7
	return Number - int(Number);
}
int MyRound(float Number)
{
	int IntPart;
	IntPart = int(Number);
	float FractionsPart = GetFractionPart(Number);
	if (abs(FractionsPart) >= .5)
	{
		if (Number > 0)
			return ++IntPart;
		else
			return --IntPart;
	}
	else
	{
		return IntPart;
	}
}

int MyFloor(float Number)
{
	int IntPart;
	IntPart = int(Number);

	if (Number > 0)
		return int(Number);
	else
		return  int(Number - 0.999999);

}

int MyCeil(float Number)
{
	if (abs(GetFractionPart(Number)) > 0)
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	else
		return Number;
}

float MySqrt(float Number)
{
	return pow(Number, 0.5);

}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrLength = 0, arrLength2 = 0, arrOfsum[100];
	//string  arrSum[100];

	float Number = ReadNumber2();

	/* cout<<"My Floor : "<< MyFloor(Number)<<endl;
	 cout<<"My Floor c++ : "<< floor(Number)<<endl;*/

	 // cout << "My MyPow : " << MyPow(2,5) << endl;


	cout << "My MySqrt : " << MySqrt(Number) << endl;
	cout << "My MySqrt c++ : " << sqrt(Number) << endl;



	/* cout << "My Cill : " << MyCeil(Number) << endl;
	 cout << "My Cill c++ : " << ceil(Number) << endl;*/
	 // cout<<"My ABS in c++ : "<< abs(Number)<<endl;


	 // cout<<"My ABS : "<< MyABS(Number)<<endl;
	 // cout<<"My ABS in c++ : "<< abs(Number)<<endl;


#pragma region Problem 45

   /*ReadRandomNumberInArray2(arr, arrLength);
   PrintArray(arr, arrLength);
   cout << "The count Number Negative : " << CountNegativeRandomNumberInArray(arr, arrLength) << endl;*/

#pragma endregion

#pragma region Problem 44


   //ReadRandomNumberInArray2(arr, arrLength);
   //PrintArray(arr, arrLength);
   //cout << "The count Number positive : " << CountPositiveRandomNumberInArray(arr, arrLength) << endl;

#pragma endregion

#pragma region  Problem 43


//ReadRandomNumberInArray(arr, arrLength);
//PrintArray(arr, arrLength);
//cout << "The count Number Even : " << CountEvenRandomNumberInArray(arr, arrLength) << endl;

#pragma endregion

#pragma region  Problem 42

/*ReadRandomNumberInArray(arr, arrLength);
PrintArray(arr, arrLength);
cout<<"The count Number Odd : "<< CountOddRandomNumberInArray(arr, arrLength)<<endl;*/

#pragma endregion

#pragma region Problem 41
/*		FillArray(arr, arrLength);
cout << "\nArray Elements:\n";
PrintArray(arr, arrLength);
if (IsPalindromeArray(arr, arrLength))
	cout << "\nYes array is Palindrome\n";
else
	cout << "\nNO array is NOT Palindrome\n";*/

#pragma endregion

#pragma region Problme 37 38 39 40
	//FillArray(arr, arrLength);
//FillArrayStatic(arr, arrLength);
//PrintArray3(arr, arrLength);
////CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arrLength2);
//CopyArrayUsingAddArrayElementDistinct(arr, arr2, arrLength, arrLength2);

//PrintArray3(arr2, arrLength2);
#pragma endregion


#pragma region Problome36
/*InputUserNumbersInArray(arr, arrLength);
cout << "\nArray Length: " << arrLength << endl;
cout << "Array elements: ";
PrintArray(arr, arrLength);
*/
#pragma endregion



#pragma region SearchNumberYesNoProblome35

/*FillArrayWithRandomNumbers(arr, arrLength);
cout << "\nArray 1 elements:\n";
PrintArray(arr, arrLength);

int Number = ReadNumber();
cout << "\nNumber you are looking for is: " << Number << endl;

if (!IsNumberInArray(Number, arr, arrLength))
	cout << "No, The number is not found :-(\n";
else
{
	cout << "Yes it is found :-)\n";
}*/

#pragma endregion

#pragma region SearchNumberProblome34

/*FillArray(arr, arrLength);
cout << "\nArray elements  :\n";
PrintArray3(arr, arrLength);

int Number = ReadNumber();

 short NumberPosition =  FindNumberPositionInArray(Number, arr, arrLength);
 if(NumberPosition==-1)
	 cout << "the number not foubd ? " << "\n";
 else
 {
	 cout << "the number foubd Position   : " << NumberPosition << "\n";
	 cout << "the number foubd Order   : " << NumberPosition+1 << " ";
 }*/
#pragma endregion





#pragma region ArrayStringProblome33
 //GenerateKeysWirhArray(arrSum, arrLength);
 //PrintArrayString(arrSum, arrLength);

#pragma endregion

#pragma region ReversNumberProblome32
/*FillArray(arr, arrLength);
cout << "\nArray elements befor revers:\n";
PrintArray3(arr, arrLength);

cout << "\nArray elements after revers:\n";
PrintArrayrevers(arr, arr2, arrLength);
PrintArray3(arr2, arrLength);*/
#pragma endregion


#pragma region  Prblome31
/*	FillArrayShuffleOrder(arr, arrLength);
cout << "\nArray elements befor shuffle:\n";
PrintArrayShuffleOrder(arr, arrLength);
PrintArrayShuffle(arr, arrLength);
cout << "\nArray elements after shuffle:\n";
PrintArrayShuffleOrder(arr, arrLength);*/

#pragma endregion


#pragma region Sum2Arrays
/*FillArrayWithRandomNumbers(arr, arrLength);
FillArrayWithRandomNumbers(arr2, arrLength);
SumOf2Arrays(arr, arr2, arrSum, arrLength);
cout << "\nArray 1 elements:\n";
PrintArray2(arr, arrLength);
cout << "\nArray 2 elements:\n";
PrintArray2(arr2, arrLength);
cout << "\nSum of array1 and array2 elements:\n";
PrintArray2(arrSum, arrLength);*/
#pragma endregion


#pragma region Array

//ReadRandomNumberInArray(arr, arrLength);
//cout << "Elemint array : ";
//PrintRandomNumberInArray(arr, arrLength);
//cout << "\nMax Number : "<<
//MaxNumberInArray(arr, arrLength);
//
//cout << "\nMin Number : "<<
//	MinNumberInArray(arr, arrLength);
//
//cout << "\nSum Number Array : "<<
//	SumNumberInArray(arr, arrLength);

//cout << "\nAvrage Number Array : "<<
//	AvrageNumberInArray(arr, arrLength);

//int arr2[100];
//CopyArry1ToArray2(arr, arr2, arrLength);
//cout << "\nElemint array 1: ";
//PrintRandomNumberInArray(arr, arrLength);

//cout << "\nElemint array 2: ";
//PrintRandomNumberInArray(arr2, arrLength);
//
//
//int arr3[100],length2;
//CopyOnlyPrimeNumbers(arr, arr3, arrLength, length2);
//cout << "\nElemint array 1: ";
//PrintRandomNumberInArray(arr, arrLength);

//cout << "\n\nElemint array 3: ";
//PrintRandomNumberInArray(arr3, length2);

#pragma endregion


#pragma region ReadArray and TimesRepeated

/*int arr[100], arrLength, NumberToCheck;
ReadArray(arr, arrLength);
NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");
cout << "\nOriginal array: ";
PrintArray(arr, arrLength);
cout << "\nNumber " << NumberToCheck;
cout << " is repeated ";
cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";*/
#pragma endregion





//GenerateKeys(ReadNumberToReversOrder("Please enter the main number?"));

/*cout << endl;
cout << GetRandomCharacter(RandChNumSym::SamallLetter) << endl;
cout << GetRandomCharacter(RandChNumSym::Digit) << endl;
cout << GetRandomCharacter(RandChNumSym::SpecialCharacter) << endl;*/

//cout<<	PrintNumberRandom(1,10)<<endl;
//cout<<	PrintNumberRandom(1,10)<<endl;
//cout<<	PrintNumberRandom(1,10)<<endl;



#pragma region EncryptText

 //const short EncryptionKey = 21; //this is the key.
 //string TextAfterEncryption, TextAfterDecryption; 
 //string Text = ReadText();   
 //TextAfterEncryption = EncryptText(Text, EncryptionKey); 
 //TextAfterDecryption = DecryptText(TextAfterEncryption,    EncryptionKey);  
 //cout << "\nText Before Encryption : ";   
 //cout << Text << endl;     cout << "Text After Encryption  : "; 
 //cout << TextAfterEncryption << endl;     cout << "Text After Decryption  : ";
 //cout << TextAfterDecryption << endl;


#pragma endregion

#pragma region Found Password
 //PrintPasswordCharAAAtoZZZ(ReadStrPassword());

#pragma endregion

	//PrintCharAAAtoZZZ();


#pragma region Print A to DDDD
//PrintInvertedPatternCharAtoZ(ReadNumberToReversOrder("Please enter the main number?"));
//PrintInvertedPatternCharZtoA(ReadNumberToReversOrder("Please enter the main number?"));

//PrintInvertedPattern(ReadNumberToReversOrder("Please enter the main number?"));

#pragma endregion


#pragma region ReversPalindromeNumber
/*	if(IsPalindromeNumber(ReadNumberToReversOrder("Please enter the main number?")))
	cout << "\nYes , it is a Palindrome number.\n";
else
	cout << "\nNo , it is NOT a Palindrome number.\n";*/

#pragma endregion


#pragma region ReversOrder
	//	PrintNumberToReversOrder(PrintDigits2(ReadNumberToReversOrder("Please enter the main number?")));

#pragma endregion


#pragma region CountDigitFrequency
/*int Number = ReadPositiveNumber("Please enter the main number?");
PrintDigitsFreconcy(Number);*/

#pragma endregion

#pragma region PrintDigits
//cout << "Sum Of Digit : "<<
//PrintDigitsSum(ReadNumberToRevers("enter Number :"));	
//PrintNumberToRevers(to_string( ReadNumberToRevers("enter Number :")));

#pragma endregion


#pragma region Perfect Number

  //PrintPrefectNumber(ReadPositiveNumberPerfect("ENTER the number : "));

#pragma endregion

#pragma region Print Prime 1 to n

 //PrintNumberType(ReadPositiveNumber("ENTER the number : "));

#pragma endregion


#pragma region PrintMulitbl

  /*  PrintHeader();
	PrintMulitbl();*/
#pragma endregion


}