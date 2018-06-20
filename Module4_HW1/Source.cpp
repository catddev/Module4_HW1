#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		int a, x = 0;
		cin >> a;
		while (a <= 500)
		{
			x = x + a;
			a++;
		}
		cout << x << endl;
	}
	break;
	case 2:
	{
		int x, y;
		bool exit = false;
		int counter = 0;
		while (!exit)
		{
			cout << "vvedite X i Y:"<<endl;
			cin >> x >> y;
			int n = pow(x, y);
			cout << n << endl << endl;

			++counter;
			if (counter ==3) exit = true;
		}
	}
	break;
	case 3:
	{
		float n=0;
		for (float i = 1; i <= 1000; i++)
		{
			n = n + i;
		}
		cout << n / 1000 << endl;
	}
	break;
	case 4:
	{
		unsigned long long int a, x = 1; //почему без модификатора unsigned выводит отрицательное произведение?
		cout << "vvedite a ot 1 do 20:";
		cin >> a;
		if (a >= 1 && a <= 20)
		{
			for (int i = a; i < 21; i++)
			{
				x = x*i;
			}
			cout << x << endl;
		}
		else cout << "1<=a<=20" << endl;
	}
	break;
	case 5:
	{
		int k;
		cin >> k;
		for (int i = 2; i < 10; i++)
		{
			int x = k*i;
			cout << k << " x " << i << " = " << x << endl;
		}
	}
	break;
	case 6:
	{
		// Вывести на экран прямоугольник с заданными сторонами заданным символом.
		
		char symbol = 'D';
		int a, b;
		cin >> a >> b;
		for (int i = 0; i <=a*b-1; i++)
		{
			if (i % a == 0) cout << endl;
			cout << symbol;
		}
		cout << endl << endl;
	}
	break;
	case 7:
	{
		// Вывести на экран пустой прямоугольник с заданными размерами заданным символом заданного цвета.

		char symbol = 'D';
		int a=0, b=0, n=15;
		cout<<"vvedite storony pryamougolnika i cvet simvola"<<endl;
		cin >> a >> b >> n;
		SetConsoleTextAttribute(hConsole, n);

		for (int i = 0; i < a; i++)
		{
			if (i == 0 || i == a - 1)
			{
				for (int j = 0; j < b; j++)
				{
					cout << symbol;
				}
					cout << endl;
			}
			else
			{
				cout << symbol;
				for (int j = 0; j < b - 2; j++)
				{
					cout << " ";
				}
					cout << symbol << endl;
			}
		}
		cout << endl;
	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}