# LeetCode 929. Unique Email Addresses
class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        st = set()
        for email in emails : 
            at = email.find("@")
            local = email[:at]
            domain = email[at + 1:]
            localFiltered = ""
            for char in local : 
                if char == "+" : break
                elif char != "." : localFiltered += char
            st.add(localFiltered + "@" + domain)
        return len(st)