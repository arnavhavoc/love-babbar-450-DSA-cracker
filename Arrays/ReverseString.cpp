//https://practice.geeksforgeeks.org/problems/reverse-a-string/1

//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  long long int s=0;
  long long e=str.size()-1;
  while(s<=e){
      swap(str[s], str[e]);
      s++;
      e--;
  }
  return str;
}

