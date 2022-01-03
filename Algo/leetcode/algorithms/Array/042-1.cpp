class Solution
{
public:
    int trap(vector<int> &height)
    {
        int water = 0;

        int maxI = 0;
        int maxHeight = 0;

        for (int i = 0; i < height.size(); i++)
        {
            if (height[i] > maxHeight)
            {
                maxI = i;
                maxHeight = height[i];
            }
        }
        // 计算左边
        int leftH = height[0];
        int leftI = 0;

        for (int i = 1; i <= maxI; i++)
        {
            if (height[i] >= leftH)
            {
                for (int j = i - 1; j > leftI; j--)
                {
                    water += leftH - height[j];
                }
                leftH = height[i];
                leftI = i;
            }
        }

        int rightI = height.size() - 1;
        int rightH = height[rightI];
        // 计算右边
        for (int k = height.size() - 2; k >= maxI; k--)
        {
            if (height[k] >= rightH)
            {
                for (int j = k + 1; j < rightI; j++)
                {
                    water += rightH - height[j];
                }
                rightH = height[k];
                rightI = k;
            }
        }
        return water;
    }
};