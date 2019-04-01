#include<conio.h>
#include<stdio.h>
#include <math.h>

int main(){


printf("1. DECIMAL TO BINARY\n");
printf("2. DECIMAL TO OCTAL\n");
printf("3. DECIMAL TO HEXADECIMAL\n");
printf("4. BINARY TO DECIMAL\n");
printf("5. OCTAL TO DECIMAL\n");
printf("6. HEXADECIMAL TO DECIMAL\n");
printf("7. BINARY TO OCTAL\n");
printf("8. OCTAL TO BINARY\n");
printf("9. HEXADECIMAL TO BINARY\n");
printf("10. BINARY TO HEXADECIMAL\n");
	
	int a;
scanf("%d",&a);
 
 switch(a){
 	
 	case 1:{
 		int b;
		int arr[10],i=0;
		printf("ENTER DECIMAL NUMBER :");
		scanf("%d",&b);
		int c;
		printf("\nNUMBER IN BINARY :");
		while(b>1){
		c=b%2;
		b=b/2;
		arr[i]=c;
		i++;	
		}
		arr[i]=b;
	
		for(int j=i;j>=0;j--){
			printf("%d",arr[j]);
		}
		
		
	 }break;
 	
 	
 	case 2:{
 		
 		int b;
		int arr[10],i=0;
		printf("ENTER DECIMAL NUMBER :");
		scanf("%d",&b);
		int c;
		printf("\nNUMBER IN OCTAL :");
		while(b>=8){
		c=b%8;
		b=b/8;
		arr[i]=c;
		i++;	
		}
		arr[i]=b;
	
		for(int j=i;j>=0;j--){
			printf("%d",arr[j]);
		}
		
	 }break;
 	
 	case 3:{
 		
 		int b;
		int arr[10],i=0;
		printf("ENTER DECIMAL NUMBER :");
		scanf("%d",&b);
		int c;
		printf("\nNUMBER IN HEXADECIMAL :");
		while(b>=16){
		c=b%16;
		b=b/16;
		arr[i]=c;
		i++;	
		}
		arr[i]=b;
	
		for(int j=i;j>=0;j--){
			
			if(arr[j]==10){
		      printf("A");		
			}
			
			else if(arr[j]==11){
		      printf("B");		
			}
			else if(arr[j]==12){
		      printf("C");		
			}
			else if(arr[j]==13){
		      printf("D");		
			}
			else if(arr[j]==14){
		      printf("E");		
			}
			else if(arr[j]==15){
		      printf("F");		
			}
			else 
			{
					printf("%d",arr[j]);
				
			}
		}
		
	 }break;
 	
 	
 	case 4:{
 		
 		int b;
		int arr[10],i=0,k=10,l=10;
		printf("ENTER BINARY NUMBER :");
		scanf("%d",&b);
		int c,d=b;
		printf("\nNUMBER IN DECIMAL :");
		
		while(d>1){
		if(k==10){
		c=(b%k);
		d=d/10;
		arr[i]=c;
		i++;
		k=k*10;	
	}
	else
	{
		c=(b%k-b%l)/l;
		arr[i]=c;
	    d=d/10;
		i++;
		k=k*10;	
		l=l*10;
}
		}
		arr[i]=d;
	int sum=0;
			
		for(int j=0;j<=i;j++){
		int b=pow(2,j);	
			sum=sum+(arr[j]*b);
		
		}
printf("%d",sum);
		
	 }break;
 	
 	case 5:{
 		
 		int b;
		int arr[10],i=0,k=10,l=10;
		printf("ENTER OCTAL NUMBER :");
		scanf("%d",&b);
		int c,d=b;
		printf("\nNUMBER IN DECIMAL :");
		
		while(d>8){
		if(k==10){
		c=(b%k);
		d=d/10;
		arr[i]=c;
		i++;
		k=k*10;	
	}
	else
	{
		c=(b%k-b%l)/l;
		arr[i]=c;
	    d=d/10;
		i++;
		k=k*10;	
		l=l*10;
}
		}
		arr[i]=d;
	int sum=0;
			
		for(int j=0;j<=i;j++){
		int b=pow(8,j);	
			sum=sum+(arr[j]*b);
		
		}
printf("%d",sum);
		
	 }break;
 		case 6:{
 			int i=0,j=0;
 		 char a[100];
 		char *p;
		 p=a;
		int b[100]; 
		int ar[100];
		printf("ENTER HEXADECIMAL NUMBER :");
		scanf("%s",&a);
		
		printf("\nNUMBER IN DECIMAL :");
		while(*p!='\0'){
			
			b[i]=(*p);
			p++;
			i++;
			
		}
		int arr1[100];
	//	arr1=atoi(b);
		
		for(int c=0;c<i;c++)
		{
		 	
		  if(b[c]==65||b[c]==97)
		   {
		   	ar[c]=10;
		
		 }  		
          else if(b[c]==66||b[c]==98)
		   {
		   	ar[c]=11;
		 }  		
      	else if(b[c]==67||b[c]==99)
		   {
		   	ar[c]=12;
		 }
		 else if(b[c]==68||b[c]==100)
		   {
		   	ar[c]=13;
		 }
		 else if(b[c]==69||b[c]==101)
		   {
		   	ar[c]=14;
		 }
		 else if(b[c]==70||b[c]==102)
		   {
		   	ar[c]=15;
		 }	
		
		else 
		{
			ar[c]=b[c]-48;
		}
		
	}
		
		int sum=0;
		int chk=i-1,chk1;
		for(int k=0;k<i;k++){
		int b=pow(16,k);	
			if(chk>=0){
			chk1=chk--;
		      
			sum=sum+(ar[chk1]*b);
		
	}
	
		}
printf("%d",sum);
		
		
			
	 }break;
 		
 	case 7:{
 		
 		int b;
		int arr[10],i=0,k=10,l=10;
		printf("ENTER BINARY NUMBER :");
		scanf("%d",&b);
		printf("\nNUMBER IN OCTAL :");
		
		int c,d=b;
		
		while(d>1){
		if(k==10){
		c=(b%k);
		d=d/10;
		arr[i]=c;
		i++;
		k=k*10;	
	}
	else
	{
		c=(b%k-b%l)/l;
		arr[i]=c;
	    d=d/10;
		i++;
		k=k*10;	
		l=l*10;
}
		}
		arr[i]=d;
	int sum=0;
			
		for(int j=0;j<=i;j++){
		int b=pow(2,j);	
			sum=sum+(arr[j]*b);
		
		}
      	
      	int ar[10],q=0;
      	int m;
		  while(sum>=8){
		l=sum%8;
		ar[q]=l;
		
		sum=sum/8;
		q++;	
		
		}
		ar[q]=sum;
	
		for(int j=q;j>=0;j--){
			printf("%d",ar[j]);
		}
	 
       

		
	 }break;
 	
 	
 	case 8:{
 		
 		int b;
		int arr[10],i=0,k=10,l=10;
		printf("ENTER OCTAL NUMBER :");
		scanf("%d",&b);
		printf("NUMBER IN BINARY :");
		int c,d=b;
		while(d>8){
		if(k==10){
		c=(b%k);
		d=d/10;
		arr[i]=c;
		i++;
		k=k*10;	
	}
	else
	{
		c=(b%k-b%l)/l;
		arr[i]=c;
	    d=d/10;
		i++;
		k=k*10;	
		l=l*10;
}
		}
		arr[i]=d;
	int sum=0;
			
		for(int j=0;j<=i;j++){
		int b=pow(8,j);	
			sum=sum+(arr[j]*b);
		
		}
      	int ar[10],q=0;
      	int m;
		  while(sum>1){
		l=sum%2;
		ar[q]=l;
		
		sum=sum/2;
		q++;	
		
		}
		ar[q]=sum;
	
		for(int j=q;j>=0;j--){
			printf("%d",ar[j]);
		}
	 
       



		
	 }break;
 	
 	
 	
 		case 9:{
 			int i=0,j=0;
 		 char a[100];
 		char *p;
		 p=a;
		int b[100]; 
		int ar[100];
		printf("ENTER HEXADECIMAL NUMBER :");
		scanf("%s",&a);
		
		printf("\nNUMBER IN BINARY :");
		while(*p!='\0'){
			
			b[i]=(*p);
			p++;
			i++;
			
		}
		int arr1[100];
	//	arr1=atoi(b);
		
		for(int c=0;c<i;c++)
		{
		 	
		  if(b[c]==65||b[c]==97)
		   {
		   	ar[c]=10;
		
		 }  		
          else if(b[c]==66||b[c]==98)
		   {
		   	ar[c]=11;
		 }  		
      	else if(b[c]==67||b[c]==99)
		   {
		   	ar[c]=12;
		 }
		 else if(b[c]==68||b[c]==100)
		   {
		   	ar[c]=13;
		 }
		 else if(b[c]==69||b[c]==101)
		   {
		   	ar[c]=14;
		 }
		 else if(b[c]==70||b[c]==102)
		   {
		   	ar[c]=15;
		 }	
		
		else 
		{
			ar[c]=b[c]-48;
		}
		
	}
		
		int sum=0;
		int chk=i-1,chk1;
		for(int k=0;k<i;k++){
		int b=pow(16,k);	
			if(chk>=0){
			chk1=chk--;
		      
			sum=sum+(ar[chk1]*b);
		
	}
	
		}
	
		int ar1[200],q=0;
		int l;
      	int m;
		  while(sum>1){
		l=sum%2;
		ar1[q]=l;
		sum=sum/2;
		q++;	
		
		}
		ar1[q]=sum;
	
		for(int j=q;j>=0;j--){
			printf("%d",ar1[j]);
		}
	 
	}break;
 	case 10:{
 		int b;
		int arr[10],i=0,k=10,l=10;
		printf("ENTER BINARY NUMBER :");
		scanf("%d",&b);
		int c,d=b;
		printf("\nNUMBER IN HEXADECIMAL :");
		
		while(d>1){
		if(k==10){
		c=(b%k);
		d=d/10;
		arr[i]=c;
		i++;
		k=k*10;	
	}
	else
	{
		c=(b%k-b%l)/l;
		arr[i]=c;
	    d=d/10;
		i++;
		k=k*10;	
		l=l*10;
}
		}
		arr[i]=d;
	int sum=0;
			
		for(int j=0;j<=i;j++){
		int b=pow(2,j);	
			sum=sum+(arr[j]*b);
		
		}
	

		int arr1[100],j=0;
		int y;
		while(sum>=16){
		y=sum%16;
		sum=sum/16;
		arr1[j]=y;
		j++;	
		}
		arr1[j]=sum;
	
		for(int k=j;k>=0;k--){
			
			if(arr1[k]==10){
		      printf("A");		
			}
			
			else if(arr1[k]==11){
		      printf("B");		
			}
			else if(arr1[k]==12){
		      printf("C");		
			}
			else if(arr1[k]==13){
		      printf("D");		
			}
			else if(arr1[k]==14){
		      printf("E");		
			}
			else if(arr1[k]==15){
		      printf("F");		
			}
			else 
			{
					printf("%d",arr1[k]);
				
			}
		}
		  
	  
	  	 } break;
 	
 	 }

}
