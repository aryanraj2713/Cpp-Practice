


class Solution {
public:
    vector<int> asteroidCollision(int N, vector<int>& asteroids) {
        vector<int> stack;
        for (int asteroid : asteroids) {
            if (asteroid > 0 && !stack.empty() && stack.back() > 0) {
                stack.push_back(asteroid);
            }
            else if (asteroid < 0 && !stack.empty() && stack.back() < 0) {
                stack.push_back(asteroid);
            }
            else {
                while (!stack.empty() && stack.back() > 0 && abs(asteroid) > abs(stack.back())) {
                    stack.pop_back();
                }
                if (stack.empty() || stack.back() < 0) {
                    stack.push_back(asteroid);
                }
                
                else if (abs(asteroid) == abs(stack.back())) {
                    stack.pop_back();
                }
            }
        }
        return stack;
    }
};