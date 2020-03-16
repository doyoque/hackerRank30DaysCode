## Objective

In this challenge, we're getting started with conditional statements. Check out the Tutorial tab for learning materials and an instructional video!

## Task

Given an integer, _**n**_, perform the following conditional actions:
* If _**n**_ is odd, print Weird
* If _**n**_ is even and in the inclusive range of **2** to **5**, print Not Weird
* If _**n**_ is even and in the inclusive range of **6** to **20**, print Weird
* If _**n**_ is even and greater than **20**, print Not Weird

Complete the stub code provided in your editor to print whether or not _**n**_ is weird.

## Input Format

A single line containing a positive integer, _**n**_.

## Constraints

* **1** &le; _**n**_ &le; _**100**_

## Output Format

Print `Weird` if the number is weird; otherwise, print `Not Weird`.

## Sample Input 0

```bash
3
```

## Sample Output 0

```bash
Weird
```

## Sample Input 1

```bash
24
```

## Sample Output 1

```bash
Not Weird
```

## Explanation

Sample Case 0: _**n**_ **=** **3**
_**n**_ is odd and odd numbers are weird, so we print `Weird`.

Sample case 1: _**n**_ **=** **24**
_**n**_ &gt; **20** and _**n**_ is even, so we print `Not Weird`.