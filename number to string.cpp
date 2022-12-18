
#include <iostream>
using namespace std;


int main()
{
    int n;
    std::cout << "Enter one integer number:  " << std::endl;
    cin>>n;
    int a[n];
    char b[n];
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    for(int i=1;i<=n;i++){
        b[i]=a[i];
        cout << char (b[i]+64)<<b[i]+64<<"  ";
    }
    
}
