#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <set>
#include <map>

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

	deque<int> d;
	cout << endl << endl << "Deque" << endl;
	d.push_front(7); 
	d.push_back(3);
	d.pop_front();
	d.push_front(2);
	for (int i = 0; i < d.size(); i++) { cout << d[i] << "  "; }
	cout << endl;
	deque<int>::iterator iter;
	iter = d.begin();
	d.insert(iter + 1, 3, 5);
	for (int i = 0; i < d.size(); i++) { cout << d[i] << "  "; }
	cout << endl;
	d.clear();
	cout << d.empty();
	//Deque STL

	vector<int> v;
	cout << endl << endl << "Vector" << endl;
	v.push_back(3); v.push_back(5); v.push_back(7); v.push_back(9);
	v.pop_back();
	for (int i = 0; i < v.size(); i++) { cout << v[i] << "  "; }
	cout << "\n";
	vector<int>::iterator v_iter;
	v_iter = v.begin();
	v.insert(v_iter + 2, 3, 1);
	for (int i = 0; i < v.size(); i++) { cout << v[i] << "  "; }
	cout << "\n";
	v.clear();
	cout << v.empty() << endl;
	// Vector STL

	cout << endl << "Set" << endl;
	int a[5] = { 10, 8, 6, 4, 2 };
	set<int> se(a, a + 5);
	set<int>::iterator s_iter = se.begin();
	for (; s_iter != se.end(); s_iter++) {
		cout << *s_iter << "  ";
	}
	cout << "\n";
	se.insert(1); se.insert(3); se.insert(5); se.insert(7); se.insert(9);
	for (s_iter = se.begin(); s_iter != se.end(); s_iter++) {
		cout << *s_iter << "  ";
	}
	cout << "\n";
	se.clear();
	cout << se.empty() << "\n";
	// Set STL

	cout << endl << "Map" << endl;
	map<string, int> m;
	m["Cha Jun Hyung"] = 3; m["Hong Gil Dong"] = 1; m["JYP"] = 2;
	map<string, int>::iterator m_iter = m.begin();
	for (; m_iter != m.end(); m_iter++) {
		cout << m_iter->first << ":" << m_iter->second << endl;
	}
	cout << m["unknown"] << "\n";
	m["Add"] = 3;
	m["unknown2"];
	for (m_iter = m.begin(); m_iter != m.end(); m_iter++) {
		cout << m_iter->first << ":" << m_iter->second << endl;
	}
	//Map STL

	system("pause");
}