void user()
{
	int a,b,c=0,i,d=0;
	printf("Computer Input Here");
	printf("\t\t");
	printf("User Input Here");
	printf("\t\t");
	printf("Total\n");
	for(i=0;i<6;i++)
	{
		last:
		srand(time(NULL));
		a=rand()%5;
		if(a==0)
		{
			goto last;
		}
		printf("%d",a);
		End:
		printf("\n\t\t\t\t");
		scanf("%d",&b);
		if(b!=0&&b<5)
		{
			printf("\t\t\t\t\t\t\t");
			c=c+a+b;
			printf("%d\n",c);
			if(c>=15&&c<=21)
			{
				switch(c)
				{
					case 15:
					{
						printf("4");
						printf("\n\t\t\t\t 1\n");
						printf("\t\t\t\t\t\t\t 20\n");
						printf("1\n");
						printf("You Win");
						goto Win;
						break;
					}
					case 16:
					{
						printf("3");
						printf("\n\t\t\t\t 1\n");
						printf("\t\t\t\t\t\t\t 20\n");
						printf("1\n");
						printf("You Win");
						goto Win;
						break;
					}
					case 17:
					{
						printf("2");
						printf("\n\t\t\t\t 1\n");
						printf("\t\t\t\t\t\t\t 20\n");
						printf("1\n");
						printf("You Win");
						goto Win;
						break;
					}
					case 18:
					{
						printf("1");
						printf("\n\t\t\t\t 1\n");
						printf("\t\t\t\t\t\t\t 20\n");
						printf("1\n");
						printf("You Win");
						goto Win;
						break;
					}
					case 19:
					{
						printf("2");
						printf("You Win");
						goto Win;
						break;
					}
					case 20:
					{
						printf("1");
						printf("You Win");
						goto Win;
						break;
					}
					default:
					printf("Wrong Entry\n");
				}
			}
		}
		else 
		{
			printf("Wrong Entry!! Enter Between 1-4");
			goto End;
		}
	}
	Win:
	return 0;
}
