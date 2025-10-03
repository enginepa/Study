#include <iostream>
#include <cmath>

int main() {

	using namespace std;

	double age;
	cout << "请输入你的年龄：";
	cin >> age;
	double month;
	month = age * 12;
	cout << "你的年龄包含多少个月：" << month;
	return 0;
}