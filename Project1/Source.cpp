#include <iostream>
#include <conio.h>

void main()
{
	int N;


	do {
		std::cin >> N;
	} while (N <= 0 && N >= pow(10, 9));

	int rectangleWidth = sqrt(N);
	int rectangleLength = N / rectangleWidth;

	int remainderOfSquares = N % (rectangleWidth*rectangleLength);

	int amountOfMatches = rectangleWidth * (rectangleLength + 1) + rectangleLength * (rectangleWidth + 1);

	if (remainderOfSquares) {
		amountOfMatches = amountOfMatches + (2 * remainderOfSquares) + 1;
	}


	std::cout << amountOfMatches;

	_getch();
}