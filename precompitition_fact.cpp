#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const long long int M = 1e9+7;
long long int fact[N];

int main(){
	long long int f = 1;
	for (int i = 1; i<N; i++){
		f = (f * i)%M;
		fact[i] = f;
	}
	int t = 0;
	int n = 0;
	cin >> t;
	while(t--){
		cin >> n;
		cout << fact[n]<<endl;
	}
}