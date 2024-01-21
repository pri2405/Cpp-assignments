#include<iostream>
#include<vector>
using namespace std;
void generateArrays(vector<int> &v1, vector<int> &v2, int i, int j, vector<int> &ans, bool isFromA){
    if(isFromA){
        for(int k=0; k<ans.size(); k++){
            cout<<ans[k]<<" ";
        }
        cout<<endl;
    }
    if(isFromA){
        for(int k=i; k<v1.size(); k++){
            if(ans.size()==0){
                ans.push_back(v1[k]);
                generateArrays(v1, v2, k+1, j, ans, !isFromA);
                ans.pop_back();
            }
            else{
                if(v1[k] > ans.back()){
                    ans.push_back(v1[k]); 
                    generateArrays(v1, v2, k+1, j, ans, !isFromA);
                    ans.pop_back();
                }
            }
        }
    }
    else{
        for(int k=j; k<v2.size(); k++){
            if(v2[k] > ans.back()){
                ans.push_back(v2[k]);
                generateArrays(v1, v2, i, k+1, ans, !isFromA);
                ans.pop_back();
            }
        }
    }
}
int main(){
    vector<int> v1 = {10, 15, 25};
    vector<int> v2 = {1, 5, 20, 30};
    vector<int> ans;
    generateArrays(v1, v2, 0, 0, ans, 1);

    return 0;

}