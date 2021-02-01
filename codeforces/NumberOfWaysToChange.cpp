#include <vector>
using namespace std;

int numberOfWaysToMakeChange(int amount, vector<int> coins)
{
    vector<int> ways(amount + 1, 0);
    ways[0] = 1;
    for (int coin : coins)
    {
        for (int i = 1; i <= amount; i++)
        {
            if (i >= coin)
            {
                ways[i] += ways[i - coin];
            }
        }
    }
    return ways[amount];
}
