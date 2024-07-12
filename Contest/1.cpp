#include<iostream>
using namespace std;
int calc(int a,int b,int c){
 int max = 0;

    int max1 = (a + 5) * b * c;
    if (max1 > max) max = max1;

    int max2 = (a) * (b + 5) * c;
    if (max2 > max) max = max2;

    int max3 = (a) * b * (c + 5);
    if (max3 > max) max = max3;

    int max4 = (a + 4) * (b + 1) * c;
    if (max4 > max) max = max4;

    int max5 = (a + 4) * (b) * (c + 1);
    if (max5 > max) max = max5;

    int max6 = (a) * (b + 4) * (c + 1);
    if (max6 > max) max = max6;

    int max7 = (a + 1) * (b + 4) * c;
    if (max7 > max) max = max7;

    int max8 = (a + 1) * b * (c + 4);
    if (max8 > max) max = max8;

    int max9 = (a) * (b + 1) * (c + 4);
    if (max9 > max) max = max9;

    int max10 = (a + 3) * (b + 2) * c;
    if (max10 > max) max = max10;

    int max11 = (a + 3) * b * (c + 2);
    if (max11 > max) max = max11;

    int max12 = (a) * (b + 3) * (c + 2);
    if (max12 > max) max = max12;

    int max13 = (a + 2) * (b + 3) * c;
    if (max13 > max) max = max13;

    int max14 = (a + 2) * b * (c + 3);
    if (max14 > max) max = max14;

    int max15 = (a) * (b + 2) * (c + 3);
    if (max15 > max) max = max15;

    int max16 = (a + 3) * (b + 1) * (c + 1);
    if (max16 > max) max = max16;

    int max17 = (a + 1) * (b + 3) * (c + 1);
    if (max17 > max) max = max17;

    int max18 = (a + 1) * (b + 1) * (c + 3);
    if (max18 > max) max = max18;

    int max19 = (a + 1) * (b + 2) * (c + 2);
    if (max19 > max) max = max19;

    int max20 = (a + 2) * (b + 1) * (c + 2);
    if (max20 > max) max = max20;

    int max21 = (a + 2) * (b + 2) * (c + 1);
    if (max21 > max) max = max21;

    return max;

}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<calc(a,b,c)<<endl;
    }
}