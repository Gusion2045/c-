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
    int v, g, h;
    v = 1;
    g = 7;
    h = 5;
    
    //cout<<v<<endl<<g<<endl<<h<<endl;
    
    //operatori de atribuire complecsi
    //+=, -=, *=, /=, %=
  //v=v*3
   // v*=3;
    //cout<<v<<endl;
    //g+=2;
    //cout<<g<<endl;
   //h-=6;
    //cout<<h<<endl;
    
    //operatori de incrementare/decrementare ++/--
    //v++;
    //g++;
    //cout<<v<<endl<<g<<endl;
    
    //v=++h;//v ia valoarea lui h,apoi h creste cu 1;
    //v=++h;//mai intai valoarea lui h creste cu 1,apoi v ia valoarea li h;
    //cout<<v<<endl<<h<<endl;
    
    //v=h--;//<=> v=h; h=h-1;
   // v=--h; //<=> h=h-1; v=h;
    //cout<<v<<endl<<h<<endl;
    
    //operatorul conditional ? => expresie ? val1 : val2
    //cout<<(v%2 == 0 ? "par" : "impar");
    
    //interschimbarea a 2 variabile
    //1: folosind o variabila auxiliara
    // cout<< g <<" "<<v<<endl;
    // int aux;
    //aux = g;
    //g = v;
    //v = aux;
    //cout << g <<" "<<v<<endl;
    
    
    
    //2: prin adunari si scaderi succesive
    ///cout << h <<" "<<v<<endl;
    //v = v+h;// v1 = suma
    //h = v-h;// v2=suma - v2
    //v = v-h;// v1 = suma - v2
    //cout << h <<" "<<v<<endl;
    
    /*if(expresie)
    ....
    else
    ...
    */
     
     /*if(h%2){
         cout<<"impar";
     }
     else{
         cout<<"par";
     }
    */
    
    //if(v)
    //cout<<"nenul";
    //else
   //cout<<"nul";
   
   /*if (v<h)               
   cout<<"v<h"<<endl;
   else
   cout<<"v>h"<<endl;
   
   if(v<g)
    cout<<"v<g"<<endl;
   else
    cout<<"v>g"<<endl;
   if(v=h)
    cout<<"v=h"<<endl;
   else
    cout<<"v /= h"<<endl;
    */
    
    
    if(v > g){
      if(h>v)
      cout<<"h este maximul ";
    else
        cout<<" v este maximul ";
        
    }
  else{
      if(h>g)
        cout<<"h este maximul";
    else
        cout<<"g este maximul";
  }  
    
    if((v>g)&&(h>v))
        cout<<"h ste maximul";
    if((v>g)&&!(h>v))
        cout<<"v este maximul";
    
    
    
    
    
    return 0;
}