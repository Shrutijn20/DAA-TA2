<h1> DAA - TA2 </h1>

Name: Shruti Jain <br>
Roll No.: 24 <br>
Semester: 5th <br>
Section: A <br>
<hr>

<h3>Problem Statement: <h3>

<u>Implement: Sum of Subset problem using Dynamic Programming approach and demonstrate any two applications in the form of test cases.</u>
<hr>
  
  <Approach:>
 
In this approach, we will make a 2D array of size equal to (size of array + 1) * (target sum + 1) of boolean type. The state dp[i][j] will be true if there is a subset of elements from A[0….i] with a sum value equal to j.
<br>

<hr>    

Algorithm: <br>
    
if (A[i-1] > j)<br>
dp[i][j] = dp[i-1][j]<br>
else <br>
dp[i][j] = dp[i-1][j] or dp[i-1][j-A[i-1]]<br>

<hr>
 
Time Comlexity: O(n) 
<hr>
   It is an NP-hard problem

<hr>
  
Application and it's test cases:
<br><br>
Case 1:
<br><br>
Application 1: <br> 
    Problem: Need to buy 35g of flour but don't have exact quantity measuring tool.
So we want to buy 35g of flour to bake a cake it can be done by measuring cups of different size like 5g,10g,15g and 20g. So here we select different cups to add exactly the amount we need.So it can be done in many ways like [5,10,20],[15,20] and many more ways.<br>
So in the subset problem 35 will be given as the sum required and the array will have the size of the measuring cups. The result will be the cups used to get the amount required.

    


![Screenshot (29)](https://user-images.githubusercontent.com/91418428/203607571-75d9fd8c-6459-4dd3-9f7a-ae1ae8785133.png)
    
<br><br>
Case 2:
<br><br>
Application 2: <br>
Traviling a distance from one city to another by using distances of the cities coming in between them. 
Suppose we have to travel 300kms from Nagpur to Hyderabad,so there are many different ways to reach the destination.Given the array of distance between different cities [20,50,100,150,200] so one can reach the destination by many ways like by selecting [50,100,150] or [100,200] and many more ways.
<br>
    

![Screenshot (34)](https://user-images.githubusercontent.com/91418428/203609573-fc29161b-1eb6-42e7-a504-ce6bd9879291.png)
    
 <br><br>
Case 3:
<br><br>
If we could not find the sum.<br>
    

    
![Screenshot (39)](https://user-images.githubusercontent.com/91418428/203610189-c82f3f33-c3ca-4196-b116-959ccb62a3ef.png)

