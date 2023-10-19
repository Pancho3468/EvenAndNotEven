
#include <iostream>

const int EvenNumber = 15;

void NotEven(int EvenNumber)
{
	
	for (int j = 1; j <= EvenNumber; j++)
	{
		
		if (j % 2 != 0)
		{
			std::cout << j << " Odd number" << "\n";
		}
		else
		{
			std::cout << j << " Even Number" << "\n";
		}
	}
}

int main()
{
	NotEven(EvenNumber);
	return 0;
}



