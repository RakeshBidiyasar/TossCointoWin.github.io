void computer()
{
	int a,c,d,i,n,b;
	a=c=d=i=n=b=0;
	printf("\n-------------------------------------------------");
	printf("Let's The Game Begin'");
	printf("-------------------------------------------------\n");
	printf("Rules of Game:-\n");
	printf("\tWe have 21 Number over here and the user have to enter the no. between 1 to 4 and The Opponent is Computer\n\n");
	printf("Enter Any Value Between 1-4 Only\n\n");
	printf("User Input Here");
	printf("\t\t");
	printf("Computer");
	printf("\t\t");
	printf("Total\n");
	for(i=0;b!=20;i++)
	{
		scanf("%d",&a);
		if(a!=0&&a<=4)
		{
			n=n+a;//User Value
			c=5-a;//Rajeev Sir Value
			d=d+c;
			b=n+d;
			if(b>=21)
			{
				goto last;
			}
		}
		switch(a)
		{
			case 1:
			{
				printf(" \t\t\t 4\n");
				break;
			}
			case 2:
			{
				printf(" \t\t\t 3\n");
				break;
			}
			case 3:
			{
				printf(" \t\t\t 2\n");
				break;
			}
			case 4:
			{
				printf(" \t\t\t 1\n");
				break;
			}
			default:
				printf("Wrong Entry\n");
		}
		printf("\t\t\t\t\t\t");
		printf("%d\n",b);
	}
	last:
	printf("1\n");
	printf("You Lose Computer Wins");
}
