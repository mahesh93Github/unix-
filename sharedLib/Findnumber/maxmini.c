
int maximum(int *ptr,int len){
	int max=ptr[0];
	int i;
	for(i=0;i<len;i++){
		if(max<ptr[i]){
			max=ptr[i];
		}

	}
	return max;
}

int minimum(int *ptr,int len)
{
	int mini=ptr[0];
	int i;
	for(i=0;i<len;i++)
	{
		if(mini>ptr[i])
		{
			mini=ptr[i];

		}

	}

	return mini;
}
