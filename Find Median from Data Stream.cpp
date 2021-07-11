class MedianFinder {
public:
    /** initialize your data structure here. */
    vector<int> vec;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        vec.insert(lower_bound(vec.begin(),vec.end(),num),num);
    }
    
    double findMedian() {
        int len = vec.size();
        if(len%2 == 0)
            return ((vec[len/2])+(vec[len/2-1]))/2.0;
        else
            return vec[len/2];
    }
};
