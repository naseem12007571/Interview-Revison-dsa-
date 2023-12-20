class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        

         int i = 0;

        // 'for' loop ka istemal 'j' ke liye kiya gaya hai, jo 0 se lekar 'arr.size() - 1' tak badhta hai.
        for (int j = 0; j < arr.size(); ++j) {
            // Shart check ki gayi hai: Agar 'i' 2 se kam hai YA agar current element 'arr[j]' do positions pehle ke element 'arr[i - 2]' se bada hai.
            if (i < 2 || arr[j] > arr[i - 2]) {
                // Agar shart sach hai, to 'arr[i]' ko current element 'arr[j]' ke barabar karen aur 'i' ko ek se badhayen.
                arr[i++] = arr[j];
            }
        }

        // Modified array ka size, jisme duplicates hata kar, return kiya jata hai.
        return i;
    }
};
