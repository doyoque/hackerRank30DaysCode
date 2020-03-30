## Objective

In this challenge, you'll work with arithmetic operators. Check out the Tutorial tab for learning materials and an instructional video!

## Task

Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.

**Note:** Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result!

## Input Format

There are **3** lines of numeric input:
The first line has a double, _**mealCost**_ (the cost of the meal before tax and tip).
The second line has an integer, _**tipPercent**_ (the percentage of _**mealCost**_ being added as tip).
The third line has an integer, _**taxPercent**_ (the percentage of _**mealCost**_ being added as tax).

## Output Format

Print the total meal cost, where _**totalCost**_ is the rounded integer result of the entire bill (_**mealCost**_ with added tax and tip).

## Sample Input

```bash
12.00
20
8
```

## Sample Output

```bash
15
```

## Explanation

Given:
_**mealCost**_ = **12**, _**tipPercent**_ = **20**, _**taxPercent**_ = **8**

Calculations:
_**tip**_ = **12 X 20 / 100 = 2.4**
_**tax**_ = **12 X 8 / 100 = 0.96**
_**totalCost**_ = _**mealCost**_ + _**tip**_ + _**tax**_ = **12 + 2.4 + 0.96 = 15.36**
_**round(totalCost)**_ = **15**

We round _**totalCost**_ to the nearest dollar (integer) and then print out result, **15**.
