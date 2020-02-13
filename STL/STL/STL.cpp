#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void) {
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	cout << "Stack" << endl;
	while (!s.empty()) {
		cout << s.top() << "  ";
		s.pop();
	}
	// Stack STL

	queue<int> q;
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.pop();
	q.pop();
	q.push(7);
	q.push(8);
	q.push(9);
	cout << endl << endl << "Queue" << endl;
	while (!q.empty()) {
		cout << q.front() << "  ";
		q.pop();
	}
	// Queue STL

	priority_queue<int> pq;
	int n, x;
	cout << endl << endl << "Priority Queue" << endl;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> x; pq.push(x); }
	while (!pq.empty()) {
		cout << pq.top() << "  ";
		pq.pop();
	}
	// Priority Queue STL


	system("pause");
}