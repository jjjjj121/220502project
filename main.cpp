#include<iostream>
#include<string>

using namespace std;

int main()
{
	//정수형 변수 사칙연산, 나머지 출력하기

	int a = 10;
	int b = 3;

		cout << a + b << endl;	//덧셈
	cout << a - b << endl;	//뺄셈
	cout << a * b << endl;	//곱셈
	cout << a / b << endl;	//나누기
	cout << a % b << endl;	//나머지

	//실수형 변수 사칙연산, 나머지 출력하기

	float c = 10.0f;
	float d = 3.3f;

	cout << c + d << endl;
	cout << c - d << endl;
	cout << c * d << endl;
	cout << c / d << endl;
	//cout << c % d << endl;	나머지 연산은 정수에서만 가능.


	return 0;
}
