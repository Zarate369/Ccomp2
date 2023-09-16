#include <iostream>
using namespace std;

int main()
{
    long num=33550336;
    long sum=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout << " " <<i;
            sum=sum+i;
        }
    }
    cout << "\n" <<sum - num;
}