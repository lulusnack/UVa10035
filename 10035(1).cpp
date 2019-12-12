#include <iostream>
using namespace std;
int main()
{
	long int input1, input2; // 最長不超過10位數，用long int。
	while (cin >> input1 >> input2)
	{
		if (input1 == 0 && input2 == 0) // 輸入為:0 0，結束程式。
		{
			break;
		}

		int sum = 0;
		int carry = 0;

		while (input1 > 0 || input2 > 0)
		{
			if (input1 % 10 + input2 % 10 + carry >= 10) // 計算進位
			{
				carry = 1;
				sum++;
			}
			else
				carry = 0;

			input1 /= 10;
			input2 /= 10;
		}

		if (sum == 0) // 輸出
		{
			cout << "No carry operation." << endl;
		}
		else if (sum == 1)
		{
			cout << "1 carry operation." << endl;
		}
		else
			cout << sum << " carry operations." << endl;
	}
	return 0;
} // 結束
