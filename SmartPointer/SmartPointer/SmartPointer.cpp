#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main(void) {
	unique_ptr<int> p1(new int(10));
	unique_ptr<int> p2;
	cout << "smart pointer 1 : " << p1 << endl;
	cout << "smart pointer 2 : " << p2 << '\n';
	cout << "---소유권 이전---" << endl;
	p2 = move(p1); // 소유권 이전
	cout << "smart pointer 1 : " << p1 << endl;
	cout << "smart pointer 2 : " << p2 << '\n';
	cout << "값 : " << *p2 << endl;
	cout << "---메모리 해제---" << endl;
	p2.reset();
	cout << "smart pointer 1 : " << p1 << endl;
	cout << "smart pointer 2 : " << p2 << '\n' << endl;
	// unique_ptr

	int* array = new int[10];
	shared_ptr<int> s1(array);
	cout << "reference # of s1 : " << s1.use_count() << endl;
	shared_ptr<int> s2 = s1;
	cout << "reference # of s1 : " << s1.use_count() << endl;
	cout << "reference # of s2 : " << s2.use_count() << endl;
	shared_ptr<int> s3 = s2;
	cout << "reference # of s1 : " << s1.use_count() << endl;
	cout << "reference # of s2 : " << s2.use_count() << endl;
	cout << "reference # of s3 : " << s3.use_count() << endl;
	cout << "sp reset" << endl;
	s1.reset();
	s2.reset();
	s3.reset();
	cout << "reference # of s1 : " << s1.use_count() << endl;
	cout << "reference # of s2 : " << s2.use_count() << endl;
	cout << "reference # of s3 : " << s3.use_count() << endl << endl;
	//shared_ptr

	int* arr = new int(1);
	shared_ptr<int> sp1(arr);
	weak_ptr<int> wp(sp1);
	cout << "ref # of sp1 : " << sp1.use_count() << endl;
	cout << "ref # of wp : " << wp.use_count() << endl;
	if (true) {
		shared_ptr<int> sp2 = wp.lock(); // lock() 은 weak_ptr의 포인터값 반환함수
		cout << "ref # of sp1 : " << sp1.use_count() << endl;
		cout << "ref # of sp2 : " << sp2.use_count() << endl;
		cout << "ref # of wp : " << wp.use_count() << endl << endl;
	}
	cout << "ref # of sp1 : " << sp1.use_count() << endl;
	cout << "ref # of wp : " << wp.use_count() << endl << endl;

	system("pause");
}