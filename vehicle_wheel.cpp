/* Problem Statement – An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:
1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
2nd data, Total number of wheels = W
The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data. */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int v, w;
    cin>>v>>w;

    int x = ((4*v) - w)/2;

    if(w<2 || w<=v) cout<<"Invalid Input!";

    else cout<<"Two wheelers = " << x << " " << "Four wheelers = " << v-x;
}