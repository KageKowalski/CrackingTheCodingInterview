// Replace ' ' characters with "%20" in given cstring

#include <queue>

using namespace std;

int urlify(char* s, int size){
	queue <char> str;

	for(int i = 0; i < size; i++){
		str.push(s[i]);
	}

	char c=' ';
	int i=0;
	while(!str.empty()){
		c = str.front();
		str.pop();
		if(c == ' '){
			s[i] = '%';
			i++;
			s[i] = '2';
			i++;
			s[i] = '0';
			i++;
		}
		else{
			s[i] = c;
			i++;
		}
	}

	return 0;
};
