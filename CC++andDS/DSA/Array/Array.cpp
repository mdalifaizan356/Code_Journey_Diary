// /* 
//     Array is a linear collection of similar elements
//     Array is also known as subscript variabla
//     Array is a group of variable
// */

#include<bits/stdc++.h>
using namespace std;
int main(){

    // int a[]={1,2,3,4,5,6,7,8,9};
    // cout<<a[0]<<"\n";                           // Print particular value form the array
    // cout<<sizeof(a)<<"\n";                     // Print size of whole aray
    // cout<<sizeof(a[0])<<"\n";                 // Print size of 1 block of the array
    // int length= sizeof(a)/sizeof(a[0]);
    // cout<<length;                            // Print number of elements


    // int a[10];                             //If value does not initialize than store automatically garbage value 
    // cout<<a[0]<<"\n";

    // int a[4]={1,2};                      //Partial initialization 
    // int i;
    // for(i=0; i<4; i++){
    //     cout<<a[i];
    // }


	// int a[]{1,2,3,4,5,6};                //Uniform initialization
    // for(int i=0; i<6; i++){
    //     cout<<a[i];
    // }

    // array<int,5> a={11,22,33,44,55};       //Initialization using STL library
    // for(int i=0; i<5; i++){
    //     cout<<a[i]<<"\t";
    // }

	// int totalElements, i, n;                   //Array element initialize by Userinput
	// cout<<"Enter total numbers of elements";
	// cin>>totalElements;
	// int a[totalElements];
	// cout<<"Enter"<<totalElements<<"Element";
	// for(i=1; i<=totalElements; i++){
	// 	cin>>a[i];
	// }
	// for(int i=1; i<=totalElements; i++){
	// 	cout<<a[i]<<" ";
	// }

    string names;
	char chararray[]={'G','O','O','g','l','e','G','\0'};    //Character Array
	int n = (sizeof(names)/sizeof(names[0]));
	cout<<n<<"\n"<<chararray;

    for(int i=0;i<3;i++){
		cout<<chararray[i]<<" "; 
	}
	for(auto it:names)
	{
		cout<<it<<" ";
	}



    return 0;
 }