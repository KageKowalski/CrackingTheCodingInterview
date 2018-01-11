#include <iostream>
#include "is_unique.cpp"
#include "check_permutation.cpp"

using namespace std;

// is_unique driver
/*
int main(){
	string s;
	cin >> s;
	if(is_unique(s)) cout << "unique" << endl;
	else cout << "non-unique" << endl;

	return 0;
};
*/

// check_permutation driver

int main(){
	string s1;
	string s2;

	cin >> s1;
	cin >> s2;

	if(check_permutation(s1, s2)) cout << "permutation" << endl;
	else cout << "non-permutation" << endl;

	return 0;
};

