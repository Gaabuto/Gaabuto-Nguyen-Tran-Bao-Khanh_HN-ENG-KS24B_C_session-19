#include <stdio.h>
#include <string.h>

struct MangSV{
		char id[20];
		char name[30];
		int age;
		char phonenumber[20];
	};
	void sortStruct(struct MangSV sinhVien[]);
int main(){
	struct MangSV sinhVien[5] = {
	{"DTCN001","Nguyen Vu Thien", 18, "091212121212"
		},
		{"DTCN002","Nguyen Truong Thuong", 20, "12323132"
		},
		{"DTCN003","Tran Van Than", 12, "0239209320"
		},
		{"DTCN003","Vu Tri", 13, "0355209320"
		},{"DTCN005","Tran Vien", 15, "01192342320"
		}
	};
	printf("Mang chua duoc sap xep:\n");
	for(int i = 0;i < 5; i ++){
		printf("ID: %s,Ten: %s,Tuoi: %d,SDT: %s \n",sinhVien[i].id,sinhVien[i].name,sinhVien[i].age,sinhVien[i].phonenumber);
	}
	sortStruct(sinhVien);
	
	printf("Mang sau khi duoc sap xep:\n");
	for ( int i = 0; i < 5; i ++){
		printf("ID: %s,Ten: %s,Tuoi: %d,SDT: %s \n",sinhVien[i].id,sinhVien[i].name,sinhVien[i].age,sinhVien[i].phonenumber);
	}
	return 0;		
}
void sortStruct(struct MangSV sinhVien[]){
	for ( int i = 0; i < 4; i ++){
		for (int j = i+ 1; j < 4 ;j ++){
			if ( strcmp(sinhVien[i].name,sinhVien[j].name)>0 ){
				struct MangSV temp = sinhVien[i];
				sinhVien[i] = sinhVien[j];
				sinhVien[j] = temp;
			}
		}
	}
}

