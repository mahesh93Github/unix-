int maximum(int *ptr,int len){
	int i;
	int max=ptr[0];
	for(i=0;i<len;i++){
		if(max<ptr[i]){
			max=ptr[i];
		}
	}

	return max;
}
