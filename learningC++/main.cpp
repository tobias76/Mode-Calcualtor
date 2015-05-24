#include <iostream>

int main()
{
	//Current value being taken
	int currentValue = 0;

	//Read new values into this one
	int value = 0;

	if (std::cin >> currentValue)
	{
		int count = 1; //Stores the count for our currentValue

		while (std::cin >> value) //Take the remaining numbers
		{
			if (value == currentValue)
			{
				++count;
			}
			else //Print the values previous count
			{
				std::cout << currentValue << " occurs " << count << " times" << std::endl;

				//Remembers the current value
				currentValue = value;
				//Resets the counter
				count = 1;
			}
		} //Exit the while loop
		//Printing the last values count
		std::cout << currentValue << " occurs " << count << " times" << std::endl;
	}
	system("pause");
	return 0;
}