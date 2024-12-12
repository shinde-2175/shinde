 #include<stdio.h> 
  int main() 
 { 
    int i, low, high, mid, n, key, array[100]; 
 
    printf("Enter number of elements\n"); 
    scanf("%d",&n); 
 
    printf("Enter %d integers\n", n); 
    for (i=0; i<n; i++ ) 
       scanf("%d",&array[i]); 
 
    printf("Enter value to find\n"); 
    scanf("%d",&key); 
 
    low = 0; 
    high = n-1; 
 
    while( low <= high ) 
    { 
  mid = (low + high)/2; 
 
  if ( array[mid] == key ) 
        { 
    printf("%d found at location %d.\n", key, mid+1); 
    return; 
  } 
 
       else if ( array[mid] < key ) 
    low = mid + 1; 
 
        else 
    high = mid- 1; 
       } 
 
    if ( low > high ) 
        printf("Not found! %d is not present in the list.\n", key); 
 
    return; 
 }
