#include<stdio.h>
#include<string.h>

	typedef struct{
		int id;
		char FullName[50];
		int Age;
		char Phone[50];
	} Student;
	
	int main(){
		Student students[50]={
		{1,"NguyenVanA",18,"0123456789"},
		{2,"NguyenVanB",18,"0123456788"},
		{3,"NguyenVanC",18,"0123456787"},
		{4,"NguyenVanD",18,"0123456786"},
		{5,"NguyenVanE",18,"0123456785"},
	};
		int numStudents = 5;
		int id, found=0;
		char newName[50];
		int newAge;
		
		printf("Nhap id sinh vien can sua: ");
		scanf("%d", &id);
		
		for(int i = 0; i<numStudents; i++){
			if(students[i].id ==id){
				found =1;
				printf("Nhap ten moi: ");
				scanf("%s", &newName);
				printf("Nhap tuoi moi: ");
				scanf("%d", &newAge);
			strcpy(students[i].FullName, newName);
			students[i].Age = newAge;
			break;
			}
		}
		
		if (!found){
			printf("Khong tim thay sinh vien voi id: %d", id);
		}
		printf("Thong tin sinh vien sau khi thay doi la: \n");
		for (int i=0; i<numStudents; i++){
			printf("ID: %d, Ten: %s, Tuoi: %d, SDT: %s\n",
			students[i].id, students[i].FullName, students[i].Age, students[i].Phone);
		}
		return 0;
	}
	
