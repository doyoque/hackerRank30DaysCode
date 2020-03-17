## Objective

In this challenge, we're going to learn about the difference between a class and an instance; because this is an Object Oriented concept, it's only enabled in certain languages. Check out the Tutorial tab for learning materials and an instructional video!

## Task

Write a Person class with an instance variable, _**age**_, and a constructor that takes an integer, _**initialAge**_, as a parameter. The constructor must assign _**initialAge**_  to _**age**_ after confirming the argument passed as _**initialAge**_ is not negative; if a negative argument is passed as _**initialAge**_, the constructor should set _**age**_ to _**0**_ and print `Age is not valid, setting age to 0.`.
In addition, you must write the following instance methods:
1. yearPasses() should increase the _**age**_ instance variable by **1**.
2. amIOld() should perform the following conditional actions:
  * If _**age**_ &lt; **13** print `you are young.`.
  * If _**age**_ &ge; **13** and _**age**_ &le; **8** print `you are a teenager.`.
  * otherwise print `you are old.`.

To help you learn by example and complete this challenge, much of the code is provided for you, but you'll be writing everything in the future. The code that creates each instance of your Person class is in the main method. Don't worry if you don't understand it all quite yet!

**Note**: Do not remove or alter the stub code in the editor.

## Input Format

Input is handled for you by the stub code in the editor.

The first line contains an integer, _**T**_ (the number of test cases), and the _**T**_ subsequent lines each contain an integer denoting the _**age**_ of a Person instance.

## Constraints

* **1** &le; _**T**_ &le; **4**
* **-5** &le; _**age**_ &le; **30**

## Output Format

Complete the method definitions provided in the editor so they meet the specifications outlined above; the code to test your work is already in the editor. If your methods are implemented correctly, each test case will print **2** or **3** lines (depending on whether or not a valid _**initialAge**_ was passed to the constructor).

## Sample Input

```bash
4
-1
10
16
18
```

## Sample Output

```bash
Age is not valid, setting age to 0.
You are young.
You are young.

You are young.
You are a teenager.

You are a teenager.
You are old.

You are old.
You are old.
```

## Explanation

Test case 0: _**initialAge**_ **= -1**

Because _**initialAge**_ &lt; **0**, our code must set _**age**_ to **0** and print the "Age is not valid..." message followed by the young message. Three years pass and _**age**_ **= 3**, so we print the young message again.

Test case 1: _**initialAge**_ **= 10**

Because _**initialAge**_ &lt; **13**, our code should print that the person is young. Three years pass and _**age**_ **= 13**, so we print that the person is now a teenager.

Test case 2: _**initialAge**_ **= 16**

Because **13** &le; _**initialAge**_ &lt; **18**, our code should print that the person is a teenager. Three years pass and _**age**_ **= 19**, so we print that the person is old.

Test case 3: _**initialAge**_ **= 18**

Because _**initialAge**_ &ge; **18**, our code should print that the person is old. Three years pass and the person is still old at _**age**_ **= 21**, so we print the old message again.

**The extra line at the end of the output is supposed to be there and is trimmed before being compared against the test case's expected output. If you're failing this challenge, check your logic and review your print statements for spelling errors.**
