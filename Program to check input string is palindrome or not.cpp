// ******************************   Efficient learning world *****************************************
//_____________Program to check input string is palindrome or not_______
#include<iostream>
#include<algorithm>
using namespace std; 
int main() 
{
	string str="123";  // 321
	string reversestring=str;  // omg
	reverse(reversestring.begin(),reversestring.end());
	//str=omg  , reversestring = gmo
	if(str==reversestring)		//  saas==saas
	{
		cout<<"string is palindrome string"<<endl;
	}
	else
	{
		cout<<"string is not  palindrome string "<<endl;
	}
}

