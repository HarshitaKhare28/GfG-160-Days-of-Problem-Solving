
def jobSequencing(deadline, profit):
    n = len(deadline)
    cnt = 0
    totProfit = 0

    jobs = sorted(zip(profit, deadline), reverse=True)

    slot = [0] * n
    for i in range(n):
        start = min(n, jobs[i][1]) - 1
        for j in range(start, -1, -1):

            if slot[j] == 0:
                slot[j] = 1
                cnt += 1
                totProfit += jobs[i][0]
                break
    
    return [cnt, totProfit]
