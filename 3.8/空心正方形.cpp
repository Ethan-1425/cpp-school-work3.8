#include<iostream>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
		if (num == 0 || num > 20)continue;
		for (int i = 0;i < num;i++)
		{
			for (int j = 0;j < num;j++)
			{
				if (i == 0 || i == num - 1 || j == 0 || j == num - 1)
				{
					cout << "* ";
				}
				else { cout << "  "; }
			}
			cout << endl;
		}
	}
	return 0;
}