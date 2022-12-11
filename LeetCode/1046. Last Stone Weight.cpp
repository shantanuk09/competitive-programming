// LeetCode 1046. Last Stone Weight
// Max-Heap.
class Solution{
public:
    int lastStoneWeight(vector<int>& stones){
        int resultingStone;
        int heapSize = stones.size();
        make_heap(stones.begin(), stones.end());
        while(1){
            if(heapSize >= 2){
                pop_heap(stones.begin(), stones.end());
                int largeStone = stones.back();
                stones.pop_back();

                pop_heap(stones.begin(), stones.end());
                int smallStone = stones.back();
                stones.pop_back();

                if(largeStone < smallStone) swap(largeStone, smallStone);
                if(largeStone == smallStone) heapSize -= 2;
                else{
                    heapSize -= 1;
                    resultingStone = largeStone - smallStone;
                    stones.push_back(resultingStone);
                    push_heap(stones.begin(), stones.end());
                }
            }
            else break;
        }
        return (stones.size()) ? stones.back() : 0;
    }
};