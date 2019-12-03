#include <iostream>
#include <vector>
using namespace std;

class Bonus
{
public:
	int getMost(vector<vector<int> > board)
	{
		int tmpup;
		int tmpleft;
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (i == 0 && j == 0)
				{
					board[i][j] = board[0][0];
				}
				else if (i == 0)
				{
					board[i][j] += board[i][j - 1];
				}
				else if (j == 0)
				{
					board[i][j] += board[i - 1][j];
				}
				else
				{
					tmpup = board[i - 1][j];
					tmpleft = board[i][j - 1];
					if (tmpup > tmpleft)
					{
						board[i][j] += tmpup;
					}
					else
					{
						board[i][j] += tmpleft;
					}
				}
			}
		}
		return board[5][5];
	}
};

int main1()
{



	return 0;
}