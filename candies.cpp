/*There is a JAR full of candies for sale at a mall counter. JAR has the capacity N, that is JAR can contain maximum N candies when JAR is full. At any point of time. JAR can have M number of Candies where M<=N. Candies are served to the customers. JAR is never remain empty as when last k candies are left. JAR if refilled with new candies in such a way that JAR get full.
Write a code to implement above scenario. Display JAR at counter with available number of candies. Input should be the number of candies one customer can order at point of time. Update the JAR after each purchase and display JAR at Counter.

Output should give number of Candies sold and updated number of Candies in JAR.

If Input is more than candies in JAR, return: “INVALID INPUT”
Given,
N=10, where N is NUMBER OF CANDIES AVAILABLE
K =< 5, where k is number of minimum candies that must be inside JAR ever.*/


#include <bits/stdc++.h>
using namespace std;

int counter(int ordered){
    int max_candies = 10;
    int min_candies = 5;

    if(ordered < min_candies && ordered > 1){
        cout<<"Number of candies sold: "<<ordered<<endl;
        cout<<"Number of candies available: "<<max_candies-ordered;
    }
    else{
        cout<<"Invalid Input!"<<endl;
        cout<<"Number of candies left: "<<max_candies;
    }
}

int main(){
    int ordered;
    cin>>ordered;

    counter(ordered);
}