#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void) 
{
	int t;
	cin >> t;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string arr;
	stack<char> s;
	bool flag = false;
	cin >> arr;

	while (t--) 
	{
		for (char c : arr) 
		{
			if (c == '(') s.push('(');
			else if (s.empty())
			{
				flag = true;
				cout << "NO" << '\n';
			}
			else s.pop();
		}
		if (!flag) 
		{
			if (s.empty()) cout << "YES" << '\n';
			else cout<<"NO"<<'\n'
		}		

	}
	return 0;
}