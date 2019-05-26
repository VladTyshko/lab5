#include <iostream>
#include <vector>

using namespace std;

int siftUp(vector<int>& heap, int v) {
	while ((v > 1) && (heap[v] > heap[v / 2])) {
		swap(heap[v], heap[v / 2]);
		v /= 2;
	}
	return v;
}
int main() {
	
	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 0; i < n; ++i) {
		cin >> a[i + 1];
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int v, x;
		cin >> v >> x;
		a[v] += x;
		cout << siftUp(a, v) << endl;
	}
	for (int i = 0; i < n; ++i) {
		cout << a[i + 1] << " ";
	}
	cout << endl;
	
}
