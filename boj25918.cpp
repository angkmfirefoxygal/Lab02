/*#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	while (N--){
		string arr;
		stack <char> s;
		bool flag = false;
		cin >> arr;
		int i = 0;
		int j = 0;
		
	
		for (char c : arr) {
			if (s.empty()) { //스택이 비어있다면 ( 나 ) 는 push 해준다
				if (c == '(') {
					s.push('(');
				}
				else if (c == ')') {
					s.push(')');
				}
			}
			else if (s.top() == '(') {
				if (c == ')') {
					s.pop();
				}
				else s.push('(');
			}
			else if (s.top() == ')') {
				if (c == '(') {
					s.pop();
					
				}
				else if (c == ')') {
					s.push(')');
				}

			}

		}

		if (s.empty()) cout << max(i,j);
		else cout << "-1";

	}
	

	return 0;

}*/