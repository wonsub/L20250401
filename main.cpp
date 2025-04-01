#include <iostream>

using namespace std;


int main()
{
	int Num1, Num2;
	float FNum1, FNum2;

	cout << "정수형 두 수를 입력해주세요" << endl;
	cin >> Num1 >> Num2;

	cout << "두 수의 + 결과:" << (Num1 + Num2) << endl;
	cout << "두 수의 - 결과:" << (Num1 - Num2) << endl;
	cout << "두 수의 * 결과:" << (Num1 * Num2) << endl;
	cout << "두 수의 / 결과:" << (Num1 / Num2) << endl;


	cout << "실수형 두 수를 입력해주세요" << endl;
	cin >> FNum1 >> FNum2;

	cout << "두 수의 + 결과:" << (FNum1 + FNum2) << endl;
	cout << "두 수의 - 결과:" << (FNum1 - FNum2) << endl;
	cout << "두 수의 * 결과:" << (FNum1 * FNum2) << endl;
	cout << "두 수의 / 결과:" << (FNum1 / FNum2) << endl;



	return 0;

}
