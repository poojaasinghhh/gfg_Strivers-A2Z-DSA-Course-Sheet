<h2><a href="https://www.geeksforgeeks.org/problems/ordered-prime-signature3247/1?page=1&category=sieve&status=unsolved&sortBy=difficulty">Ordered Prime Signature</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a number <strong>n</strong>, find the ordered prime signatures and&nbsp;find the number of divisor of&nbsp;<strong>n</strong>.Any positive integer, ‘n’ can be expressed in the form of its prime factors. If ‘n’ has p<sub>1</sub>, p<sub>2</sub>, &nbsp;etc. as its prime factors, then n can be expressed as :<br>
<img alt="n = {p_1}^{e1} * {p_2}^{e2} * ..." src="https://www.geeksforgeeks.org/wp-content/ql-cache/quicklatex.com-bd76dd88135372d3da515ba860151eaf_l3.svg" style="height:29px; width:212px" title="Rendered by QuickLaTeX.com"><br>
Arrange the obtained exponents of the prime factors of ‘n’ in non-decreasing order. The arrangement thus obtained is called the&nbsp;<strong>ordered prime signature</strong>&nbsp;of the positive integer ‘n’.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> n = 20
<strong>Output:</strong> 1 2
        6
<strong>Explaination:</strong> 20 can be written as 2<sup>2</sup> * 5. The 
ordered pair is 2 1 and the factors are 1, 2, 4, 
5, 10, 20.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> n = 13
<strong>Output:</strong> 1
        2
<strong>Explaination:</strong> 13 itself is a prime number 
and it has two factors 1 and 13.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>orderedPrime()</strong> which takes n as input parameter and returns a list containing the powers in non-decreasing manner and the number of factors at the end of the list. The driver code will itself print the number of factors (last element of the returned list) in a new line.</span></p>

<p><span style="font-size:18px"><strong>Expected Time&nbsp;Complexity:</strong> O(nsqrt(n))<br>
<strong>Expected Auxiliary Space:</strong> O(n)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 ≤ n ≤ 10<sup>6</sup>&nbsp;&nbsp;</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Prime Number</code>&nbsp;<code>sieve</code>&nbsp;<code>STL</code>&nbsp;<code>Algorithms</code>&nbsp;