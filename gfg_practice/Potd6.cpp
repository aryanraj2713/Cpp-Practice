

    int minLaptops(int N, int start[], int end[]) {
        // Code here
        vector<pair<int,int>>v;
        for(int i=0;i<N;i++)
        {
            v.push_back({start[i],end[i]});
        }
        sort(v.begin(),v.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        int res=0;
        for(int i=0;i<N;i++)
        {
            if(pq.size()==0)
                pq.push(v[i].second);
            else if(pq.top()<=v[i].first)
            {
                pq.pop();
                pq.push(v[i].second);
            }
            else
                pq.push(v[i].second);
            int sz=pq.size();
            res=max(res,sz);
        }
        return res;

    };
