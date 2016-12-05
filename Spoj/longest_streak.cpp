#include <iostream>
#include<cmath>
#include<vector>
using namespace std;


int count_last(string s){
	int count=0;
	if(s[s.length()-1]=='C'){
		for(int i=s.length()-1;i>=0;i--){
			if(s[i]!='C')
			break;
			count++;
		}
	}
	return count;
}

int long_vec_streak(vector<int>v){
	vector<int>count;
	int cn=0,max1=0;
	for(int i=0;i<v.size();i++){
		if(v[i]==2880){
			cn++;
		}
		else{
			count.push_back(cn);
			cn=0;
		}
	}
	for(int i=0;i<count.size();i++){
		max1=max(max1,count[i]);
	}
	/*max1=max(max1,count_last(s));
	return max1;*/
}

int max_streak(string s){
	vector<int>count;
	int cn=0,max1=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='C'){
			cn++;
		}
		else{
			count.push_back(cn);
			cn=0;
		}
	}
	for(int i=0;i<count.size();i++){
		max1=max(max1,count[i]);
	}
	max1=max(max1,count_last(s));
	return max1;
}


int count_first(string s){
	int count=0;
	if(s[0]=='C'){
		for(int i=0;i<s.length();i++){
			if(s[i]!='C')
			break;
			count++;
		}
	}
	return count;
}

int main()
{
    int t,max2=0,max3=0,cnt=0,arb=0;
    cin>>t;
    vector<int>vec;
    string ar[t];
    for(int i=0;i<t;i++){
    	cin>>ar[i];
    //cout << max_streak(ar[i])<<endl;
    }
    //cout<<ar[2]<<endl;
    for(int i=0;i<t;i++){
    	max2=max(max2,max_streak(ar[i]));
    }
    cout<< max2 << " ";
    for(int i=0;i<t-1;i++){
    	cnt=count_last(ar[i])+count_first(ar[i+1]);
    	//cout<<cnt <<endl;
    	vec.push_back(cnt);
    	
    }
    arb=long_vec_streak(vec);
    for(int i=0;i<vec.size();i++){
    	max3=max(max3,vec[i]);
    	//if(max3==2880) max3=525600;
    }
    max3=max(max3,arb*1440);
    cout << max3 << endl;
}
