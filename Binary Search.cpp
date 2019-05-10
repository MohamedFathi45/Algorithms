bool Binary_Search( int x , int n )
{
    int lo = 0 , hi = n-1;
    while( lo <= hi )
    {
        int mid = (lo+hi)/2;
        if( arr[mid] == x )
            return 1;
        else if( x > arr[mid] )
            lo = mid+1;
        else
            hi = mid-1;
    }
    return 0;
}
