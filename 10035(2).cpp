#include <iostream> 
#include <string>
using namespace std;
int main() {
	string input1, input2;
	while (cin >> input1 >> input2)
	{
		if (input1 == "0" && input2 == "0") // 如果輸入為:0 0，就要結束程式。
		{
			break;
		}

		int buffer[10] = {}; // 輸入皆不超過10位數，相加後最多10位數。
		int len1 = input1.length(); // 取得input1的字串長度。
		int len2 = input2.length(); // 如上(input2)。
		int sum = 0;
		for (int i = 0; i < len1; i++) // 將字串倒著存入buffer。
		{
			buffer[i] += input1[len1 - 1 - i] - '0';
		}

		for (int i = 0; i < len2; i++) // 如上
		{
			buffer[i] += input2[len2 - 1 - i] - '0';
		}

		for (int i = 0; i < 9; i++) // 計算進位
		{
			if (buffer[i] >= 10)
			{
				buffer[i] -= 10;
				buffer[i + 1]++;
				sum++;
			}
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
		{
			cout << sum << " carry operations." << endl;
		}
	}
	
	return 0;
} // 結束