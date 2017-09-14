// paula hernandez
#include<iostream> 
#include<string>
#include<stdio.h>  


using namespace std; 

int main(){
     string palabra1="a";
     string palabra2="b";
     int tope1 = 2;
     int aumento = 2;
     string variable;
     string alfabeto[100000]; 
     alfabeto[0]=palabra1;
     alfabeto[1]=palabra2;
     int i=1;
     int j=0;
     
     for(i;i<3;i++){
         int k=0;
         while(k<tope1){
           variable = alfabeto[k];
           alfabeto[aumento]=variable + palabra1;
           aumento = aumento +1;
           alfabeto[aumento]=variable + palabra2;
           aumento = aumento +1;
           k=k+1;
         }            
          tope1 = aumento ;                       
     }
    
     cout<<"vacio ($)"<<endl;
     for(j;j<=aumento;j++){
             cout<<alfabeto[j]<<endl;
             }
             
     cout<<j;
     
     
        
        system("pause");
        return 0;
}

