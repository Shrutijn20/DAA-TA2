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
Application 1: <br> Suppose we want to add 35g of flour to bake a cake and we have measuring cups of 5g,10g and many more. So here we select different cups to add exactly the amount of sum we need.

    


![Screenshot (29)](https://user-images.githubusercontent.com/91418428/203607571-75d9fd8c-6459-4dd3-9f7a-ae1ae8785133.png)
    
<br><br>
Case 2:
<br><br>
Application 2: <br> Suppose we have to travel 100kms from cities to cities,so each city will have different distance so we can use this approch to obtain the total kms but travelling different cities .<br>
    

![Screenshot (34)](https://user-images.githubusercontent.com/91418428/203609573-fc29161b-1eb6-42e7-a504-ce6bd9879291.png)
    
 <br><br>
Case 3:
<br><br>
If we could not find the sum.<br>
    

    
![Screenshot (39)](https://user-images.githubusercontent.com/91418428/203610189-c82f3f33-c3ca-4196-b116-959ccb62a3ef.png)

