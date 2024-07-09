#include<iostream>
#include<vector>
using namespace std;

void change2DVector(vector< vector<int> > &v){//in 2d vecor we dont need to pass the size
    v[0][1]=100;
}

void length(vector< vector<int> > &v){
    cout<<v.size();
}


void print2DVector(const vector<vector<int>>& v) {
    for (const auto& row : v) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}
int main(){
    //int arr[3][4]
    vector< vector<int> > v; // this is arrays of array
    //2D array is not dynamic after initiliazation we cant change its size but in vector<vector> we do so
    //also in 2D vector we can also have different column in each row eg in row 1 we can 1 column and 2 we have 2 etc;
    //means inside a vector we have different size of vector eg below.
    vector< int > v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector< int > v2;
    v2.push_back(4);
    v2.push_back(5);
    
    vector< int > v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

   //we cant directly pushback an integer but we can pushback 1D vector in  2D vector ,as initilization of
   // 2D vector we have vector<int> inside vector so this means in a vector we have vectors of type int
    v.push_back(v1);// gives no of column or element in v1 
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0].size()<<endl;
    cout<<v[1].size()<<endl;
    cout<<v[2].size()<<endl;

    //cout<<v[0][3];//invalid
    cout<<v[0][2]<<" ";
    change2DVector(v);
    cout<<v[0][1]<<" ";
    length(v);
    cout<<endl;

    //vector<int> v(5,2);
    //  cout<<v[0]<<" ";
    //  cout<<v[1]<<" ";
    //  cout<<v[2]<<" ";
    //  cout<<v[3]<<" ";
    //  cout<<v[4]<<" ";

    //like 1 d vector we have
    //int arr[3][4];
    vector< vector<int> > vec(3,vector<int> (4,2));//2 2 2 2 2 2 2 2 2 2 2 2 # here 3 is no of rows in 2d vector with each row having four 2.
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    cout<<vec.size()<<endl;//no of row
    cout<<vec[0].size();//no of column in a vector
     

    // more representation.
    int m=3;
     vector< vector<int> > vec2(m);//m is initilization of size which rpst no of rows in 2d vector
    int k=4,n=2;
     vector < vector<int> > vec3(m, vector<int> (n,k));



   //Basic STL func in vectors
   //push_back()
   //pop_back()
   //begin()
   //end()
   //rbegin()
   //rend()

    vector<vector<int>> vrr = {{1, 2, 3}, {4, 5}};
    vector<int> a = {6, 7, 8, 9, 10};
    vrr.push_back(a);
    
    cout << "After pushing back:" << endl;
    print2DVector(vrr);

    vrr.pop_back();
    
    cout << "After popping back:" << endl;
    print2DVector(vrr);// last row remove

}