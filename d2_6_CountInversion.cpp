#include <bits/stdc++.h> 
long long merge(long long arr[], int s,int mid, int e){
    long long count=0;
    int n1=mid-s+1;
    int n2=e-mid;
    
    long long a[n1], b[n2];
    
    for(int i=0;i<n1;i++){
        a[i]=arr[s+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=s;
    while(i<n1&&j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }else{
            arr[k]=b[j];
            count+=n1-i;
            j++;
            k++;
        }
    }
    
    while(i<n1){
        arr[k++]=a[i++];
    }
    
    while(j<n2){
        arr[k++]=b[j++];
    }
    return count;
}
long long mergesort(long long *arr,int s, int e){
    
    long long count=0;
    if(s<e){
    int mid=s+(e-s)/2;
    count+=mergesort(arr, s, mid);
    count+=mergesort(arr, mid+1, e);
    count+=merge(arr,s,mid, e);}
    return count;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
   
    return mergesort(arr, 0,n-1);
}


//https://www.codingninjas.com/codestudio/problems/615?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1
