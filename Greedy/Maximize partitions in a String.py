
def maxPartitions(s):
    first = [-1] * 26
    last = [-1] * 26
    for i in range(len(s)):
        if first[ord(s[i]) - ord('a')] == -1:
            first[ord(s[i]) - ord('a')] = i
        last[ord(s[i]) - ord('a')] = i

    count = 0
    end = 0
    for i in range(len(s)):
        
        # Expand interval
        end = max(end, last[ord(s[i]) - ord('a')])
        if i == end:
            count += 1  

    return count
