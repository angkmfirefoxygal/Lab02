#include <queue>
#include <iostream>
#include <string>
using namespace std;

/*int main() {
	queue<int> que;
	
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		
		string command;
		cin >> command;

		if (command == "push") {
			int x;
			cin >> x;
			que.push(x);
		}
		else if (command == "pop") {
			if (que.empty())
				cout << -1 << '\n';
			else {
				cout << que.front() << '\n';
				que.pop();
			}
				
		}

		else if (command == "front") {
			if (que.empty())
				cout << -1 << '\n';
			else
				cout << que.front() << '\n';
		}

		else if (command == "back") {
			if (que.empty())
				cout << -1 << '\n';
			else
				cout << que.back() << '\n';
		}

		else if (command == "size") {
			cout << que.size() << '\n';
		}
		else if (command == "empty") {
			if (que.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		
		
			
	}






	return 0;

}*/