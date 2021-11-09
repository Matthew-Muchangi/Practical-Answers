#include <iostream>
using namespace std;

int main(){
int tax,net;
tax=10000*25/100;
net=10000-tax;
cout<<"\n Amount after Tax Deduction:"<<net;
cout<<"\n Amount going to the government:"<<tax;
return 0;
}
