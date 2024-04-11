<h2><a href="https://www.geeksforgeeks.org/problems/beautiful-sequence4203/1?page=1&category=sieve&status=unsolved&sortBy=difficulty">Beautiful Sequence</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">A beautiful sequence is a strictly&nbsp;increasing sequence, in which the&nbsp;term A<sub>i</sub> divides all A<sub>j</sub>, where j&gt;i. Given N find a beautiful sequence whose last term is N and the length of the sequence is the maximum possible. If there are multiple solutions return any.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 10
<strong>Output: </strong>1 5 10
<strong>Explanation: </strong>10 is divisible by
1 and 5, 5 is divisible by 1.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 3
<strong>Output: </strong>1 3
<strong>Explanation: </strong>3 is divisible by 1.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>FindSequenece()&nbsp;</strong>which takes N as an input parameter and returns a list of beautiful sequences. The driver will print two space-separated integers the length of the sequence and an integer x where x = 1 if your sequence is beautiful otherwise x = 0.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(sqrt(N))<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(sqrt(N))</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 <u>&lt;</u>&nbsp;N <u>&lt;</u>&nbsp;10<sup>9</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>number-theory</code>&nbsp;<code>sieve</code>&nbsp;