/*
	测试一下条件判断中 含有赋值语句 产生的现象
*/
#include <iostream>

using namespace std;

int main() {
	int a = 99;
	int b = 2;
	cout << "a: " << a << "\tb: " << b << endl;

	if (a = 0 && b == 2) {
		cout << "Expression \"a = 0\" is true" << endl;  
	} else {
		cout << "Expression \"a = 0\" is false" << endl;  
	}
	cout << "a: " << a << "\tb: " << b << endl;

	if (a = 10 && b == 2) {
		cout << "Expression \"a = 10\" is true" << endl;  
	} else {
		cout << "Expression \"a = 10\" is false" << endl;  
	}
	cout << "a: " << a << "\tb: " << b << endl;

	if (a = -10 && b == 2) {
		cout << "Expression \"a = -10\" is true" << endl;  
	} else {
		cout << "Expression \"a = -10\" is false" << endl;  
	}
	cout << "a: " << a << "\tb: " << b << endl;
	return 0;
}
/*
	条件判断中 赋值语句 的结果是个布尔值，并将这个布尔值赋给了被赋值的那个变量。表现出来就是无论你看着是赋的
	什么值，最终那个变量的值也只会是1，即true；或者是0，即false。当且仅当赋值为0的时候才会是false。以前想的只要
	是赋值语句都是为真的想法是不正确的。果然还是得实际跑一跑，立马见分晓啊。
*/
