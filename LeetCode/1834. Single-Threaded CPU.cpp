// LeetCode 1834. Single-Threaded CPU
// Priority Queue.
class Solution{
public:
    vector<int> getOrder(vector<vector<int>>& tasks){
        // greater<> puts the smallest priority at the top.
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> nextTask;
        // A vector of an array of size 3.
        vector<array<int, 3>> sortedTasks;
        // sortedTasks contains our tasks sorted by enqueue time, processing time and index.
        for(int i = 0; i < tasks.size(); i++)
            sortedTasks.push_back({tasks[i][0], tasks[i][1], i});
        sort(sortedTasks.begin(), sortedTasks.end());
        // Vector to be returned.
        vector<int> taskProcessingOrder;
        // The current time.
        long currentTime = 0;
        // Index of the task being processed.
        int taskIndex = 0;
        // While all tasks haven't been processed or our priority queue is not empty.
        while(taskIndex <  tasks.size() || !nextTask.empty()){
            // In case currentTime < enqueue time of next task, set currentTime to enqueue time.
            if(nextTask.empty() && currentTime < sortedTasks[taskIndex][0]) currentTime = sortedTasks[taskIndex][0];
            // Push tasks that are ready to be perfomred in the priority queue.
            while(taskIndex < sortedTasks.size() && currentTime >= sortedTasks[taskIndex][0]){
                nextTask.push({sortedTasks[taskIndex][1], sortedTasks[taskIndex][2]});
                taskIndex++;
            }
            // Get processing time and index of the next task.
            auto [processTime, index] = nextTask.top();
            nextTask.pop();
            currentTime += processTime;
            taskProcessingOrder.push_back(index);
        }
        return taskProcessingOrder;
    }
};
