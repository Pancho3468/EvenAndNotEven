
#include <iostream>

void NotEven(int EvenNumber)
{
	EvenNumber = 15;
	for (int j = 0; j <= EvenNumber; j++)
	{
		if (j % 2 != 0)
		{
			std::cout << j << " Odd number" << "\n";
		}
	}
}

int main()
{
	static const int EvenNumber = 24;
	for (int i = 2; i <= EvenNumber; i += 2)
	{
			std::cout << i << " Even Number" << "\n";
	}
	NotEven(EvenNumber);
	return 0;
}



