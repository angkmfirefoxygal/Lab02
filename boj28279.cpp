#include <iostream>
#include <deque>
using namespace std;


/*int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;

	int n;
	cin >> n;

	for (int i=0; i < n; i++) {
		
		int op;
		cin >> op;

		if (op == 1) 
		{
			int x;
			cin >> x;
			dq.push_front(x);
		}

		if (op == 2) 
		{
			int x;
			cin >> x;
			dq.push_back(x);
		}

		if (op == 3) 
		{
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else 
			{
				cout << dq.front() << "\n"; //�տ� �ִ� �� ����ϰ�
				dq.pop_front();//�� ���� ������
			}

		}
		if (op == 4) 
		{
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}

		if (op == 5) 
		{
			cout << dq.size() << "\n";
		}

		if (op == 6) 
		{
			if (dq.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}

		if (op == 7) 
		{
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front() << "\n";
			}
		}
		
		if (op == 8) {

			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back() << '\n';
			}
		}
	}


	return 0;
}*/