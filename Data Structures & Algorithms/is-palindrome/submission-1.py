class Solution:
    def isPalindrome(self, s: str) -> bool:
        ch=""
        for i in range(len(s)):
            if(65<=ord(s[i])<=90 or 97<=ord(s[i])<=122 or 48<=ord(s[i])<=57 ): ch+=s[i]
        for i in range (len(ch)):
            #print(ch[i],ch[len(ch)-1-i])
            if(ch[i].upper()!=ch[len(ch)-1-i].upper()): 
                return False                     
        return True