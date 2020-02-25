#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

template <typename T>
class Data {
private:
	T data;
public:
	Data(T data) : data(data) {}
	T getData() { return data; }
	Data<T> operator /(const Data<T> &other) {
		if (other.data == 0) {
			throw 0;
		}
		return Data(data / other.data);
	}
};

int main() {
	try {
		Data<int> a(7);
		Data<int> b(0);
		Data<int> result = a / b; 
		cout << result.getData() << endl;
		int c = 3, d = 0;
		if (d == 0) {
			throw 1;
		}
		cout << c / d << endl;
	}
	catch (int e) {
		if (e == 0) {
			cout << "0으로 나눌수 없습니다.(class)" << endl;
		}
		if (e == 1) {
			cout << "0으로 나눌수 없습니다.(int)" << endl;
		}
	}

	system("pause");
}