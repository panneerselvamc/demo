
#include<stdio.h>
  
void insert(int arr[], int N, int pos, int element)
{
      for(int i=N;i>pos;i--)
        arr[i]=arr[i-1];
    
    arr[pos]=element;


}

int main()
{
    int N;
    scanf("%d",&N);

    int i, arr[N], pos, element;

    for(i = 0; i < N; i++)
        scanf("%d",&arr[i]);

    scanf("%d%d",&pos, &element);

    insert(arr, N, pos, element);

    for(i = 0; i <= N; i++)
        printf("%d ",arr[i]);

    return 0;
}


