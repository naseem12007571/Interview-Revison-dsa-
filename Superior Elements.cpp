vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
      vector<int>ans;
      int n=a.size();
      ans.push_back(a[n-1]);
      for(int i=n-1;i>=0;i--){
          if(a[i]>ans.back())
          ans.push_back(a[i]);
      }
      return ans;

}

//stiver sheet
