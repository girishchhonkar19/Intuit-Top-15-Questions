<h2><a href="https://leetcode.com/problems/find-in-mountain-array/">1095. Find in Mountain Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;"><em style="user-select: auto;">(This problem is an <strong style="user-select: auto;">interactive problem</strong>.)</em></p>

<p style="user-select: auto;">You may recall that an array <code style="user-select: auto;">arr</code> is a <strong style="user-select: auto;">mountain array</strong> if and only if:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">arr.length &gt;= 3</code></li>
	<li style="user-select: auto;">There exists some <code style="user-select: auto;">i</code> with <code style="user-select: auto;">0 &lt; i &lt; arr.length - 1</code> such that:
	<ul style="user-select: auto;">
		<li style="user-select: auto;"><code style="user-select: auto;">arr[0] &lt; arr[1] &lt; ... &lt; arr[i - 1] &lt; arr[i]</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">arr[i] &gt; arr[i + 1] &gt; ... &gt; arr[arr.length - 1]</code></li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">Given a mountain array <code style="user-select: auto;">mountainArr</code>, return the <strong style="user-select: auto;">minimum</strong> <code style="user-select: auto;">index</code> such that <code style="user-select: auto;">mountainArr.get(index) == target</code>. If such an <code style="user-select: auto;">index</code> does not exist, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">You cannot access the mountain array directly.</strong> You may only access the array using a <code style="user-select: auto;">MountainArray</code> interface:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">MountainArray.get(k)</code> returns the element of the array at index <code style="user-select: auto;">k</code> (0-indexed).</li>
	<li style="user-select: auto;"><code style="user-select: auto;">MountainArray.length()</code> returns the length of the array.</li>
</ul>

<p style="user-select: auto;">Submissions making more than <code style="user-select: auto;">100</code> calls to <code style="user-select: auto;">MountainArray.get</code> will be judged <em style="user-select: auto;">Wrong Answer</em>. Also, any solutions that attempt to circumvent the judge will result in disqualification.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> array = [1,2,3,4,5,3,1], target = 3
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> 3 exists in the array, at index=2 and index=5. Return the minimum index, which is 2.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> array = [0,1,2,4,2,1], target = 3
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> 3 does not exist in <code style="user-select: auto;">the array,</code> so we return -1.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= mountain_arr.length() &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= target &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= mountain_arr.get(index) &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>