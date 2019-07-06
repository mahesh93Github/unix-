int maxtwo(int n1,int n2){
	if(n1>n2)
		return n1;
	else
		return n2;
}

int mintwo(int n1,int n2){
	if(n1<n2)
		return n1;
	else
		return n2;
}

int maxthree(int n1,int n2,int n3){
	if((n1>n2)&&(n1>n3))
		return n1;
	else if((n2>n3)&&(n2>n1))
		return n2;
	else
		return n3;
}

int minthree(int n1,int n2,int n3){
	if((n1<n2)&&(n1<n3))
		return n1;
	else if((n2<n3)&&(n2<n1))
			return n2;
			else 
			return n3;

			}
