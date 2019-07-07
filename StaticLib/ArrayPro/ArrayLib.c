int EvenNo(int *ptr,int len)
{
	int Eno=0,i;
	for(i=0;i<len;i++)
	{
		if(ptr[i]%2==0)
		{
			Eno++;
		}
	}

	return Eno;
}

int Nigative(int *ptr,int len)
{
	int Nno=0,i;
	for(i=0;i<len;i++)
	{
		if(ptr[i]<0)
		{
			Nno++;
		}

	}
	return Nno;
}

int DiffML(int *ptr,int len)
{
	int i,diff,max,min;
	max=min=ptr[0];
	for(i=0;i<len;i++)
	{
		if(max<ptr[i])
		{
			max=ptr[i];
		}
		else if(min>ptr[i])
		{
			min=ptr[i];
		}

	}
	diff=max-min;
	return diff;
}

int NoOccurance(int *ptr,int len,int no)
{
	int Occ=0,i;
	for(i=0;i<len;i++)
	{
		if(ptr[i]==no)
		{
			Occ++;
		}
	}
	return Occ;
}

int firstOcc(int *ptr,int len ,int no)
{
	int i,Occ;
	for(i=0;i<len;i++)
	{
		if(ptr[i]==no)
		{
			Occ = i;
			break;
		}

	}
	return Occ;
}


int lastOcc(int *ptr,int len ,int no)
{
	int i,Occ;
	for(i=0;i<len;i++)
	{
		if(ptr[i]==no)
		{
			Occ=i;

		}

	}

}
