
STEPS: 
// Loop from idx to n to swap the current character (str[idx]) with every character after it (str[i]).
// After swapping, call permutation(idx + 1, str, ans, n) to fix the next character.
// After the recursive call, backtrack by swapping back to restore the original order.


#include<bits/stdc++.h>
using namespace std;
void permutation(int idx, string &str, vector<string>&ans , int n){
   if(idx == n){
     ans.push_back(str);
     return;
   }
   
   for(int i = idx;  i<n; i++){
    swap(str[i],str[idx]);        

    permutation(idx+1,str,ans,n);

    swap(str[i],str[idx]);
   }

}
int main(){
    string str = "ABC";
    vector<string>ans;
    permutation(0,str,ans,str.size());

    for(auto &perm : ans){
        for(auto &s : perm){
            cout<<s;
        }
        cout<<endl;
    }
    
}
