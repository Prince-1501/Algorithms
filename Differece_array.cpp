//
//  main.cpp
//  array
//
//  Created by Prince  Kumar on 19/08/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//    ALGORITHM --> DIFFERENCE ARRAY /  RANGE UPDATE QUERY

#include <iostream>
using namespace std;
int main()
{
    int a[] ={ 10,29, 25,30,15};
    // we want to upadte this array from index 1 to index 4 by 3 ;
    // by differnce array
    
    int d[6]={0};
    for(int i=0;i<6;i++)
    {
        if(i==0)
            d[i]=a[i];
        else
        {
            d[i]=a[i]-a[i-1];
        }
    }
    // we create the difference array
    
    int l =1;
    int r =4;
    int value = 3;
    
    d[l] = d[l]+value;
    d[r+1] = d[r+1] - value;
    
    // now query is updated
    // find the prefix sum array of difference array
    // thats the answer
    
//    for(int i=0;i<5;i++)
//    {
//        if(i==0)
//        {a[i]=d[i]; cout<<a[i]<<" ";}
//        else
//        {
//            a[i]=d[i]+d[i-1];
//            d[i]=d[i]+d[i-1];
//            cout<<a[i]<<" ";
//        }
//
//    }cout<<endl;
    
    // find the prefix sum array of difference array
    for(int i=0;i<5;i++)
    {
        if(i==0)
            d[i]=d[i];
        else
        {
            d[i]=d[i]+d[i-1];
        }
    }
    // the final is the, difference array
    
    // home - work
    // given array A[n]
    // update query for m times
    // given l[m]  r[m]   value[m]
    
}


