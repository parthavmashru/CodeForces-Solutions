<h2><a href="https://codeforces.com/contest/1514/problem/B" target="_blank" rel="noopener noreferrer">1514B — AND 0, Sum Big</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1514B](https://codeforces.com/contest/1514/problem/B) |

## Topics
`bitmasks` `combinatorics` `math`

---

## Problem Statement

<div class="header"><div class="title">B. AND 0, Sum Big</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Baby Badawy's first words were "AND 0 SUM BIG", so he decided to solve the following problem. Given two integers $$$n$$$ and $$$k$$$, count the number of arrays of length $$$n$$$ such that:</p><ul> <li> all its elements are integers between $$$0$$$ and $$$2^k-1$$$ (inclusive); </li><li> the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#AND">bitwise AND</a> of all its elements is $$$0$$$; </li><li> the sum of its elements is as large as possible. </li></ul><p>Since the answer can be very large, print its remainder when divided by $$$10^9+7$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10$$$) — the number of test cases you need to solve.</p><p>Each test case consists of a line containing two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 10^{5}$$$, $$$1 \le k \le 20$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the number of arrays satisfying the conditions. Since the answer can be very large, print its remainder when divided by $$$10^9+7$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003278064533516165" id="id0048354873385013686" class="input-output-copier">Copy</div></div><pre id="id003278064533516165">2
2 2
100000 20
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003209021244826892" id="id00544324336116159" class="input-output-copier">Copy</div></div><pre id="id003209021244826892">4
226732710
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the $$$4$$$ arrays are:</p><ul> <li> $$$[3,0]$$$, </li><li> $$$[0,3]$$$, </li><li> $$$[1,2]$$$, </li><li> $$$[2,1]$$$. </li></ul></div>