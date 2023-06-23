#include<bits/stdc++.h>
using namespace std;
const int ai = 10e7+10;
int h[ai];

int main(){
	int tem = 0;
	int N = 0;
	cin >> N;

	for (int i = 0; i <N; i++){

		cin >> tem;
		h[tem]++;
	}

	int q = 0;
	cin >> q;
	int n = 0;

	while (q--){
		cin >> n;
		cout << h[n]<<endl;
	}
}