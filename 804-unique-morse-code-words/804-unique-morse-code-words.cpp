class Solution {
public:
   int uniqueMorseRepresentations(vector<string>& words) {
        string mapp [ 26 ] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."} ; 

    map < string , int > m ; 
    for( int i = 0 ; i < words.size( ) ; i ++ ) { 
        string rep = words [ i ] ; 
        string k = "" ; 
        for ( int j = 0 ; j < rep.length( ) ; j ++   ){
             string newstr = mapp [ rep [ j ] - 'a' ] ; 
             k+=newstr ; 
        }
        m[k]++ ; 
    }
    int cnt = 0 ; 
    for (auto itr : m ){ 
        cnt ++ ; 
    }
    
    
    
    return cnt  ;
    } 
};