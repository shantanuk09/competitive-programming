# LeetCode 1736. Latest Time by Replacing Hidden Digits
class Solution:
    def maximumTime(self, time: str) -> str:
        hour = list(time[0 : 2])
        minute = list(time[3 : ])
        if hour[0] == '?' and hour[1] == '?' : 
            hour[0] = '2'
            hour[1] = '3'
        elif hour[0] == '?' : 
            if '0' <= hour[1] <= '3' : hour[0] = '2'
            else : hour[0] = '1'
        elif hour[1] == '?' : 
            if hour[0] == '2' : hour[1] = '3'
            else : hour[1] = '9'
        if minute[0] == '?' : minute[0] = '5'
        if minute[1] == '?' : minute[1] = '9'
        return "".join(hour) + ":" + "".join(minute)