#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100	
	
int main(int argc, char *argv[]){
	int  i;
	char exp[MAX_SIZE];
	int	nr_parenth = 0;
	int nr_brackets = 0;
	int nr_curly = 0;
	
	printf("Input expression: \n");
	scanf("%s", &exp);
	
		while(exp[i] != '\0'){
			
			//for open brackets
			if(exp[i] == '(' )
				nr_parenth++;
			
			// for closed brackets
			else if(exp[i] == ')'){
				nr_parenth--;
				
				if(nr_parenth < 0)
					break;
			}
	
	
			else if(exp[i] == '[' )
				nr_brackets++;
			
			else if(exp[i] == ']'){
				nr_brackets--;
				
				if(nr_brackets < 0)
					break;
			}
			
			else if(exp[i] == '{')
				nr_curly++;
				
			else if(exp[i] == '}'){
				nr_curly--;
				
				if(nr_curly < 0)
					break;
			}
			
			i++;
		}//while
	
	if((nr_parenth == 0 && nr_brackets == 0 && nr_curly == 0) && i == strlen(exp)){
		printf("\nBalanced\n");
	}
	else
		printf("\nUnbalanced\n");
	
	return 0;	
}//main
