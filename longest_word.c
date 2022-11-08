#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000
 
 
 
int my_getchar();
void copy(char to[],char from[]);
int get_line(char s[],int lim);
 
int len;
 
int main() {
 
	char line[MAXLINE];
	char longest[MAXLINE];
 
 
	int max = 0;
	int current;
 
	while((len = get_line(line,MAXLINE)))
	{
		current = longest_word(line,len);
 
		if(current > max){
			max = current;
			copy(longest,line);
		}
	}
 
	int r;
	if ((r = printf("size of maximum word = %d string = %s",max,longest)) < 0){
		perror("Printf Error");
		exit(4);
	}
 
}
 
int longest_word(char str[], int size)
{
	char temp[MAXLINE];
	char cur_longest[MAXLINE];
	int i,j,max;
 
	j = 0;
	max = 0;
 
	for(i = 0;i < size;i++){
		temp[j] = str[i];
		j++;
		if(str[i] == '\t' || str[i] == '\n' || str[i] == ' '){
			if(j > max){
				max = j;
				copy(cur_longest,temp);
				j=0;
			}
		}
	}	
	copy(str,cur_longest);
	return max;
}
 
 
int get_line(char s[],int lim)
{
	int i,c;
	for(i=0; i<lim-1 && (c=my_getchar())!=EOF && c!='\n';++i)
		s[i] = c;
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int my_getchar()
{
	int c;
		
	
	if((c = getchar()) == EOF)
	{

		if(ferror(stdin))
		{
			perror("Error indicator is set");
			exit(1);
		}
		if(feof(stdin))
		{
			perror("End-of-file indicator is set");
			exit(3);
		}
		perror("getchar returned EOF when error indicator and end-of-file indicator ARE NOT SET");
		exit(2);
	}
	return c;
}
 
 
 
void copy(char to[],char from[])
{
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
