#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

template <typename T>
void change(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void change<int>(int& a, int& b) {
	cout << "Change integer type data.\n";
	int temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T = int> //default template factor
class Data {
private:
	T data;
public:
	Data(T data) : data(data) { }
	void setData(T data) { this->data = data; }
	T getData() { return data; }
};

int main(void) {
	string a = "Cha Jun Hyung";
	string b = "Anonymous";
	change(a, b);
	cout << a << " : " << b << endl;
	cout << "--------------------------------" << endl;
	//template basic

	int c = 1;
	int d = 2;
	change(c, d);
	cout << c << " : " << d << endl;
	cout << "--------------------------------" << endl;
	//expicit specialization

	Data<> data1(1); //omitted data type because of default template factor
	Data<string> data2("Jun.H.Cha");
	cout << data1.getData() << " : " << data2.getData() << endl;

	data1.setData(2);
	data2.setData("Cha. Jun. Hyung");
	cout << data1.getData() << " : " << data2.getData() << endl;
	// class member function test

	system("pause");
}