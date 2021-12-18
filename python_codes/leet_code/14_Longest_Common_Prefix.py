'''
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
'''


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        answer=''
        for i in zip(*strs):
            #print(i)
            print(set(i))
            if len(set(i))==1:
                answer+=i[0]
            else:
                break
        print(answer)
        return answer
