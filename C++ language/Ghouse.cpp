#include<iostream>
#include<stack>
#include<string>

using namespace std;

int isbracket(char c);
bool isvalid(char c1,char c2);

int main(){
	string s;
	int i;
	cin>>s;
	stack<char> ch;
	for(i=0;i<s.size();i++){
		if(isbracket(s[i])==1)
		ch.push(s[i]);
		if(isbracket(s[i])==2){
			if((!ch.empty()) &&isvalid(ch.top(),s[i]))
			ch.pop();
			else
			break;
		}
	}
	if(i==s.size() && ch.empty())
	cout<<"1";
	else 
	cout<<"0";	
}

int isbracket(char c){
	if(c=='(' || c=='{' || c=='[')
	return 1;
	if(c==')' || c=='}' || c==']')
	return 2;
	return 0;
}

bool isvalid(char c1,char c2){
	if((c1=='(' &&  c2==')') || (c1=='{' &&  c2=='}') || c1=='[' && c2==']')
	return true;
	return false;
}