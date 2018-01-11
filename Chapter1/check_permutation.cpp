// Return true if one passed string is a permutation of the other.

#include <string>

using namespace std;

bool check_permutation(string s1, string s2){
	int chars [256]; // 256 ASCII characters
	for(int i = 0; i < 256; i++) chars[i] = 0;

	for(int i = 0; i < s1.length(); i++){
		chars[s1.at(i)]++;
	}

	for(int i = 0; i < s2.length(); i++){
		chars[s2.at(i)]--;
	}

	for(int i = 0; i < 256; i++){
		if(chars[i] != 0) return false;
	}

	return true;
};
