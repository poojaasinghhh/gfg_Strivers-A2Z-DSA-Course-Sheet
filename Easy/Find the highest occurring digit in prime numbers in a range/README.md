<h2><a href="https://www.geeksforgeeks.org/problems/find-the-highest-occurring-digit-in-prime-numbers-in-a-range3634/1?page=1&category=sieve&status=unsolved&sortBy=difficulty">Find the highest occurring digit in prime numbers in a range</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a range&nbsp;L&nbsp;to&nbsp;R, the task is to find the highest occurring digit in prime numbers which lie between L and R (both inclusive). If multiple digits have same highest frequency return&nbsp;the largest of them. If no prime number occurs between L and R, return&nbsp;-1.</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: L = 2, R = 10
<strong>Output:</strong>&nbsp;7
<strong>Explanation</strong>: Between 2 and 10 every digit
has same frquency and 7 is largest among
them.</span></pre>
<p><span style="font-size: 18px;"><span style="font-size: 18px;"><strong>Example 2:</strong></span></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>L = 2, R = 20
<strong>Output:&nbsp;</strong>1
<strong>Explanation</strong>: Prime number between 2 and 20 are 
2, 3, 5, 7, 11, 13, 17, 19. 1 occur 
maximum i.e 4 times among 0 to 9.</span></pre>
<p><br><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You dont need to read input or print anything. Complete the function <strong>maxDigit()&nbsp;</strong>which takes L&nbsp;and R&nbsp;as input parameter and returns the highest occuring digit. If multiple digits have same highest frequency return&nbsp;the largest of them. If no prime number occurs between L and R, return&nbsp;-1.<br><br><strong>Expected Time Complexity:</strong> O(nlog(n)sqrt(n))<br><strong>Expected Auxiliary Space:</strong> O(k)<br><br><strong>Constraints:</strong><br>1 &lt;= L&lt;= R &lt;= 1000</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Walmart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Prime Number</code>&nbsp;<code>sieve</code>&nbsp;