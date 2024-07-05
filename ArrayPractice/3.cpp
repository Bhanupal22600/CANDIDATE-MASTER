#include<iostream>
#include<vector>
using namespace std;
void sort4(vector <int> &nums){
              int n=nums.size();
        int i=0;
        int j=n-1;
while(i<j){
    if(nums[i]<2) i++;
    if(nums[j]==2) j--;
    else if(nums[i]==2 && nums[j]<2){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
    }
}


int count=0;
for(int y=0;y<n;y++){
    if(nums[y]==0){
        count++;
    }
}

int k=0;
int l=n-1-count;
while(k<l){
    if(nums[k]<1) k++;
    if(nums[l]==1) l--;
    else if(nums[k]==1 && nums[l]<1){
        int temp=nums[k];
        nums[k]=nums[l];
        nums[l]=temp;
        i++;
        j--;
    }
}
cout<<"[";
for(int m=0;m<n;m++){
    cout<<nums[m];
    if(m<n-1) cout<<",";
}
cout<<"]";

}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(0);
    
    
    
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
   cout<<endl;
   sort4(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
   

}