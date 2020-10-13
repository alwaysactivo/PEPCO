#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool redundant(string str)
{
    stack <char> s; 
   
    int n = str.length() ; 
    for(int i = 0 ; i < n;i++)
    {
        if(str[i] == ')' && !s.empty())
        {
        	if(s.top() == '('){
        		return true;
        	}
        	else{
        		while(s.top() != '('){
        			s.pop();
        		}
        		s.pop();
        	}

        }
        else
        {
            s.push(str[i]) ;
        }
    }
    return false ;     
}

 
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n ; 
    cin>>n ; 
    for(int i = 0 ; i < n ; i++)
    {
        string str ; 
        cin>>str ; 
        bool p = redundant(str) ; 
        if(p)
        {
            cout<<"Duplicate"<<endl ; 
        }
        else
        {
            cout<<"Not Duplicates"<<endl ; 
        }
    }
    }
