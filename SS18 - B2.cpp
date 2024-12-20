#include<stdio.h>
#include<string.h>
	struct Sinhvien{
		char name[50];
		int age;
		char phone[15];
};
	
	int main(){
		struct Sinhvien Sinhvien1;
			strcpy(Sinhvien1.name, "NguyenChiThuc"); 
			Sinhvien1.age = 19;
			strcpy(Sinhvien1.phone, "0999999999");
 	
			printf("cac so lieu cua sinh vien 1 la: \n");
			printf("Name: %s\n", Sinhvien1.name);
			printf("Age: %d\n", Sinhvien1.age);
			printf("phone: %s", Sinhvien1.phone);
			
		return 0;
}
