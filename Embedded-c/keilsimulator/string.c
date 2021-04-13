void atoi(){
	char a;
        a='1';
        int c= a-48;

	return;
	}

	int Strlen(char X[]){//10
        int i=0;
        for(;X[i]!='\0';i++);
        return i;}

void Strcat(char s1[],char s2[]){
		int n1,n2,i,j;;
		n1=Strlen(s1);
		n2=Strlen(s2);       
        for(i=n1,j=0;i<=n1+n2||j<n2;i++,j++){
										s1[i]=s2[j];}
        }

void Strrev(char s1[]){
        int i,j,n;
				char c;
				n=Strlen(s1);
        for(i=0,j=n-1;i<n/2&&j>=n/2;i++,j--){
				c=s1[i];
				s1[i]=s1[j];
				s1[j]=c;	}
        }

int Strcmp(char s1[],char s2[]){//8
	int i;
	for(i=0;s1[i]!='\0'&&s2[i]!='\0'&&s1[i]==s2[i];i++);
	if(s1[i]==s2[i]) return 0;
	else return (s1[i]-s2[i]);
}

int Strchr(char str[],char ch){
	//char str[20]="kernel masters",ch='r';
	int i,count=0;
	for(i=0;i<=Strlen(str);i++){
		if (str[i]==ch){
			count++;
			break;
		}
	}return i;
}
int Strstr(char str1[],char str2[]){
	int n1,n2,i,j,k,c[8];
	n1=Strlen(str1);n2=Strlen(str2);
	
        for(i=0,k=0;i<n2;i++){//string 2
                for(j=0;j<n1;j++){//string 1
                        if (str2[i]==str1[j]) {c[k]=j; k++; break;}
                }
        }
      if(k==n2) return c[0];
      else return -1;}

int r;
void Strcpy(char s1[],char s3[]){
        int i=r,j=0;
        for(;s3[j]!='\0'||s1[i]!='\0';i++,j++){
        s1[i]=s3[j];}
        return ;}

void Strreplace(char  str1[],char str2[],char str3[]){
	
	r=Strstr(str1,str2);
	Strcpy(str1,str3);
}


int main()
{ 
	int a,b;
	char str1[30]="kernel masters",str2[30]=" masters",str3[30]="embeded";
	int n1=Strlen(str1);
	int n2=Strlen(str2);
	atoi();
	Strreplace(str1,str2,str3);
	a=Strcmp(str2,str3);
	Strrev(str2);
	Strcat(str2,str3);
	b=Strchr(str2,'m');
	return 0;
}

