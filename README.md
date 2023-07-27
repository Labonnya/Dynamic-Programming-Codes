This repository is a collection of various dynamic programming problems implemented in cpp. 

**Longest Common Subsequence (LCS):**

The Longest Common Subsequence (LCS) problem is to find the longest subsequence of two strings that is common to both strings. For example, the LCS of the strings "ABAB" and "BABA" is "ABA".

The naive dynamic programming approach to solving the LCS problem is to create a two-dimensional table, where each entry in the table represents the length of the longest common subsequence of the prefixes of the two strings up to that point. The table is filled in recursively, starting from the bottom-right corner and working upwards and to the left.

The time complexity of the naive dynamic programming approach to the LCS problem is O(mn), where m is the length of the first string and n is the length of the second string. The space complexity is also O(mn).



**Longest Increasing Subsequence (LIS):**

**Naive DP approach:**

The naive dynamic programming approach to the LIS problem is to create a table, where each entry in the table represents the length of the longest increasing subsequence ending at that point in the sequence. The table is filled in recursively, starting from the bottom of the table and working upwards.

The time complexity of the naive dynamic programming approach to the LIS problem is O(n^2), where n is the length of the sequence. The space complexity is also O(n^2).

The naive dynamic programming approach to the LIS problem is straightforward to implement, but it is not very efficient. The reason for this is that the table is filled in recursively, which means that the same subsequences are computed multiple times.


**Time efficient approach:**

The time efficient approach to the LIS problem is to use a bottom-up dynamic programming approach. In this approach, the table is filled in from the top down, starting from the first entry in the table. The value of each entry in the table is the maximum of the values of the entries in the previous row that are less than the current element.

The time complexity of the time efficient approach to the LIS problem is O(n log n), where n is the length of the sequence. The space complexity is also O(n).

The time efficient approach to the LIS problem is more efficient than the naive dynamic programming approach because it does not compute the same subsequences multiple times.


**LIS using LCS:**

The LIS problem can also be solved using the LCS problem. The idea is to create a table, where each entry in the table represents the length of the longest common subsequence of the prefixes of the sequence up to that point and the prefixes of the sequence in reverse order. The table is filled in recursively, starting from the bottom-right corner and working upwards and to the left.

The time complexity of the LIS problem using LCS is O(n^2), where n is the length of the sequence. The space complexity is also O(n^2).

The LIS problem using LCS is not as efficient as the time efficient approach to the LIS problem, but it is easier to implement.



**Chocolate Cutting Problem:**

The chocolate cutting problem is to find the minimum number of cuts required to cut a chocolate bar into pieces of a given length. For example, if the chocolate bar is 10 cm long and the pieces are to be 2 cm long, then the minimum number of cuts required is 4.

The chocolate cutting problem can be solved using dynamic programming. The idea is to create a table, where each entry in the table represents the minimum number of cuts required to cut a chocolate bar of length n into pieces of length m. The table is filled in recursively, starting from the bottom of the table and working upwards.

The time complexity of the chocolate cutting problem is O(n^2), where n is the length of the chocolate bar. The space complexity is also O(n^2).



**Coin Change Algorithm:**

The coin change algorithm is to find the minimum number of coins required to make a change for a given amount of money. For example, if the amount of money is 5 and the coins are 1, 2, and 5 cents, then the minimum number of coins required is 2 (2 1-cent coins and 1 5-cent coin).

The coin change algorithm can be solved using dynamic programming. The idea is to create a table, where each entry in the table represents the minimum number of coins required to make a change for amount n using coins of denominations d1, d2, ..., dk. The table is filled in recursively, starting from the bottom of the table and working upwards.

The time complexity of the coin change algorithm is O(mn), where n is the amount of money and m is the number of denominations of coins. The space complexity is also O(mn).



**Edit Distance:**

The edit distance is the minimum number of changes required to convert one string to another. For example, the edit distance between the strings "kitten" and "sitting" is 3, because the changes required are:

Insert "s"
Delete "e"
Replace "n" with "t"
The edit distance can be solved using dynamic programming. The idea is to create a table, where each entry in the table represents the edit distance between the prefixes of the two strings up to that point. The table is filled in recursively, starting from the bottom-right corner and working upwards and to the left.

The time complexity of the edit distance is O(mn), where m is the length of the first string and n is the length of the second string. The space complexity is also O(mn).



**MCM_memorization:**

The mcm_memorization problem is to find the minimum cost of multiplying a sequence of matrices. For example, if the sequence of matrices is [A, B, C], then the minimum cost of multiplying them is 20.

The mcm_memorization problem can be solved using dynamic programming. The idea is to create a table, where each entry in the table represents the minimum cost of multiplying a sequence of matrices of length n. The table is filled in recursively, starting from the bottom of the table and working upwards.

The time complexity of the mcm_memorization problem is O(n^3), where n is the length of the sequence of matrices. The space complexity is also O(n^2).



**Rock Climbing Problem:**

The rock climbing problem is to find the maximum height that can be reached by climbing a set of rocks. For example, if the rocks are of heights 1, 3, 5, and 7, then the maximum height that can be reached is 11.

The rock climbing problem can be solved using dynamic programming. The idea is to create a table, where each entry in the table represents the maximum height that can be reached by climbing a set of rocks of length n. The table is filled in recursively, starting from the bottom of the table and working upwards.

The time complexity of the rock climbing problem is O(n^2), where n is the number of rocks. The space complexity is also O(n^2).



**Rod Cutting Problem:**

The rod cutting problem is to find the maximum profit that can be obtained by cutting a rod of given length into pieces. For example, if the rod is of length 10 and the prices of the pieces are 1, 5, 6, and 8, then the maximum profit that can be obtained is 21.

The rod cutting problem can be solved using dynamic programming. The idea is to create a table, where each entry in the table represents the maximum profit that can be obtained by cutting a rod of length n. The table is filled in recursively, starting from the bottom of the table and working upwards.

The time complexity of the rod cutting problem is O(n^2), where n is the length of the rod. The space complexity is also O(n^2).
