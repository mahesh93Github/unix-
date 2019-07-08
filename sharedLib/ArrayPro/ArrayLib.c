int returnFirstEven(int *ptr,int len)
{
	int i,Eno;

	for(i=0;i<len;i++)
	{
		if(ptr[i]%2==0)
		{
			Eno=ptr[i];
			break;
		}

	}
	return Eno;
}

int returnMax(int *ptr,int len)
{
	int i,max=ptr[0];
	for(i=0;i<len;i++)
	{
		if(max<ptr[i])
		{
			max=ptr[i];
		}

	}
	return max;
}

int returnmin(int *ptr,int len)
{
	int min=ptr[0],i;
	for(i=0;i<len;i++)
	{
		if(min>ptr[i])
		{
			min=ptr[i];

		}

	}
	return min;
}


int returnDiffML(int *ptr,int len)
{
	int i,Diff,max,min;
	 min=max=ptr[0];
	for(i=0;i<len;i++)
	{
		if(ptr[i]>max)
			max=ptr[i];
		else if(ptr[i]<min)
			min = ptr[i];

	}
	Diff=max-min;
	return Diff;
}

int returnCountNo(int *ptr,int len ,int No)
{
	int i,Count=0;
	for(i=0;i<len;i++)
	{
		if(ptr[i]==No)
		{
			Count++;
		}
	}
	return Count;
}

