<h2><a href="https://www.geeksforgeeks.org/problems/modified-numbers-and-queries0904/1?page=1&category=sieve&status=unsolved&sortBy=difficulty">Modified Numbers and Queries</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Find the sum of all the numbers between the range l&nbsp;and r.&nbsp;Here each number is represented by the sum of its distinct prime factors.&nbsp;<br>
<strong>Note: </strong>For example, 6 is represented by 5 because 6 has two prime factors 2 and 3 and 2 + 3 = 5.<br>
<br>
<strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: l = 1, r = 2
<strong>Output:</strong>&nbsp;2
<strong>Explanation</strong>: 1-&gt;0, 2-&gt;2 and 0+2=2.
1 has no prime factors.
</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>l = 1, r = 6
<strong>Output:&nbsp;</strong>17
<strong>Explanation</strong>: 1-&gt;0, 2-&gt;2, 3-&gt;3, 4-&gt;2
5-&gt;5, 6-&gt;2+3=5, 0+2+3+2+5+5 = 17. </span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>sumOfAll()&nbsp;</strong>which takes l&nbsp;and r&nbsp;as input parameter and returns sum all the numbers ( as represented&nbsp;) in the given range both L and R included.<br>
<br>
<strong>Expected Time Complexity:</strong> O(nloglogn)<br>
<strong>Expected Auxiliary Space:</strong> O(n)<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= l&nbsp;&lt;= r&nbsp;&lt;=10<sup>4</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>sieve</code>&nbsp;<code>Algorithms</code>&nbsp;