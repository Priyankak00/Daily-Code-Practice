#include <iostream>
using namespace std;
int main() {
    int l,u;
    cin>>l>>u;
    int sum=0;
    for(int i=l;i<=u;i++){
        sum+=i;
    }
    cout<<"Sum of numbers in range: "<<l<<" to "<<u<<" is "<<sum<<endl;
    return 0;
}
