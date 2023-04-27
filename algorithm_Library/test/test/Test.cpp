#include "Test.h"
#include <iostream>
#include <string>

using namespace std;

void Test::test_2480()
{
	int a, b, c;

	cin >> a, b, c;
	
	//같은 눈이 3개가 나오면 10, 000원 + (같은 눈)×1, 000원의 상금을 받게 된다.
	

	//같은 눈이 2개만 나오는 경우에는 1, 000원 + (같은 눈)×100원의 상금을 받게 된다.
	

	//모두 다른 눈이 나오는 경우에는(그 중 가장 큰 눈)×100원의 상금을 받게 된다.



	/*예를 들어, 3개의 눈 3, 3, 6이 주어지면 상금은 1, 000 + 3×100으로 계산되어 1, 300원을 받게 된다.
	또 3개의 눈이 2, 2, 2로 주어지면 10, 000 + 2×1,000 으로 계산되어 12,000원을 받게 된다.
	3개의 눈이 6, 2, 5로 주어지면 그중 가장 큰 값이 6이므로 6×100으로 계산되어 600원을 상금으로 받게 된다.*/
}

void Test::test_2525()
{
	int A, B;
	int cookingTime;	

	cin >> A >> B;

	cin >> cookingTime;

	if ((0 <= A && 23 >= A) && (0 <= B && 59 >= B))
	{
		B += cookingTime;

		if (B >= 60)
		{
			A = A + B / 60;
			B = B % 60;		

			if (24 <= A)
			{
				A -= 24;
			}
		}
		
		cout << A << " " << B << endl;		
	}
}

void Test::test_2884()
{
	int H = 0, M = 0;
	
	cin >> H >> M;

	if ((0 <= H && 23 >= H) && (0 <= M && 59 >= M))
	{
		M = M - 45;
		
		if (0 > M)
		{
			M = 60 + M;

			H -= 1;		
		}

		if (0 > H)
		{
			H = 23;
		}

		cout << H << " " << M << endl;		
	}	
}

void Test::test_14681()
{
	int x = 0, y = 0;

	cin >> x >> y;

	if ((-10000 <= x && 10000 >= x && 0 != x) && (-10000 <= y && 10000 >= y && 0 != y))
	{		
		if (0 < x && 0 < y)
		{
			cout << "1" << endl;
		}		
		else if (0 > x && 0 < y)
		{
			cout << "2" << endl;
		}		
		else if (0 > x && 0 > y)
		{
			cout << "3" << endl;
		}		
		else if (0 < x && 0 > y)
		{
			cout << "4" << endl;
		}
	}
}

void Test::test_2753()
{
	unsigned int year = 0;

	cin >> year;

	if (1 <= year && 4000 >= year)
	{
		if (year % 400 == 0)
		{
			cout << "1" << endl;
		}
		else if (year % 4 == 0 && year % 100 != 0)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
}

void Test::test_9498()
{
	unsigned int score = 0;

	cin >> score;

	if (0 <= score && 100 >= score)
	{
		if (100 >= score && 90 <= score)
		{
			cout << "A" << endl;
		}
		else if (80 <= score && 89 >= score)
		{
			cout << "B" << endl;
		}
		else if (70 <= score && 79 >= score)
		{
			cout << "C" << endl;
		}
		else if(60 <= score && 69 >= score)
		{
			cout << "D" << endl;
		}
		else
		{
			cout << "F" << endl;
		}
	}	
}

void Test::test_1330() 
{
	int A = 0, B = 0;

	cin >> A >> B;

	if ((-10000 <= A && 10000 >= A) && (-10000 <= B && 10000 >= B))
	{	
		if (A > B)
		{
			cout << ">" << endl;
		}
		else if (A < B)
		{
			cout << "<" << endl;
		}
		else
		{
			cout << "==" << endl;
		}	
	}
}

void Test::test_10172()
{
	string dogPrint;

	dogPrint = "|\\_/|\n|q p|   /}\n( 0 )\"\"\"\\\n|\"^\"`    |\n||_/=\\\\__|";

	cout << dogPrint << endl;
}

void Test::test_10171()
{
	string catPrint;

	catPrint = "\\    /\\ \n )  ( ')\n(  /  )\n \\(__)|";

	cout << catPrint << endl;
}

void Test::test_11382()
{
	long long A, B, C;
	long total = 0;

	cin >> A >> B >> C;

	total = A + B + C;

	cout << total << endl;
}

void Test::test_10430()
{
	int a = 0;
	int b = 0;
	int c = 0;
	float result = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	result = (a + b) % c;
	cout << result << endl;

	result = ((a % c) + (b % c)) % c;
	cout << result << endl;

	result = (a * b) % c;
	cout << result << endl;

	result = ((a % c) * (b % c)) % c;
	cout << result << endl;
}

void Test::test_2588()
{
	string stringA = "";
	string stringB = "";

	int resultA = 0;
	int resultB = 0;
	int resultC = 0;
	int sum = 0;

	int onePlace_B = 0;
	int tensPlace_B = 0;
	int hundredPlace_B = 0;

	cin >> stringA;

	cin >> stringB;

	onePlace_B = stoi(stringB.substr(2));

	int integerA = stoi(stringA);
	resultA = integerA * onePlace_B;

	tensPlace_B = stoi(stringB.substr(1, 1));
	resultB = integerA * tensPlace_B;

	hundredPlace_B = stoi(stringB.substr(0, 1));
	resultC = integerA * hundredPlace_B;

	// print result 
	cout << resultA << endl;
	cout << resultB << endl;
	cout << resultC << endl;

	sum = resultA + (resultB * 10) + (resultC * 100);

	cout << sum << endl;

	// stoi	  : string to int 
	// substr : Returns a substring [pos, pos+count)
}