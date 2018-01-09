#include <iostream>
#include "is_unique.cpp"

using namespace std;

// is_unique driver
int main(){
	string s;
	cin >> s;
	if(is_unique(s)) cout << "unique" << endl;
	else cout << "non-unique" << endl;

	return 0;
};
