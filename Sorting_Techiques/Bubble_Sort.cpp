#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
 for(int i=n-1; i>=1; i--){
     bool didswap=false;
     for(int j=0; j<i; j++){
         if(arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);
             didswap=1;
         }

     }
     if(!didswap){
         break;
     }
 }
}
