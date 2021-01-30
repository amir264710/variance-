#include <iostream>
using namespace std;
float arr[100];

int var(float arr[100], int n) {
	float sum=0;
	float avr=0;
	float sumvar = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	avr = sum / n;
	for (int i = 0; i < n; i++) {
		sumvar += (arr[i] - avr) * (arr[i] - avr);
	}
	return sumvar / n;
}
int repeat(float arr[100], int n, int value) {
	int count=0;
	for (int j = 0; j < n; j++) {
		if (value == arr[j]) {
			count++;
		}
	}
	return count;

}
float mood(float arr[100], int n) {
	float mod = arr[0];
	for (int i = 0; i < n; i++) {
		if (repeat(arr, n, arr[i]) < repeat(arr, n, arr[i+1])) {
			mod = arr[i + 1];
		}
	}
	return mod;
}
int main() {
	int n;
	cout << "entre the size of number" << endl;
	cin >> n;
	cout << "entre the  numbers" << endl;
	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "]";
		cin >> arr[i];
	}
	cout << var(arr, n)<<endl;
	cout << mood(arr, n);
}