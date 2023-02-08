// LeetCode 912. Sort an Array
class Solution{
public:
    void merge(vector<int> &arr, int p, int q, int r){
        int n1 = q - p + 1;
        int n2 = r - q;
        vector<int> left(n1), right(n2);
        for(int i = 0; i < n1; i++)
            left[i] = arr[p + i];
        for(int i = 0; i < n2; i++)
            right[i] = arr[q + i + 1];
        int i = 0;
        int j = 0;
        int k = p;
        while(i < n1 && j < n2){
            if(left[i] <= right[j]){
                arr[k] = left[i];
                i++;
            }
            else{
                arr[k] = right[j];
                j++;
            }
            k++;
        }
        while(i < n1){
            arr[k] = left[i];
            i++, k++;
        }
        while(j < n2){
            arr[k] = right[j];
            j++, k++;
        }
    }

    void mergeSort(vector<int> &arr, int left, int right){
        if(left < right){
            int middle = (left + right) / 2;
            mergeSort(arr, left, middle);
            mergeSort(arr, middle + 1, right);
            merge(arr, left, middle, right);
        }
    }

    vector<int> sortArray(vector<int>& nums){
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};