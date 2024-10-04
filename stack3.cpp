#include<bits/stdc++.h>
using namespace std;

// Function to check the balance
bool isBalanced(string str)
{
    // Creating a stack
    stack<char> st;
    
    // Iterating through the string
    // of braces 
    for(int i = 0; i < str.length(); i++)
    {
        // Pusing the elements into stack
        if(str[i] == '(')
            st.push(str[i]);
            
        // Popping the elements out
        else
        {
            if(st.empty())
                return 0;
            st.pop();
        }
    }
    
    // Checking the balance
    if(!st.empty())
        return 0;
    return 1;
}

// Drivers Method
int main()
{
    string bracSeq = "(())(())";
    cout << isBalanced(bracSeq);
    return 0;
}
