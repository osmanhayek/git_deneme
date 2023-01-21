#include<unistd.h>

int main(int agc,char **agv){
	if(agc==3){
	  int hashmap[96]={0};
	  int i=0;
	  while(agv[1][i]!='\0'){
		  if(hashmap[agv[1][i]-32]==0){
		  	write(1,&agv[1][i],1);
			hashmap[agv[1][i]-32]++;
		  
		  }
		  i++;
			
	  }
	  i=0;
	  while(agv[2][i]!='\0'){
	  	if(hashmap[agv[2][i]-32]==0){
			write(1,&agv[2][i],1);
			hashmap[agv[2][i]-32]++;
		}
		i++;
	  
	  }
	  write(1,"\n",1);
	}
	else write(1,"\n",1);

	return 0;
}
