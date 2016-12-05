#include<iostream>
using namespace std;

string replace(string s){
	for(int i=0;i<s.length()-4;i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			s[i]='0';
		}
	}
	return s;
}


int main(){
	int t,count;
	string s;
	cin>>t;
	for(int k=0;k<t;k++){
		count=0;
		cin>>s;
		s=replace(s);
		for(int i=0;i<s.length();i++){
			if(s[i]!='0'){
				count++;
			}
		}
		count=count-4;
		cout<<count<<"/"<<s.length()<<endl;
	}
}