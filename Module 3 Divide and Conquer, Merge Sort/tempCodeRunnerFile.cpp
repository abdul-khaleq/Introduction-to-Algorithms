
    int nums[N];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    merge_sort(0, n-1, nums);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}