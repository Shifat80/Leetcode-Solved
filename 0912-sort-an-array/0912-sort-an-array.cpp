class Solution {
public:
   int partition(vector<int>& arr, int start, int end) {
    // Randomize pivot
    int randomIndex = start + rand() % (end - start + 1);
    swap(arr[randomIndex], arr[end]);

    int pos = start;
    for (int i = start; i < end; i++) {
        if (arr[i] <= arr[end]) {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    swap(arr[pos], arr[end]);
    return pos;
}

    void quicksort(vector<int>&arr,int start,int end){
        if(start>=end) return;

        int pivot=partition(arr,start,end);
        quicksort(arr,start,pivot-1);
        quicksort(arr,pivot+1,end);
    }
    
    vector<int> sortArray(vector<int>& nums) {

        quicksort(nums,0,nums.size()-1);
         return nums;

    }
};