class Solution{// Linear scan items in a row, maintain equal difference among adjacent items. When done, for the positive case, the array should be in ascending order with equal difference
public: // Time/Space: O(N); O(1)
    bool canMakeArithmeticProgression(vector<int>& arr){
        if (arr.size() <= 2) return true;
        auto min = *min_element(begin(arr), end(arr));
        auto max = *max_element(begin(arr), end(arr));        
        if ((max - min) % (arr.size() - 1) != 0) return false;
        int d = (max - min) / (arr.size() - 1);
        for (int i = 0; i < arr.size();) { // use pos to log the desired the location for arr[i]
            if (arr[i] == min + i * d) i++;  // if true here, it means pos = i, otherwise, arr[i] is misplaced and need to find right spot
			                                              //  one more thing, i++ only appear here. We only advance checking here.
            else if ((arr[i] - min) % d != 0) return false;
            else {
                int pos = (arr[i] - min) / d; //pos != i, pos is the desired location for arr[i]
                //if (pos < i || arr[pos] == arr[i]) return false;                
                if (pos < i) return false;  // since by far arr[0~i] is already sorted, so if we found 'pos' smaller than i,  sth wrong
                // if hit here, pos > i, 
                if ( arr[pos] == arr[i]) return false; // two pigeons for hole 'pos',  collision! No pigeon in i. 
                std::swap(arr[i], arr[pos]); // after performing this line, old arr[i] is assigned to the right spot 'pos'. But be careful new arr[i] need to be check later. That is why, no 'i++' inside this logic branch.
            }
        }
        //for(auto i: arr) cout << i << endl; // orderded
        return true; // now, arr is in acending order with equal difference among adjacent items
    }
}; 
