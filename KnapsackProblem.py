def KnapsackProblem(capacity, profit, weight, num):
    if num == 0 or capacity == 0:
        return 0 #base case
    if weight[num - 1] > capacity:
        return KnapsackProblem(capacity, profit, weight, num-1)
    else:
        return max(profit[num-1] + KnapsackProblem(capacity-weight[num-1], profit, weight, num-1), KnapsackProblem(capacity, profit, weight, num-1))

profit = [60, 100, 120]
weight = [10, 20, 30]
capacity = 50
num = len(profit)
print(KnapsackProblem(capacity, profit, weight, num))