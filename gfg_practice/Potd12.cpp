// User function Template for C++
class Solution
{

public:
    int n = 100000;

    int is_prime[100001];

    void sieve()
    {

        is_prime[0] = is_prime[1] = 0;

        for (int i = 2; i * i <= n; i++)
        {

            if (is_prime[i])
            {

                for (int j = i * i; j <= n; j += i)

                    is_prime[j] = 0;
            }
        }
    }

    int shortestPath(int Num1, int Num2)

    {

        if (Num1 == Num2)
        {

            return 0;
        }

        memset(is_prime, 1, sizeof(is_prime));

        sieve();

        // cout<<is_prime[5]<<endl;

        queue<int> q;

        q.push(Num1);

        int cnt = 0;

        unordered_map<string, int> mp;

        while (!q.empty())
        {

            int sz = q.size();

            for (int i = 0; i < sz; i++)
            {

                int ele = q.front();

                q.pop();

                string str = to_string(ele);

                if (mp.find(str) != mp.end())
                {

                    continue;
                }

                mp[str]++;

                for (int i = 0; i < 4; i++)
                {

                    // char original=str[i];

                    string curr = str;

                    for (char ch = '0'; ch <= '9'; ch++)
                    {

                        if (curr[i] == ch || (i == 0 && ch == '0'))
                        {

                            continue;
                        }

                        curr[i] = ch;

                        // cout<<curr<<endl;

                        int num = stoi(curr);

                        if (num == Num2)
                        {

                            return cnt + 1;
                        }

                        if (is_prime[num])
                        {

                            // cout<<num<<endl;

                            q.push(num);
                        }
                    }
                }
            }

            cnt++;
        }

        return -1;
    }
};