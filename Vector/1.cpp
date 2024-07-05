#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector is an dynamic array . there is a drawback of array
    // which is we cant change the size of the same array by increasing elements to it so we need vector
    vector<int> v;//you need not mention the size # here you declared a vector with 0 size 
    int arr[5];
    
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(6);//pushback means hmne vector m kuch dala and now its size change to 1 ,capacity=1
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(1);//ab capacity full hai so now vector double its capacity to 2 and ab hm 1 element dalenge esme now size become 2
    //#we cant do v[1]=1;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(9);//now also capacity of vector is full ie 2 so vector double its previous cpacity 2 to 4 now after pushback 9 vector size become 3 
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(0);//as capacity is 4 and we occupied 3 so now vector dont double its capacity we can directly push back 0 in it after pushback size become 4
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    

}