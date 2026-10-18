<h2><a href="https://codeforces.com/contest/2234/problem/B" target="_blank" rel="noopener noreferrer">2234B — Palindrome, Twelve and Two Terms</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2234B](https://codeforces.com/contest/2234/problem/B) |

## Topics
`brute force` `constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Palindrome, Twelve and Two Terms</div><div class="time-limit"><div class="property-title">time limit per test</div>1.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive integer $$$n$$$. A pair of non-negative integers $$$a, b$$$ is called beautiful if the following conditions hold:</p><ul><li> $$$a + b = n$$$. </li><li> The number $$$a$$$ is a palindrome.$$$^{\text{∗}}$$$ </li><li> The number $$$b$$$ is divisible by $$$12$$$.</li></ul><p>You need to find a beautiful pair or report that it does not exist.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$A number is called a <span class="tex-font-style-it">palindrome</span> if and only if it remains the same when its digits (in decimal notation) are written in reverse order. For example, the numbers $$$12321$$$, $$$6776$$$, $$$5$$$, $$$0$$$ are palindromes, while the numbers $$$123$$$ and $$$69$$$ — are not.</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if such $$$a$$$ and $$$b$$$ exist, output $$$a$$$ and $$$b$$$ on a separate line, separated by a space. Otherwise, output $$$-1$$$ on a separate line.</p><p>If there are several beautiful pairs $$$a, b$$$, you may output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0019959278954754678" id="id006263951230663273" class="input-output-copier">Copy</div></div><pre id="id0019959278954754678"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">10</div><div class="test-example-line test-example-line-odd test-example-line-3">310</div><div class="test-example-line test-example-line-even test-example-line-4">12</div><div class="test-example-line test-example-line-odd test-example-line-5">1000000000</div><div class="test-example-line test-example-line-even test-example-line-6">6111111111111111</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002517543468648531" id="id0048469400367421" class="input-output-copier">Copy</div></div><pre id="id002517543468648531">1 0
-1
262 48
0 12
889989988 110010012
111111111111111 6000000000000000</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$a = 1$$$ is a palindrome, and $$$b = 0$$$ is divisible by $$$12$$$, and $$$a + b = 1 = n$$$, so the answer satisfies the condition.</p><p>In the second test case, it can be shown that no pair $$$a, b$$$ is suitable.</p><p>In the third test case, $$$a = 262$$$ is a palindrome, and $$$b = 48$$$ is divisible by $$$12$$$, and $$$a + b = 310 = n$$$, so the answer satisfies the condition.</p></div>