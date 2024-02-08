#include <iostream>
#include <string>
#include <stack>

using namespace std;

/*int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--)
	{
		string arr;
		stack <char> s;
		bool flag = false;
		cin >> arr;

		for (char c : arr)
		{
			if (c == '(') s.push('(');
			else if (s.empty())
			{
				flag = true;
				cout << "NO" << '\n';
				break;
			}
			else s.pop();
		}
		if (!flag) //flag==false
		{
			if (s.empty()) cout << "YES" << '\n';
			else cout << "NO" << '\n';
		}

	}
	return 0;
}*/