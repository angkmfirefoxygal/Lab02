#include<iostream>
using namespace std;
#define N 10001

int main() {
	int arr[N] = {0,};
	int n, input_num;

	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> input_num;
		arr[input_num]++;
	}

	for (int i = 0; i < 10000; i++) {
		while (arr[i] != 0) {
			cout << i << "\n";
			arr[i]-- ;
		}
	}

	return 0;
}