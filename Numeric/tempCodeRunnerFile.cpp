int arr[n/2];
    for(int i = 1; i < (n / 2); i++){
        arr[i] = i;
    }

    int left = 0;
    int right = (n / 2) - 1;
    int mid = left + (right - left) / 2;
    int ans = 0;

    while(left <= right){
        if((mid * mid) > n)
            right = mid - 1;
        else if((mid * mid) < n){
            left = mid + 1;
            ans = mid;
        }
        else{
            ans = mid;
            break;
        }

        mid = left + (right - left) / 2;
    }

    return ans;