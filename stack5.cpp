// Program to print the reverse of string
#include <bits/stdc++.h>
using namespace std;

// Function to perform the
// reverse operation
void reverse(string str)
{
    // Creating a stack of characters
    stack<char> st;

    // Pushing elements into the stack
    for (int i = 0; i < str.length(); i++)
        st.push(str[i]);

    // Popping elements from the top
    // to get the reverse order
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}

// Driver Method
int main()
{
    // String to reverse
    string str = "GeeksQuiz";
    reverse(str);

    return 0;
}