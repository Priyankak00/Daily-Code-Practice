#include <iostream>
using namespace std;
int main() {
    int first_num,sec_num;
    cin>>first_num>>sec_num;
    int res = first_num>sec_num?first_num:sec_num;
    cout<<"Greatest of two numbers is: "<<res<<endl;
    return 0;
}
