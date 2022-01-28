# COVID19
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given the <strong style="user-select: auto;">N*M</strong> binary matrix, <strong style="user-select: auto;">1</strong> represents the healthy person, and <strong style="user-select: auto;">0</strong> represents a patient affected by a coronavirus. The task is to check the minimum time required for </span><span style="font-size: 18px; user-select: auto;">all persons to get affected. A patient at <strong style="user-select: auto;">[i, j]</strong> cell affects a person at cell <strong style="user-select: auto;">[i, j-1], [i, j+1] [i+1, j]</strong> and <strong style="user-select: auto;">[i-1, j]</strong> in one second. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> There will be at least one patient </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong><br style="user-select: auto;">
1. The first line of the input contains a single integer<em style="user-select: auto;"> </em> <strong style="user-select: auto;">T</strong> denoting the number of test cases. The description of&nbsp;<strong style="user-select: auto;">T</strong> test cases follows.<br style="user-select: auto;">
2. The first line of each test case contains two space-separated integers<strong style="user-select: auto;"> N </strong>and<strong style="user-select: auto;"> M</strong><strong style="user-select: auto;">.</strong><br style="user-select: auto;">
3. Next <strong style="user-select: auto;">N</strong> lines contain <strong style="user-select: auto;">M</strong> space-separated binary integers.<strong style="user-select: auto;"> </strong></span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> For each test case, print the minimum time required to all persons affected by COVID19</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1. 1 &lt;= T &lt;= 100</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">2. </span><span style="font-size: 18px; user-select: auto;">1 &lt;= N, M &lt;= 100</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">3. 0 &lt;= mat[i][j] &lt;= 1</span><br style="user-select: auto;">
<br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example:<br style="user-select: auto;">
Input:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">2</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">2 2<br style="user-select: auto;">
1 0<br style="user-select: auto;">
1 0<br style="user-select: auto;">
3 3</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 1 1<br style="user-select: auto;">
1 0 1<br style="user-select: auto;">
1 1 1</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1<br style="user-select: auto;">
2</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:<br style="user-select: auto;">
Test Case 2:</strong> After first second matrix will look like {{1, 0, 1}, {0, 0, 0}, {1, 0, 1}}. After two seconds matrix will look like {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}.</span></p>
 <p style="user-select: auto;"></p>
            </div>