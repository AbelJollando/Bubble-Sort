#include <stdio.h>

//Prosedur Bubble Sort Secara Ascending
void bubbleSortAscending(int arr[], int n){
	int i, j, tmp;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}

//Prosedur Bubble Sort Secara Descending
void bubbleSortDescending(int arr[], int n){
	int i, j, tmp;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]<arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}

//Program Utama
int main(){
	int array[100], menu, i, n, j;
	char Continue[2];
	
	printf("Masukkan Jumlah Array yang dibutuhkan :\t");
	scanf("%d", &n);
	
	printf("\nMasukkan Nilai yang ingin diurutkan\n");
	for(i=0;i<n;i++){
		printf("Masukkan Nilai ke-%d :\t", i+1);
		scanf("%d", &array[i]);
	}
	do{
		printf("\n====================Menu====================\n");
		printf("\n1. Ascending\n2. Descending\n");
		printf("\n============================================\nPilihan >> ");
		scanf("%d", &menu);fflush(stdin);
		switch(menu){
			case 1:
				bubbleSortAscending(array, n);
				printf("Hasil pengurutan nilai berdasarkan aturan Ascending adalah sebagai berikut :\n");
				for(i=0;i<n;i++){
				printf("%d", array[i]);
				printf("\n");
			}
			break;
			case 2:
				bubbleSortDescending(array, n);
				printf("Hasil pengurutan nilai berdasarkan aturan Descending adalah sebagai berikut :\n");
				for(i=0;i<n;i++){
				printf("%d", array[i]);
				printf("\n");
			}
			break;
			default:
				printf("Perhatikan input pilihan yang anda masukkan!!\n");
		}
		printf("Apakah anda ingin memilih metode pengurutan lainnya? (y/t) : "); scanf("%[^\n]", &Continue);fflush(stdin);
	}while(strcmp(Continue, "y")==0);
}
