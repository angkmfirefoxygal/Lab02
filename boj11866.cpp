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
			Q.push(Q.front()); // 원소 뒤로 붙이고
			Q.pop(); // 앞 원소는 제거
		}
		cout << Q.front(); //제거 후 k번째였던 원소 출력
		if (Q.size() != 1) cout << ","; //1개 남기 전까지는 쉼표 붙이기
		Q.pop();//출력 후 원소 제거
	}
	cout << ">";

	return 0;
}*/