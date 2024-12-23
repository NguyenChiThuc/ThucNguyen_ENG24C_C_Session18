#include<stdio.h>
#include<string.h>

int main(){
	struct Dish{
		int id;
		char name[40];
		double price;
	};
	struct Dish menu[100] = {
	    {1,"Pho bo",40},
		{2,"Com rang",35},
		{3,"Bun cha",30},
		{4,"Bun dau mam tom",35},
		{5,"Bun bo Hue",35},
	};
	int choice=0;
	int size=5;
	do {
		printf("MENU\n");
		printf("1.In ra cac mon an co trong menu\n");
		printf("2.Them mot mon an vao cuoi menu\n");
		printf("3.Sua mot mon an o vi tri chi dinh\n");
		printf("4.Xoa mot mon an o vi tri cuoi\n");
		printf("5.Sap xep cac mon an\n");
		printf("6.Tim kiem mon an theo ten nhap vao\n");
		printf("7.thoat\n");
		printf("Moi ban nhap lua chon: ");
		scanf("%d",&choice);
		fflush(stdin);
		switch (choice){
			case 1:
				for(int i=0;i<size;i++){
					printf("%d,%s,%.3f\n", menu[i].id, menu[i].name, menu[i].price);
			}
			break;
			case 2:
				printf("Nhap ten mon muon them: ");
		        fgets(menu[size].name,sizeof(menu[size].name),stdin);
		        menu[size].name[strlen(menu[size].name)-1] = '\0';
		        	printf("Nhap gia tien: ");
		            scanf("%lf",&menu[size].price);
		            size++;
		        for (int i=0;i<size; i++){ 
	                printf("%d. %s: %.3lf\n",menu[i].id,menu[i].name,menu[i].price);
	            }        
	        break;
			case 3:
			{
				int newfood;
				struct Dish DishSua;
				printf("Nhap vi tri can sua: ");
				scanf("%d",&newfood);
				printf("Nhap ten, gia tien moi: ");
				scanf(" %s %lf",DishSua.name,&DishSua.price);
				menu[newfood]=DishSua;
			break;
			}
			case 4:
				size--;
            	for (int i=0;i<size; i++){ 
                	if(menu[i].id==0){
                    	break;
                }
                	printf("%d. %s: %lf\n",menu[i].id,menu[i].name,menu[i].price);
            }
            break;
			case 5:
				for(int i=0;i<size-1;i++){
					for(int j=i+1;j<size;j++){
						if(menu[i].price>menu[j].price) {
							struct Dish temp=menu[i];
							menu[i]=menu[j];
							menu[j]=temp;
						}
					}
				}
			break;
			case 6:{
				char search[40];
					printf("Nhap ten mon an can tim: ");
					scanf("%s",search);
				int found=0;
				for(int i=0;i<size;i++){
					if(strcmp(menu[i].name,search)==0){
						printf("Mon an duoc tim thay: %d,%s,%.2f\n", menu[i].id, menu[i].name, menu[i].price);
						found=1;
					break;
				}
			}
				if(!found){
					printf("Khong tim thay mon an\n");
				}
				break;
			}
			default:
				printf("Lua chon khong hop le\n");
		}
	}while(choice!=7);
	return 0;
}
