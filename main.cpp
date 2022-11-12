/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
//  int n;
//  cout<<"n= ";
//  cin>>n;
//  //for(int i=1; i<= n;i++){
//      for(int j=1;j<=i;j++){
//         cout<<"*";
//          cout<<j;
     
        
        
    
//     cout<<endl;
    
//     int a=0;
    
//     for (int i=1;i<=n;i++){
//         for(int j=1; j<=i;j++){
//             cout<<a;
//             a=a+1;
//         }
//         cout<<endl;
//     }
    
 //int a, b ,c ,d, e;
// if(a==0)
// {
//     if(b==0){
//         if(c==0){
//             if(d==0){
//                 if(e==0){
//                     cout<<"Final!"
//                 }
//                 cout<<"s-a blocat la D";
//             }
//             cout<<"s-a blocat la  C";
//         }
//          cout<<"s-a blocat la  B";
//     }
//      cout<<"s-a blocat la  A";
// }
  
    // if(a!=0)
    // {
    //   cout<<"s-a blocat la  a";
    //   return;
    // }
    // if(b!=0)
    // {
    //   cout<<"s-a blocat la  b";
    //   return;
    // }
    // if(c!=0)
    // {
    //   cout<<"s-a blocat la  c";
    //   return;
    // }
    // if(e!=0)
    // {
    //   cout<<"s-a blocat la  d";
    //   return;
    // }
    // if(e!=0)
    // {
    //   cout<<"s-a blocat la  e";
    //   return;
    // }
    // cout<<"final";
    
    // int a, b, i;
    // cin>>a;
    // cin>>b;
    //  if(b<a){
    //      int aux;
    //      aux=a;
    //      a=b;
    //      b=aux;
    //  }
    // for(i=a;i<=b;i++){
    //     if(i%2==1){
            
    //       cout<< " " <<i; 
    //     }
    
    //  }
     
    // int n,s=0;
    // cout<<"n=";
    // cin>>n;
    // while(n!=0){
    //     s+=n%10;
    //     n/=10;
    // }
    // cout<<"Suma= "<<s;
    

// int cifra,intrus,n,nr_aparitii=0;
// cout<<"n= ";
// cin>>n;
// cout<<"Intrus = ";
// cin>>intrus;
// while(n!=0){
//     cifra=n%10;
//     if(cifra==intrus){
//         nr_aparitii++;
     
//     }
//     n/=10;
// }

//  cout<<nr_aparitii;

int n,max=-1;
cin>>n;
while(n!=0)
{
int c=n%10;
if(c>max)max=c;
n=n/10;
}
cout<<max;
return 0;

  return 0;

}
