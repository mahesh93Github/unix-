int minimum(int *ptr,int len){
	int i=0;
	int min=ptr[0];
	for(i=0;i<len;i++){
		if(min>ptr[i]){
			min=ptr[i];
		}
	}

return min;
}
