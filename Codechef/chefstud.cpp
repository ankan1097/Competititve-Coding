#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	for (int k=0;k<T;k++){
		string s;
		int count = 0;
		cin >> s;
		for(int i=0;i<s.length()-1;i++){
			if(s[i] == '<' && s[i+1] == '>'){
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
