#include<stdio.h>

////내풀이 
//int main(){
//	int a[100];
//	int i,k;
//	
//	for(i=0;i<9;i++){
//		scanf("%d",&a[i]);
//	}
//	
//	scanf("%d",&k);//몇칸씩 이동 시킬 것인지
//	for(i=0;i<9;i++){
//		
//		if(i+k>=9){
//			printf("%d ",a[i+k-9]);
//		}else
//		printf("%d ",a[i+k]);
//	} 
//	return 0;
//}

//강사풀이
//나의 풀이는 출력을 바꾼 것인데
//문제의 의도는 배열자체를 바꾼뒤 출력 하는 것이다. 
//int arr[10];
//int main(){
//	int i,j,k,tmp;
//	for(i=0;i<9;i++){
//		scanf("%d",&arr[i]);
//	}
//	scanf("%d",&k);
//	for(i=1;i<=k;i++){
//		tmp=arr[0];
//		for(j=0;j<8;j++){
//			arr[j]=arr[j+1];
//		}
//		arr[j]=tmp;
//	}
//	
//	for(i=0;i<9;i++){
//		printf("%d ", arr[i]);
//	}
//	return 0;
//} 




