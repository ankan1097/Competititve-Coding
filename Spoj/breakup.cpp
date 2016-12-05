#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	bool ret1=false,ret2=false;
	unsigned int l_pos,o_pos,v_pos,e_pos;
	cin>>s;
	//cout<<1<<endl;
	l_pos=s.find('l');
	//cout<<3;
	e_pos=s.find_last_of('e');
	//cout<<2<<endl;
	if(l_pos<e_pos && l_pos!=string::npos && e_pos!=string::npos){
		//cout<<1;
		for(int i=l_pos;i<e_pos;i++){
			if(s[i]=='o'){
				o_pos=i;
				ret1=true;
				break;
			}
		}
		for(int i=e_pos;i>l_pos;i--){
			if(s[i]=='v'){
				v_pos=i;
				ret2=true;
				break;
			}
		}
	}
	else{

		cout << "Let us breakup!" << endl;
		return 0;
	}
	//cout<<2;
	if(o_pos<v_pos && ret1==true && ret2==true) 
		cout << "I love you, too!" << endl;
	else cout << "Let us breakup!" << endl;
}