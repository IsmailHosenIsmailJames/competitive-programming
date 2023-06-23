#include <bits/stdc++.h>
using namespace std;
int c[30];

int main(){
	string s;
	int q = 0;
	cin >> q;

	while(q--){
		cin >> s;
		bool yes = false;
		int l = s.size();
		for (int i = 0; i < l; i++){
			c[s[i]-'a']++;
		}
		for (int i = 0; i < 29; ++i)
		{
			if (c[i]%2 == 0 ){
				if(c[i] !=0){
					cout << "Yes"<<endl;
					yes = true;
					break;
				}
			}
		}

		if (yes == false)

		{
			cout << "No"<<endl;
		}

		for (int i = 0; i < 30; ++i)
		{
			c[i]=0;
		}
	}
}