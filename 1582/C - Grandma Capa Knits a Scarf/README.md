<h2><a href="https://codeforces.com/contest/1582/problem/C" target="_blank" rel="noopener noreferrer">1582C — Grandma Capa Knits a Scarf</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1582C](https://codeforces.com/contest/1582/problem/C) |

## Topics
`brute force` `data structures` `greedy` `strings` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">C. Grandma Capa Knits a Scarf</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Grandma Capa has decided to knit a scarf and asked Grandpa Sher to make a pattern for it, a pattern is a string consisting of lowercase English letters. Grandpa Sher wrote a string $$$s$$$ of length $$$n$$$.</p><p>Grandma Capa wants to knit a beautiful scarf, and in her opinion, a beautiful scarf can only be knit from a string that is a palindrome. She wants to change the pattern written by Grandpa Sher, but to avoid offending him, she will choose one lowercase English letter and erase some (at her choice, possibly none or all) occurrences of that letter in string $$$s$$$.</p><p>She also wants to minimize the number of erased symbols from the pattern. Please help her and find the minimum number of symbols she can erase to make string $$$s$$$ a palindrome, or tell her that it's impossible. Notice that she can only erase symbols equal to the <span class="tex-font-style-bf">one</span> letter she chose.</p><p>A string is a palindrome if it is the same from the left to the right and from the right to the left. For example, the strings <span class="tex-font-style-tt">'kek'</span>, <span class="tex-font-style-tt">'abacaba'</span>, <span class="tex-font-style-tt">'r'</span> and <span class="tex-font-style-tt">'papicipap'</span> are palindromes, while the strings <span class="tex-font-style-tt">'abb'</span> and <span class="tex-font-style-tt">'iq'</span> are not.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. The next $$$2 \cdot t$$$ lines contain the description of test cases. The description of each test case consists of two lines.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the length of the string.</p><p>The second line of each test case contains the string $$$s$$$ consisting of $$$n$$$ lowercase English letters.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print the minimum number of erased symbols required to make the string a palindrome, if it is possible, and $$$-1$$$, if it is impossible.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007760679815242253" id="id009627616661562047" class="input-output-copier">Copy</div></div><pre id="id007760679815242253">5
8
abcaacab
6
xyzxyz
4
abba
8
rprarlap
10
khyyhhyhky
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0026461824477589735" id="id005869891015679114" class="input-output-copier">Copy</div></div><pre id="id0026461824477589735">2
-1
0
3
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can choose a letter <span class="tex-font-style-tt">'a'</span> and erase its first and last occurrences, you will get a string <span class="tex-font-style-tt">'bcaacb'</span>, which is a palindrome. You can also choose a letter <span class="tex-font-style-tt">'b'</span> and erase all its occurrences, you will get a string <span class="tex-font-style-tt">'acaaca'</span>, which is a palindrome as well.</p><p>In the second test case, it can be shown that it is impossible to choose a letter and erase some of its occurrences to get a palindrome.</p><p>In the third test case, you don't have to erase any symbols because the string is already a palindrome.</p></div>