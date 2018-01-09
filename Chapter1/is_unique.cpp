// Return true if all characters in passed string are unique.

#include <string>

using namespace std;

bool is_unique(string s){
	bool chars[256]; // 256 ASCII characters.

	for(auto i = 0; i < s.length(); i++){
		if(chars[s[i]]) return false;
		else chars[s[i]] = true;
	}

	return true;
};
