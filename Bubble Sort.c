#include <stdio.h>
#include <string.h>

//Prosedur atau Fungsi untuk melakukan Sorting secara Ascending
void bubbleSortAscending(int arr[], int n){
  int i, j, tmp;
  for(i = 0; i < n; i++){
    for(j=0; j < n-1; j ++){
      if(arr[j] > arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}

//Prosedur atau Fungsi untuk melakukan Sorting secara Descending
void bubbleSortDescending(int arr[], int n){
  int i, j, tmp;
  for(i = 0; i < n; i++){
    for(j=0; j < n-1; j ++){
      if(arr[j] < arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}

//Driver Program atau Program utama
int main() {

//Deklarasi Variabel	
  char Lanjut[2];
  int array[100], menu, n, i, j;

//Memasukkan panjang rentang data atau panjang array (penampung elemen)
  printf("Masukkan jumlah array atau elemen: \t");
  scanf("%d", &n);

//Memasukkan data atau nilai yang ingin diurutkan
  printf("Masukkan nilai yang ingin diurutkan \n");
  printf("\n");
  for(i = 0; i < n; i++){
  	printf("Masukkan nilai ke-%d = \t ",i+1);
    scanf("%d", &array[i]);
  }
	do{
		printf("\n====================Menu====================\n");
		printf("\n1. Ascending\n2. Descending\n");
		printf("\n============================================\nPilihan >> ");
		scanf("%i",&menu);fflush(stdin);
		switch(menu){
			case 1:
				//Memanggil Prosedur atau Fungsi Sorting secara Ascending
				bubbleSortAscending(array, n);
				printf("Hasil pengurutan sebagai berikut:\n");
  				for(i = 0; i < n; i++){
    			printf("%d ", array[i]);
    		}printf("\n");
			break;
			case 2:
				//Memanggil Prosedur atau Fungsi Sorting secara Descending
				bubbleSortDescending(array, n);
				printf("Hasil pengurutan sebagai berikut:\n");
  				for(i = 0; i < n; i++){
    			printf("%d ", array[i]);
    		}printf("\n");
			break;
			default:
				printf("Pilihan anda tidak tersedia, mohon diperhatikan kembali!!\n");
		}
		printf("Apakah anda ingin melanjutkan? (y/t): "); scanf("%[^\n]",&Lanjut);fflush(stdin);
	}while(strcmp(Lanjut,"y")==0);
  }
