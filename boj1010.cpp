/*#include <iostream>
using namespace std;


int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T = 0;
	cin >> T;

	while (T--) {
		
		long long result = 1;
		int N=0, M=0;

		cin >> N >> M;

		int r = 1;
		for (int j = M; j > M - N; j--) { // N=13, M=29 ÀÎ °æ¿ì, (29*28*...17 / 1*2*...13 )
			result = result * j;
			result = result / r;
			r++;
		}
	
		cout << result << "\n";
	}
	return 0;
}*/