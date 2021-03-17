#include <stdio.h>
#include <stdlib.h>
#define SIZE 900000
struct type{
        char byte1;
        char byte2;
        char byte3;
        char byte4;
        int counter;
};
int main(){
        struct type buffer[SIZE];
        int i=0;
        unsigned char  c;
        unsigned char c2;
        unsigned char c3;
        unsigned char c4;
       c= getchar();
        while((char)c!=EOF ){
                if(c<=127){
                        if(c== buffer[i].byte1)
                        {
                                buffer[i].counter++;
                        }
                        else{
                        buffer[i].byte1 =c;
                        }
                }
                if(c>=192 && c<=223){
                        c2=getchar();
                        if(buffer[i].byte1==c && buffer[i].byte2 ==c2){
                                buffer[i].counter++;
                        }
                        else{
                        buffer[i].byte1 =c;
                        buffer[i].byte2=c2;
                        }
                }
                if(c>=224 && c<=239){
                        c2=getchar();
                        c3=getchar();
                        if(buffer[i].byte1==c && buffer[i].byte2==c2 && buffer[i].byte3==c){
                                buffer[i].counter++;
                        }
                        else{
                        buffer[i].byte1=c;
                        buffer[i].byte2=c2;
                        buffer[i].byte3=getchar();
                }
                }
                if(c>=240 && c<=247){
                        c2=getchar();
                        c3=getchar();
                        c4=getchar();
                        if(buffer[i].byte1==c && buffer[i].byte2==c2 && buffer[i].byte3==c && buffer[i].byte4 ==c){
                        buffer[i].counter++;
                        }
                        else{
                        buffer[i].byte1=c;
                        buffer[i].byte2=c2;
                        buffer[i].byte3=c3;
                        buffer[i].byte4=c4;
                }
                }
                c=getchar();
                i++;
        }
	int j=0;
	while(j<=0){
        printf("%c%c%c%c%d\n",buffer[j].byte1,buffer[j].byte2,buffer[j].byte3,buffer[j].byte4,buffer[j].counter);
	}
        return 0;
}
