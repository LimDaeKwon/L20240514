#include<iostream>

using namespace std;

int main()
{
	int Map[10][10] =
	{
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};
	int PlayerX = 1;
	int PlayerY = 1;
	int GateX = 8;
	int GateY = 8;
	char Key = 0;

	for (;;)
	{
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (GateX == X && GateY == Y)
				{
					cout << "G";
				}
				else if (Map[Y][X] == 0)
				{
					cout << " ";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "*";
				}
				

			}
			cout << endl;

		}
		if (PlayerX == GateX && PlayerY == GateY)
		{
			break;
		}
		cin >> Key;
		if (Key == 'w' && Map[PlayerY-1][PlayerX] != 1)
		{
			PlayerY--;
		}
		else if (Key == 's' && Map[PlayerY + 1][PlayerX] != 1)
		{
			PlayerY++;
		}
		else if (Key == 'a' && Map[PlayerY][PlayerX - 1] != 1)
		{
			PlayerX--;
		}
		else if (Key == 'd' && Map[PlayerY][PlayerX + 1] != 1)
		{
			PlayerX++;
		}
		

		system("cls");
		
	}


	return 0;

}