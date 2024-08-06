# AEC_Advanced_C_Batch1_August_2024

* **GitHub Link:** https://github.com/toarnabtrainer/AEC_Advanced_C_Batch1_August_2024 or https://tinyurl.com/2pvyzydx
* **MS-Teams Link:** https://tinyurl.com/2s3yxjnr

<br>

* **C Tutorials / MCQ / Sample Program List:** https://www.includehelp.com/c-programming-examples-solved-c-programs.aspx
* **C++ Tutorials / MCQ / Sample Program List:** https://www.includehelp.com/cpp-tutorial/

<br>

### Oracle Tutorials:
* **Oracle Tutorial:** https://www.oracletutorial.com/
* **Oracle/SQL Tutorial:** [Oracle Tutorial](https://dhangadhimun.gov.np/sites/dhangadhimun.gov.np/files/oracle_tut1.pdf)
* **SQL Tutorial for Beginners: Learn SQL in 7 Days:** https://www.guru99.com/sql.html

<hr>

## Solving Problems from Leetcode (https://leetcode.com/):

<pre>
Leetcode 146: 136. Single Number (Execution Time 1069 ms on Leetcode Portal)
int singleNumber(int* nums, int numsSize) {
    int count;
    for(int i = 0; i < numsSize; i++) {
        count = 0;
        for(int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j]) count++;
        }
        if (count == 1) return nums[i];
    }
    return 0;
}

Leetcode 146: 136. Single Number (Execution Time 3 ms on Leetcode Portal)
int singleNumber(int* nums, int numsSize) {
    int output = 0;
    for(int i = 0; i < numsSize; i++) {
        output = output ^ nums[i];
    }
    return output;
}
</pre>

## Class Assignments:

<pre>
Assignment 1: Merge two sorted arrays.
For Example:
    arr1 = [11 33 77 99]
    arr2 = [22, 44, 66, 77, 88, 99]
    output_array = [11, 22, 33, 44, 66, 77, 77, 88, 99, 99]

Assignment 2: Remove Duplicates from a Sorted Array.
For Example:
    arr1 = [11, 22, 33, 44, 66, 77, 77, 88, 99, 99]
    output_array = [11, 22, 33, 44, 66, 77, 88, 99]

Assignment 3: Validation of a string with ( and ) parentheses.
For Example:
    input_string: (()())   outcome: valid
    input_string: ((())    outcome: invalid
    input_string: )(())    outcome: invalid
    input_string: )))(((   outcome: invalid
</pre>

<hr>
