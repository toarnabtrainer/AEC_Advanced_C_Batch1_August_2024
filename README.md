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

## Class Assignment:

<pre>
Leetcode 146: 136. Single Number
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
</pre>

<hr>
