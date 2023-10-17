
#include <iostream>

int main()
{
   static const int EvenNumber = 24;

	for (int i = 1; i <= EvenNumber; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << i << "\n";
		}
	}
	return 0;
}

//int OddNumber()
//{
//
//}
