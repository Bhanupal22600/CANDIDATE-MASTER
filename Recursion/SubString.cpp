#include<vector>
#include<iostream>
using namespace std;
void printSubset1(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch= original[0];
    printSubset1(ans+ch,original.substr(1));//substr is in built func give 
    printSubset1(ans,original.substr(1));
}
void printSubset2(string ans, string original,vector<string>& v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch= original[0];
    printSubset2(ans+ch,original.substr(1),v);
    printSubset2(ans,original.substr(1),v);
}
int main(){
    string str="abc";
    printSubset1("",str);
    vector<string> v;
    printSubset2("",str,v);
    for(string ele: v){// bas string vector m strore kara tha
        cout<<ele<<endl;
    }
}
/*Recursion tree looks like eg, 
                                        ""/"abc"
                        "a"/"bc"                            ""/"bc"
                "ab"/"c"    "a"/"c"                 "b"/"c"          ""/"c"
"abc"/""    "ab"/""     "ac"/""     "a"/""      "bc"/""     "b"/""  "c"/""  ""/""

this is 8 cases that recursion tress gives for string abc
in this hm bas har step m string ka phala element le rhe aur use do step m ek m dal rhe hai us phele element ko aur ek m nhi in aur vacant  string("")
e.g in step one we pick a and in left side we put a in our vacant string and right side we dont similiarly for b,c


*/
