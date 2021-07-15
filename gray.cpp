#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<int> v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << ", ";
   }
   cout << "]"<<endl;
}
class Solution {
public:
   vector<int> grayCode(int n) {
      vector <int> ans;
      for(int i =0; i<1<<n; i++){
         ans.push_back(i^(i>>1));
      }
      return ans;
   }
};
main(){
   Solution ob;
   print_vector(ob.grayCode(4));
}
