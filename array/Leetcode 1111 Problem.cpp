class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        // because ans me array manga hai
        vector<int> ans;
         
        // starting me depth zero hoga
        int depth = 0;

         // seq par traverse karne ke liye
        for( char ch: seq){
                 
        // agar character closing bracket hoga tb depth++ and ans me odd chek krke push
        if( ch == '(' ){
            depth++;
            ans.push_back(depth%2);
            }

        else if( ch == ')' ){
            // because if ) bracket aa gya to to ye dept 2 wale ko close kr dega 
            // fir depth ko minus krna pdega dep-- ;
            ans.push_back( depth % 2 );
            depth--;
        }
      }
      return ans;
    }
};