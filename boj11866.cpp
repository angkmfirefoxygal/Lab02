#include <iostream>
#include <queue>
using namespace std;

/*int main() {

	queue <int> Q;

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) Q.push(i);

	cout << "<";

	while (Q.size() != 0) 
	{
		for (int i = 1; i < k; i++) {
			Q.push(Q.front()); // ���� �ڷ� ���̰�
			Q.pop(); // �� ���Ҵ� ����
		}
		cout << Q.front(); //���� �� k��°���� ���� ���
		if (Q.size() != 1) cout << ","; //1�� ���� �������� ��ǥ ���̱�
		Q.pop();//��� �� ���� ����
	}
	cout << ">";

	return 0;
}*/