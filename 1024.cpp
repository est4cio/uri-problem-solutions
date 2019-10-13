#include <stdio.h>
#include <string.h>

void cont(char frase[],int l){
    char temp;
    
    for (int i=0;i<l/2;i++){
        temp=frase[i];
        frase[i]=frase[l-i-1];
        frase[l-i-1]=temp;
    }
}

int main(){
    int n,i,j,l;
    char linha[1001];
    
    scanf("%d",&n);
    std::cin.getline(linha,0);
    for(i = 0; i < n; i++){
        std::cin.getline(linha,1001);    
        for(j = 0; linha[j] != '\0'; j++){
            if(linha[j] >= 65 && linha[j] <= 90 ||  linha[j] >= 97 && linha[j] <= 122){
                linha[j] += 3;
            }
            l=strl(linha);
            cont(linha,len);
        }
        for(j = l/2; linha[j] != '\0'; j++){
            linha[j]--;
        }
        printf("%s\n",linha);              
    } 
    return 0;
}
