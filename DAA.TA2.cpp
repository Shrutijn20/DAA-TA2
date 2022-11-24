#include <bits/stdc++.h>
#include <iostream>
#define mod 10000007
using namespace std;
#define ull unsigned long long int
#define ll long long

bool** dp; 
  
void display(const vector<int>& v) 
{ 
    for (int i = 0; i < v.size(); ++i) 
        cout << v[i] << " " ;
        cout << endl;
} 
  
void printSubsetsRec(int arr[], int i, int sum, vector<int>& p) 
{ 

    if (i == 0 && sum != 0 && dp[0][sum]) 
    { 
        p.push_back(arr[i]); 
        display(p); 
        return; 
    } 
  
    if (i == 0 && sum == 0) 
    { 
        display(p); 
        return; 
    } 
  
    if (dp[i-1][sum]) 
    { 
        vector<int> b = p; 
        printSubsetsRec(arr, i-1, sum, b); 
    } 
 
    if (sum >= arr[i] && dp[i-1][sum-arr[i]]) 
    { 
        p.push_back(arr[i]); 
        printSubsetsRec(arr, i-1, sum-arr[i], p); 
    } 
} 
  
void printAllSubsets(int arr[], int n, int sum) 
{ 
    if (n == 0 || sum < 0) 
       return; 
  
    dp = new bool*[n]; 
    for (int i=0; i<n; ++i) 
    { 
        dp[i] = new bool[sum + 1]; 
        dp[i][0] = true; 
    } 
  
    if (arr[0] <= sum) 
       dp[0][arr[0]] = true; 
  
    for (int i = 1; i < n; ++i) 
        for (int j = 0; j < sum + 1; ++j) 
            dp[i][j] = (arr[i] <= j) ? dp[i-1][j] || dp[i-1][j-arr[i]] : dp[i - 1][j]; 
    if (dp[n-1][sum] == false) 
    { 
        printf("There are no subsets with sum %d", sum); 
        return; 
    } 
  
    vector<int> p; 
    printSubsetsRec(arr, n-1, sum, p); 
} 
  
  
int main() 
{ 
    int arr[] = {5,10,15}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 20; 
    
    cout << "The given input Array is: " << endl;
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    
    cout << "The sum is: " << sum << endl << endl;
    cout << "The possible outcomes are: " << endl;
    printAllSubsets(arr, n, sum); 
    return 0; 
}
