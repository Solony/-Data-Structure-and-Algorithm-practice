#include<stdlib.h>
#include<stdio.h>
int main(){
	int n, j, count;
	scanf("%d", &n);
	for(j=0; j<n; j++){
		int len;
		scanf("%d", &len);
		char field[len + 1];
		int i;
		for(i=0; i<=len; i++){
			scanf("%c", &field[i]);
			// .#.
			// ...##....##
		}
		i = 0;
		count = 0;
		while(i < len + 1){
			if(field[i] == '.'){
				count += 1;
				i += 3;
			}
			else{
				i++;
			}
		}
		printf("Case %d: %d\n", j+1, count);
	}
	return 0;
} 
