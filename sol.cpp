#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	char a[100][100];
	int r, c;
	cin >> r >> c;
	bool checker = false;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> a[i][j];
			if(a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y'){
				checker = true;
			}
		}
	}
	if(checker) cout << "#Color";
	else cout << "#Black&White";
	cout << "\n";
	return 0;
}
