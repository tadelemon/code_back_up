//

#include<stdio.h>

int binary_search(int arr[],int target,int size){
    int low = 0;
    int high = size - 1;
    
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid]< target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return -1;

}
int BinSer(int arr[],int target,int low,int high){
    int label = -1;
    if(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
             label = BinSer(arr,target,mid+1,high);
            // low=mid+1;
        }else{
             label = BinSer(arr,target,low,mid-1);
            // high=mid-1;
        }
    }
    return label;
}
// int BinSer(int arr[],int target,int low,int high){
//     if(low>high){return -1;}else{
//         int mid = (low+high)/2;

//         if(arr[mid]==target){
//             return mid;
//         }else if(arr[mid]<target){
//              BinSer(arr,target,mid+1,high);
//         }else{
//              BinSer(arr,target,low,mid-1);
//         }

//     }
// }

int NiceBinSer(int arr[],int target,int size){
     int low=0;
     int high=size-1;
     int mid=(low+high)/2;
     
     return BinSer(arr,target,low,high);
}
int main(){
    int arr[]={1,5,16,89,121,596,4846,5488,8848,8889};
    int size=sizeof(arr)/sizeof(arr[0]);//数组在传递的时候会退化为指针，so只能在main（）内测
                                        //数组的长度（sizeof（指针）=8）
    // printf("%d",binary_search(arr,4846,size));
    printf("%d",NiceBinSer(arr,5488,size));
 
    return 0;
    // printf("%d",size);
}