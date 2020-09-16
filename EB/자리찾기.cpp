#include<stdio.h>
//
////내가 푼 방식 
//int main(){ 
//	int a[100];
//	//100개의 자리가 있는 배열을 선언한다
//	int i,j,k,n;
//	scanf("%d",&n);
//	//n개의 배열을 만들어 준다. 
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);	
//	}
//	//넣고싶은 새로운 수를 대입한다
//	scanf("%d",&k);
//	
//	for(i=0;i<n;i++){
//		if(k>a[i]&&k<a[i+1]){
//			//자리를 한칸씩 밀어준다 
//			for(j=n-1;j>=i+1;j--)
//			a[j+1]=a[j];
//			a[i+1]=k
//						
//		}	
//	}	
//	for(i=0;i<=n;i++){
//		printf("%d ",a[i]);
//	}
//			
//	return 0;
//}

//강사풀이랑 미묘하게 틀린데
//강사풀이와 논리 참고해서 다시 풀어보 기 
int arr[101];
int main(){
	int n,i,tmp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
	scanf("%d",&tmp);
	for(i=n-1;i>=0;i--){
		if(arr[i]>tmp) arr[i+1]=arr[i];
		else break;
	}
	arr[i+1]=tmp;
	
	for(i=0; i<=n; i++)
		printf("%d ",arr[i]);
	return 0;
}


//내가 반성해야 될 점은
//일단 이문제는 무리한 이중반복문이 필요가 없었고
//논리 찾다가 헤매서 푸는데 오래걸렸다...
//강사 풀이 참고하고 보지않고 다시 코딩 해볼 것
 
