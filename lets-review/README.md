
## Objective

Today we're expanding our knowledge of Strings and combining it with what we've already learned about loops. Check out the Tutorial tab for learning materials and an instructional video!

## Task

Given a string, _**S**_, of length _**N**_ that is indexed from **0** to _**N**_, print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

**Note: 0** is considered to be an even index.

## Input Format

The first line contains an integer, _**T**_ (the number of test cases).
Each line _**i**_ of the _**T**_ subsequent lines contain a String, _**S**_.

## Constraints

* **1** &le; _**T**_ &le; **10**
* **2** &le; **length of** _**S**_ &le; **10000**

## Output Format

For each String _**S<sub>j</sup>**_ (where **0** &le; _**j**_ &le; _**T**_ &minus; **1**), print _**S<sub>j</sup>**_'s even-indexed characters, followed by a space, followed by _**S<sub>j</sup>**_'s odd-indexed characters.

## Sample Input

```bash
2
Hacker
Rank
```

## Sample Output

```bash
Hce akr
Rn ak
```

## Explanation

Test Case 0: _**S**_ &equals; **"Hacker"**
_**S**_**[0]** &equals; **"H"**
_**S**_**[1]** &equals; **"a"**
_**S**_**[2]** &equals; **"c"**
_**S**_**[3]** &equals; **"k"**
_**S**_**[4]** &equals; **"e"**
_**S**_**[5]** &equals; **"r"**

The even indices are **0**, **2**, and **4**, and the odd indices are **1**, **3**, and **5**. We then print a single line of **2** space-separated strings; the first string contains the ordered characters from _**S**_'s even indices (**Hce**), and the second string contains the ordered characters from _**S**_'s odd indices (**akr**).

Test Case 1: _**S**_ &equals; **"Rank"**
_**S**_**[0]** &equals; **"R"**
_**S**_**[1]** &equals; **"a"**
_**S**_**[2]** &equals; **"n"**
_**S**_**[3]** &equals; **"k"**

The even indices are **0** and **2**, and the odd indices are **1** and **3**. We then print a single line of **2** space-separated strings; the first string contains the ordered characters from _**S**_'s even indices (**Rn**), and the second string contains the ordered characters from _**S**_'s odd indices (**ak**).
