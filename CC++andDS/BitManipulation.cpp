// // Decimal To Binary
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int usernum,num,rem,bin=0,base=1;
//     cout<<"Enter Decimal Number ";
//     cin>>usernum;
//     num=usernum;
//     while(num){
//         rem=num%2;
//         bin=bin+rem*base;
//         num=num/2;
//         base=base*10;
//     }
//     cout<<"Binery of "<<usernum<<" is "<<bin;
//     return 0;
// }


// Decimal To Binary
#include<bits/stdc++.h>
using namespace std;
int main(){
    int usernum;
    cout<<"Enter Number ";
    cin>>usernum;
    cout<<usernum%2;
    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;
// void printbinary(int n)
// {
// 	for(int i=32;i>=0;i--)
// 	{
// 		cout<<((n>>i)&1);
// 	}
// 	cout<<"\n";
// }
// int main(){
// 	int n;
// 	cin>>n;//check whether of power of 2
// 	printbinary(5);
// 	printbinary(5-1);
//     return 0;
// }