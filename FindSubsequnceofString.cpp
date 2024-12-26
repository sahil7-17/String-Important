using namespace std;
void  solve(int idx , vector<string>&ds , string &str, int n){
    if(idx == n){
        for(auto it : ds){
            cout<<it<<" ";
        }
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    
    string temp(1,str[idx]);  //convert character to string 

    ds.push_back(temp);      //take it 

    solve(idx+1,ds,str,n);   //Recurese to the next idx

    ds.pop_back();          //Backtrack

    solve(idx+1,ds,str,n);   //Recurse without including the next character 
    

}
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<string>ds;
    solve(0,ds,str,n);
}
