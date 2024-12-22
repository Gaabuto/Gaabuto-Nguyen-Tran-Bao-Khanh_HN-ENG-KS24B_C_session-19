#include <stdio.h>
#include <string.h>


struct mangSinhVien{
	char id[20];
	char name[30];
	int age;
	char phoneNumber[20];
};
void delSV(struct mangSinhVien sinhvien[],int *n, int currentLength, char delId[9]);
int main(){
	char delId[7];
	int currentLength,n = 5;
	struct mangSinhVien sinhvien[5] = {
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
	
	for (int i = 0; i < 5; i ++){
		printf("ID:%s,Ten:%s\n",sinhvien[i].id,sinhvien[i].name);
	}
	printf("moi ban nhap Id nguoi muon xoa:");
	fgets(delId,sizeof(delId), stdin);
	delId[strcspn(delId, "\n")] = '\0';
	delSV(sinhvien,&n,currentLength,delId);

	
	return 0;
}
void delSV(struct mangSinhVien sinhvien[],int *n,int currentLength, char delId[9]){
	int flag = 0;
	for ( int i = 0;i < *n; i ++){
		if (strcmp(sinhvien[i].id,delId) == 0){
		currentLength = i;
		flag ++;
		break;
		}
		}
		
		if(flag == 0){
			printf("Ham khong co sinh vien co id %s!!",delId);
		}else{
		for ( int i = currentLength + 1; i < *n - 1; i ++){
			sinhvien[i] = sinhvien[i - 1];
		}
		*n --;
		
		}
		

}
