#include<iostream>
using namespace std;

int KnapsackProblem(int profit[], int weight[], int capacity, int num)
{
    if (num == 0 || capacity == 0)
    {
        return 0;
    }
    if (weight[num - 1] > capacity)
    {
        return KnapsackProblem(profit, weight, capacity, num - 1);
    }
    else
    {
        return max(KnapsackProblem(profit, weight, capacity - weight[num-1], num-1)+profit[num-1], KnapsackProblem(profit, weight, capacity, num-1));
    }
}

int main(){
    int profit[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int capacity = 50;
    int num = 3;
    
    int result = KnapsackProblem(profit, weight, capacity, num);
    cout << "Result: " << result << endl;

    return 0;
}