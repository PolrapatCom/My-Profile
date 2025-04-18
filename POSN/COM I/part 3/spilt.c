#include<stdio.h>
#include<string.h>
#define mxLen 100
#define mxN 10

char input[mxLen];
char a[mxLen] , b[mxLen];
char spilt_a[mxN][mxLen] , spilt_b[mxN][mxLen];

int main(){

    gets(input);

    int n = strlen(input);

    printf("%d\n" , n);

    int mid = n/2;

    if(n%2 == 0) mid = mid-1;

    printf("%d\n" , mid);

    for(int i=0;i<=mid;i++) a[i] = input[i];
    for(int i=mid+1;i<n;i++) b[i-mid-1] = input[i];

    printf("a = %s\nb = %s\n" , a , b);

    int idx=0 , curr_a=0;

    for(int i=0;a[i]!='\0';i++){
        if(a[i] == ' '){
            printf("%s " , spilt_a[curr_a]);
            curr_a++;
            idx=0;
        }else{
            spilt_a[curr_a][idx] = a[i]; 
            idx++;
        }
    }
    printf("%s \n", spilt_a[curr_a]);

    int curr_b =0 ;
    idx=0;

    for(int i=0;b[i]!='\0';i++){
        if(b[i] == ' '){
            printf("%s " , spilt_b[curr_b]);
            curr_b++;
            idx=0;
        }else{
            spilt_b[curr_b][idx] = b[i]; 
            idx++;
        }
    }
    printf("%s \n\n", spilt_b[curr_b]);

    for(int i=0;i<=curr_a;i++){
        for(int j=0;j<=curr_a;j++){
            char tmp_a[mxLen];
            strcpy(tmp_a , spilt_a[i]);

            char tmp_b[mxLen];
            strcpy(tmp_b , spilt_a[j]);

            for(int l=0;tmp_a[l] != '\0';l++){
                if(tmp_a[l] >= 'A' && tmp_a[l]<='Z') tmp_a[l] += 32;
            }

            for(int l=0;tmp_b[l] != '\0';l++){
                if(tmp_b[l] >= 'A' && tmp_b[l]<='Z') tmp_b[l] += 32;
            }

            if(strcmp(tmp_a , tmp_b) > 0){
                char swp[mxLen];
                strcpy(swp , spilt_a[i]);
                strcpy(spilt_a[i] , spilt_a[j]);
                strcpy(spilt_a[j] , swp);
            }
        }
    }
    
    for(int i=0;i<=curr_b;i++){
        for(int j=0;j<=curr_b;j++){
            char tmp_a[mxLen];
            strcpy(tmp_a , spilt_a[i]);

            char tmp_b[mxLen];
            strcpy(tmp_b , spilt_a[j]);

            for(int l=0;tmp_a[l] != '\0';l++){
                if(tmp_a[l] < 'a') tmp_a[l] -= 32;
            }

            for(int l=0;tmp_b[l] != '\0';l++){
                if(tmp_b[l] < 'a') tmp_b[l] -= 32;
            }

            if(strcmp(tmp_a , tmp_b) < 0){
                char swp[mxLen];
                strcpy(swp , spilt_b[i]);
                strcpy(spilt_b[i] , spilt_b[j]);
                strcpy(spilt_b[j] , swp);
            }
        }
    }

    for(int i=0;i<=curr_a;i++) printf("%s " , spilt_a[i]);
    printf("\n");
    for(int i=0;i<=curr_b;i++) printf("%s " , spilt_b[i]);

    return 0;
}