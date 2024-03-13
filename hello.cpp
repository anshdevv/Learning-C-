#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int recur_add(int a, int b)
{
    // int sum=0;
    if (a > 15)
    {
        return a + b;
    }

    cout << a << endl;

    return recur_add(a + b, b);
}

int main()
{
    cout << "hello world" << endl;
    cout << "next line" << endl;

    // to concat a string with a variable you can write
    // cout<<"string"<<variable name
    // const will not change the val
    // const a=50

    // taking user input

    // int a, b;
    // cout<<"enter num"<<endl;
    // cin>>a;
    // cout<<"enter sec"<<endl;
    // cin>>b;
    // cout<<a+b  <<endl;

    // if-else same as java

    // switch also same as java
    //    switch (expression)
    //    {
    //    case /* constant-expression */:
    //     /* code */
    //     break;

    //    default:
    //     break;
    //    }

    // loop
    // for while do while all same as java

    // functions
    // cout <<add(5,6)<<endl;

    // cout<< recur_add(1,2);
    // 1d array
    int arr[3] = {1, 2, 3};
    // here arr is the name of the array

    //2d array 
    //aa[col][row]
    // int aa[2][3]=
    // {{1,2,3},
    // {1,2,3}}
    // ;
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<aa[i][j];

    //     }
    //     cout<<endl;
    // }

    //to use String functions such as length or substring wirte #include<String> 

    //pointers 

    int a=3;
    int* pointer ;
    pointer=&a;
    cout<<*pointer;

    //  classes 

    




    return 0;
}
