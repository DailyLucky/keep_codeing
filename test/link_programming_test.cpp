#include <iostream>
using namespace std;

class Test {
public:
	Test(int _a = 0) : a(_a) {
		cout << "Test()" << endl;
	}
	~Test() {
		cout << "~Test()" << endl;
	}
	// 一个链式编程测试案例
	// Test& PrintTest()
	Test PrintTest() {
		this->a++;
		cout << "a: " << a << endl;
		return *this;
	}
private:
	int a;
};

void ObjPlay1() {
	Test t1(10);
	// 这里的调用方法产生了3个匿名对象
	t1.PrintTest().PrintTest().PrintTest();

}

int main() {
	ObjPlay1();
	return 0;
}