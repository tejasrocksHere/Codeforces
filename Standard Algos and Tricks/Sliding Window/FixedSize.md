# There 2 types of problems in Sliding Window

1. Fixed size where condtion is given
2. Variable size like (largest/smallest subarray with condtion)
3. No of Subarrays with condition (toughest one out of three)
4. Shortest/Min window (condition)

# Fixed Window problems

[Maximum point leetcode](https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/) Consider first k elements as window then just move the window and start considering element from right side
initaly left_sum=sum of first k elements

- now we we start moving window so we start considering right_sum
  ![alt text]({64B52AE1-A453-4F64-8F5B-FA8EAA108D13}.png)

[Longest Substring With At Most K Distinct Characters](https://youtu.be/teM9ZsVRQyc?feature=shared)
![alt text]({AB7CBC3E-B996-4DD0-BE3F-0FD047041854}.png)


[1358. Number of Substrings Containing All
Three Characters](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/)
- For every character there is substring that ends      
![alt text]({D6688A71-080E-47CB-ACBC-873CAC7B3A88}.png) 