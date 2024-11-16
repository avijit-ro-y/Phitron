#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void func(char x1[],char x2[],char x3[]){
    int l1=strlen(x1);
    int min_number=0;
    for (int i = 0; i <l1 ; i++)
    {
        int f_array[26]={0};
        f_array[x1[i]-'a']+=1;
        f_array[x2[i]-'a']+=1;
        f_array[x3[i]-'a']+=1;

        int max_similar=0;
        for (int j = 0; j < 26; j++)
        {
            if (f_array[j]>max_similar)
            {
                max_similar=f_array[j];
            }
            
        }
        int unique_num=3-max_similar;
        min_number=min_number+unique_num;
    }
    printf("%d",min_number);
}
int main() {
    char s1[1001],s2[1001],s3[1001];
    scanf("%s %s %s",&s1,&s2,&s3);
    func(s1,s2,s3);  
    return 0;
}
