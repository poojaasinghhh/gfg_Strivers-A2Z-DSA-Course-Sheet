<h2><a href="https://www.geeksforgeeks.org/problems/xor-linked-list/1?page=1&category=Linked%20List&status=unsolved&sortBy=difficulty">XOR Linked List</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">An ordinary Doubly Linked List requires space for two address fields to store the addresses of previous and next nodes.&nbsp;A memory efficient version of Doubly Linked List can be created using only one space for address field with every node. This memory efficient Doubly Linked List is called XOR Linked List or Memory Efficient as the list uses bit-wise XOR operation to save space for one address.<br>Given stream of data of size <strong>N </strong>for the linked list, your task is to complete the function <strong>insert()&nbsp;</strong>and&nbsp;<strong>printList(). </strong>The <strong>insert()</strong> function pushes (or inserts at beginning) the given data in the linked list and the <strong>printList()</strong> function returns the linked list as a list.<br><strong>Note:</strong> There is an utility function XOR() that takes two Node pointer to get the bit-wise XOR of the two Node pointer. Use this function to get the XOR of the two pointers. </span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>LinkedList: 9&lt;-&gt;5&lt;-&gt;4&lt;-&gt;7&lt;-&gt;3&lt;-&gt;10
<strong>Output:
</strong>10 3 7 4 5 9
9 5 4 7 3 10</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>LinkedList: 58&lt;-&gt;96&lt;-&gt;31
<strong>Output:
</strong>31 96 58
58 96 31</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your&nbsp;Task:</strong><br>The task is to complete the function <strong>insert</strong>() and <strong>printList</strong>() as required.</span></p>
<p><strong><span style="font-size: 18px;">Note:&nbsp;</span></strong><span style="font-size: 18px;">The driver code prints the returned list twice, once forward and once backward.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 100</span></p>
<p>&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>GE</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>doubly-linked-list</code>&nbsp;<code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;