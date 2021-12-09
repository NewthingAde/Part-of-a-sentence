#include <stdio.h>
#include <string.h>

#define SIZE 1000

// Drivers code
int main(void)
{
	// Declearation of variables
	char input[SIZE];
	int i = 0, counter = 0, length = 0;
	char *ptr;
	ptr = input;
	printf("Enter a sentence\n");

	// we get the the input from the user using fgets methods
	// fgets libray accept three parameters (string pointer, SIZE, and library file)
	// returns the value of the string

	fgets(input, SIZE, stdin);

	// lenth of the input from the user is stored in variable length
	length = strlen(input);

	// loop statement to loop through the lenght of the string
	for (i = 0; i < length; i++)

	{
		// Conditional statement to check if the input is a string
		//  If the index of input == an empty string increase the count
		if (input[i] == ' ')
		{
			counter = counter + 1;
			// If the count == 2, set the index of input into the pointer variable
			if (counter == 2)
			{
				ptr = &input[i];
			}
		}
	}

	// if count is less than 2, print a message to the console
	if (counter < 2)
	{
		printf("sentence is too short\n");
	}

	// if count is not less than 2, print the value of variable
	else
	{
		printf("%s", ptr);
	}
	return 0;
}
