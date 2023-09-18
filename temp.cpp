//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
		queue<char>q;
		map<char,int>mp;
		char ans;
		for(int i =0;i < S.size(); i++){
			mp[S[i]]++;
			q.push(S[i]);
			while(!q.empty() && mp[q.front()] >1) q.pop();
			if(q.empty())ans = '$';
			ans = q.front();
		}
		return ans;
       
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends