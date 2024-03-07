<h2><a href="https://www.geeksforgeeks.org/problems/k-th-missing-element3635/1">K-th missing element</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Geek wanted to construct a simple sequence of <strong>n</strong> integers, [1, 2, 3, ... n].<br>Given an increasing sequence <strong>a[]</strong>, we need to find the K-th smallest missing element in the increasing sequence. If no k-th missing element is there, output -1.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[ ] = {1, 3, 4, 5, 7} and K = 2
<strong>Output :</strong> 6
<strong>Explanation:</strong>
K = 2, We need to find the 2nd missing 
number in the array. Missing numbers are 
2 and 6. So 2nd missing number is 6.
</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong> arr[ ] = {1, 2, 3, 4, 5, 6} and K = 1<strong>
Output :</strong>  -1 </span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>KthMissingElement()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, an integer <strong>K</strong> and return the K<sup>th</sup> missing number if present&nbsp;otherwise returns&nbsp;<strong>-1</strong>. The driver code takes care of the printing.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(log(N)).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N, K, A[i] ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Facebook</code>&nbsp;<code>Apple</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;