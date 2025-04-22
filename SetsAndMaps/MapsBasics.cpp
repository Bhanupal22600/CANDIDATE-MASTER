#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // map<key,value> m;
    unordered_map<string,int> m;// inbuilt class hai phele se in c++ jis class m string ,int do input hai
    pair<string,int> p1;//pair ek user defined datatype hai we can say a class  pair jisme string ,int two datatype honge
    p1.first ="bhanu";
    p1.second =76;
    m.insert(p1);
    pair<string,int> p2;
    p2.first ="Shashank";
    p2.second =6;
    m.insert(p2);
    pair<string,int> p3;
    p3.first ="Ashish";
    p3.second =61;
    m.insert(p3);
    for(pair<string,int> p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    for(auto p : m){// auto p khud peechan leta hai kon sa data type hai like above hm yelikhte the pair<string,int> for data type
        cout<<p.first<<" "<<p.second<<endl;
    }

    // INSERT KRNE KA EASY WAY->use this it is best to remember also less line it takes
    m["harsh"]=12;
    m["vivek"]=102;


    for(auto p : m){// auto khud hi recognize krleta hai kis type ki baat ho rhi hai 
        // here pair<string,int> datatype for some other case it is int
        cout<<p.first<<" "<<p.second<<endl;
    }

    // erase fun
    m.erase("Ashish");// always put key
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    // size func
    cout<<m.size()<<endl;

    // value through key
    cout<<m["bhanu"]<<endl;

}
// everything in map,set is O(1)