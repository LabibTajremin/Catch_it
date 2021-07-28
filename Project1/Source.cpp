#include"iGraphics.h"
#include<stdlib.h>
#include<stdlib.h>
#include<time.h>

int i,j,temp;
int imagex=0;
int imagey=0;
int ballx=rand()%1080,ballx1=rand()%1080,ballx2=rand()%1080,ballx3=rand()%1080,ballx4=rand()%1080,ballx5=rand()%1080,ballx6=rand()%1080,ballx7=rand()%1080,ballx8=rand()%1080,ballx9=rand()%1080,ballx10=rand()%1080;
int bally=980,bally1=1377,bally2=2277,bally3=3177,bally4=4077,bally5=4977,bally6=5877,bally7=6777,bally8=7677,bally9=8577,bally10=9477;
int sqrex=rand()%1080,sqrex1=rand()%1080,sqrex2=rand()%1080,sqrex3=rand()%1080,sqrex4=rand()%1080;
int sqrey=8000,sqrey1=2488,sqrey2=5555,sqrey3=4288,sqrey4=6875;
int trnglx1=rand()%1080,trnglx2=rand()%1080,trnglx3=rand()%1080,trnglx4=rand()%1080,trnglx5=rand()%1080;
int trngly1=7500,trngly2=2600,trngly3=5700,trngly4=4400,trngly5=7000;
int tflag1=0,tflag5=0,tflag2=0,tflag3=0,tflag4=0;
int sflag1=0,sflag2=0,sflag3=0,sflag4=0,sflag=0;
int score=0,full=0,life=0,sfl=0;
char ch[10],nu[10],ju[10];
int level=0,level1=1,t=101;
int flag=0,flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag6=0,flag7=0,flag8=0,flag9=0,flag10=0;
int musicon=1;
int ar[11],br[11],timer=0;



void timef()
{
	if(level==17)
	{
	t--;
	}
}
void timetravel()
{
	if(level==17)
	{
		if(t==0)
		{
				
					br[10]=score;
					
					FILE *ct;
					ct=fopen("time.txt","w");
	
					for(i=0;i<11;i++)
					{
						for(j=i;j<11;j++)
						{
							if(br[i]<br[j])
							{
								temp=br[i];
								br[i]=br[j];
								br[j]=temp;
							}
						}
					}
					for(i=0;i<10;i++)
					{
					 fprintf(ct,"%d\n",br[i]);
					}
					fclose(ct);	
					level=18;
					score=0;
					t=101;
		}

		if((bally>=imagey+69 && bally<=imagey+71 ) && (ballx>=imagex && ballx <= imagex+128))
		{
			score+=2;
		}
		
		if((bally1>=imagey+69 && bally1<=imagey+71 ) && (ballx1>=imagex && ballx1<= imagex+128))
		{
			score+=2;
		}
	
		if((bally2>=imagey+69 && bally2<=imagey+71 ) && (ballx2>=imagex && ballx2<= imagex+128))
		{
			score+=2;
		}
		
		if((bally3>=imagey+69 && bally3<=imagey+71 ) && (ballx3>=imagex && ballx3<= imagex+128))
		{
			score+=2;
		}
		
		if((bally4>=imagey+69 && bally4<=imagey+71 ) && (ballx4>=imagex && ballx4<= imagex+128))
		{
			score+=2;
		}
		
		if((bally5>=imagey+69 && bally5<=imagey+71 ) && (ballx5>=imagex && ballx5<= imagex+128))
		{
			score+=2;
		}
		
		if((bally6>=imagey+69 && bally6<=imagey+71 ) && (ballx6>=imagex && ballx6<= imagex+128))
		{
			score+=2;
		}
		
		if((bally7>=imagey+69 && bally7<=imagey+71 ) && (ballx7>=imagex && ballx7<= imagex+128))
		{
			score+=2;
		}
		
		if((bally8>=imagey+69 && bally8<=imagey+71 ) && (ballx8>=imagex && ballx8<= imagex+128))
		{
			score+=2;
		}
		
		if((bally9>=imagey+69 && bally9<=imagey+71 ) && (ballx9>=imagex && ballx9<= imagex+128))
		{
			score+=2;
		}
		
		if((bally10>=imagey+69 && bally10<=imagey+72 ) && (ballx10>=imagex && ballx10<= imagex+128))
		{
			score+=2;
		}
		if((sqrey>=imagey+65 && sqrey<=imagey+71 ) && (sqrex>=imagex && sqrex<= imagex+128))
		{
			score+=4;
		}
		if((sqrey1>=imagey+65 && sqrey1<=imagey+71 ) && (sqrex1>=imagex && sqrex1<= imagex+128))
		{
			score+=4;
		}
		if((sqrey2>=imagey+65 && sqrey2<=imagey+71 ) && (sqrex2>=imagex && sqrex2<= imagex+128))
		{
			score+=4;
		}
		if((sqrey3>=imagey+65 && sqrey3<=imagey+71 ) && (sqrex3>=imagex && sqrex3<= imagex+128))
		{
			score+=4;
		}
		if((sqrey4>=imagey+65 && sqrey4<=imagey+71 ) && (sqrex4>=imagex && sqrex4<= imagex+128))
		{
			score+=4;
		}
		if((trngly5>=imagey+65 && trngly5<=imagey+71 ) && (trnglx5>=imagex && trnglx5<= imagex+128))
		{
			score+=3;
		}
		if((trngly4>=imagey+65 && trngly4<=imagey+71 ) && (trnglx4>=imagex && trnglx4<= imagex+128))
		{
			score+=3;
		}
		if((trngly3>=imagey+65 && trngly3<=imagey+71 ) && (trnglx3>=imagex && trnglx3<= imagex+128))
		{
			score+=3;
		}
		if((trngly2>=imagey+65 && trngly2<=imagey+71 ) && (trnglx2>=imagex && trnglx2<= imagex+128))
		{
			score+=3;
		}
		if((trngly1>=imagey+65 && trngly1<=imagey+71 ) && (trnglx1>=imagex && trnglx1<= imagex+128))
		{
			score+=3;
		}
		if(trngly1>60)
		{
			if(trnglx1<=1080 && tflag1==0)
			{
				trngly1-=5;
				trnglx1-=5;
				if(trnglx1<=6)
				{
					trnglx1+=6;
					tflag1=1;
				}
			}
			if(trnglx1>0 && tflag1==1)
			{
				trngly1-=5;
				trnglx1+=5;
				if(trnglx1>=1075)
				{
					trnglx1-=6;
					tflag1=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly1=20000;
			}
		if(trngly2>60)
			{
				if(trnglx2<=1080 && tflag2==0)
				{
					trngly2-=5;
					trnglx2+=5;
					if(trnglx2>=1080-37)
					{
						trnglx2-=5;
						tflag2=1;
					}
				}
			if(trnglx2>=0 && tflag2==1)
			{
				trnglx2-=5;
				trngly2-=5;
				if(trnglx2<=5+32)
				{
					trnglx2+=5;
					tflag2=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly2=30000;
			}
		if(trngly3>60)
			{
				if(trnglx3<=1080 && tflag3==0)
				{
					trngly3-=5;
					trnglx3+=5;
					if(trnglx3>=1080-37)
					{
						trnglx3-=5;
						tflag3=1;
					}
				}
			if(trnglx3>=0 && tflag3==1)
			{
				trnglx3-=5;
				trngly3-=5;
				if(trnglx3<=5+32)
				{
					trnglx3+=5;
					tflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly3=40000;
			}
		if(trngly4>60)
		{
			if(trnglx4<=1080 && tflag1==0)
			{
				trngly4-=5;
				trnglx4-=5;
				if(trnglx4<=6)
				{
					trnglx4+=6;
					tflag4=1;
				}
			}
			if(trnglx4>0 && tflag4==1)
			{
				trngly4-=5;
				trnglx4+=5;
				if(trnglx4>=1075)
				{
					trnglx4-=6;
					tflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly4=50000;
			}
		if(trngly5>60)
		{
			if(trnglx5<=1080 && tflag1==0)
			{
				trngly5-=5;
				trnglx5-=5;
				if(trnglx5<=6)
				{
					trnglx5+=6;
					tflag5=1;
				}
			}
			if(trnglx5>0 && tflag5==1)
			{
				trngly5-=5;
				trnglx5+=5;
				if(trnglx5>=1075)
				{
					trnglx5-=6;
					tflag5=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly5=50000;
			}
		if(sqrey>60)
		{
			if(sqrex<=1080 && sflag==0)
			{
				sqrey-=5;
				sqrex-=5;
				if(sqrex<=6)
				{
					sqrex+=6;
					sflag=1;
				}
			}
			if(sqrex>0 && sflag==1)
			{
				sqrey-=5;
				sqrex+=5;
				if(sqrex>=1075)
				{
					sqrex-=6;
					sflag=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey=10586;
			}

		if(sqrey1>60)
			{
				if(sqrex1<=1080 && sflag1==0)
				{
					sqrey1-=5;
					sqrex1+=5;
					if(sqrex1>=1080-37)
					{
						sqrex1-=5;
						sflag1=1;
					}
				}
			if(sqrex1>=0 && sflag1==1)
			{
				sqrex1-=5;
				sqrey1-=5;
				if(sqrex1<=5+32)
				{
					sqrex1+=5;
					sflag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey1=20000;
			}

		if(sqrey2>60)
		{
			if(sqrex2<=1080 && sflag2==0)
			{
				sqrey2-=5;
				sqrex2-=5;
				if(sqrex2<=6)
				{
					sqrex2+=6;
					sflag2=1;
				}
			}
			if(sqrex2>0 && sflag2==1)
			{
				sqrey2-=5;
				sqrex2+=5;
				if(sqrex2>=1075)
				{
					sqrex2-=6;
					sflag2=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey2=30000;
			}
		if(sqrey3>60)
			{
				if(sqrex3<=1080 && sflag3==0)
				{
					sqrey3-=5;
					sqrex3+=5;
					if(sqrex3>=1074)
					{
						sqrex3-=5;
						sflag3=1;
					}
				}
			if(sqrex3>=0 && sflag3==1)
			{
				sqrex3-=5;
				sqrey3-=5;
				if(sqrex3<=5)
				{
					sqrex3+=5;
					sflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey3=40000;
			}
		if(sqrey4>60)
		{
			if(sqrex4<=1080 && sflag4==0)
			{
				sqrey4-=5;
				sqrex4-=5;
				if(sqrex4<=6)
				{
					sqrex4+=6;
					sflag4=1;
				}
			}
			if(sqrex4>0 && sflag4==1)
			{
				sqrey4-=5;
				sqrex4+=5;
				if(sqrex4>=1075)
				{
					sqrex4-=6;
					sflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey4=50000;
			}

			if(bally>60)
			{
				if(ballx<=1080 && flag==0)
				{
					bally-=3;
					ballx-=5;
					if(ballx<=6)
					{
						ballx+=6;
						flag=1;
					}
				}
				if(ballx>0 && flag==1)
				{
					bally-=3;
					ballx+=5;
					if(ballx>=1075)
					{
						ballx-=6;
						flag=0;
					}
				}	
			}
			else
			{
				full+=2;
				bally=980;
			}
			if(bally1>60)
			{
				if(ballx1<=1080 && flag1==0)
				{
					bally1-=3;
					ballx1+=5;
					if(ballx1>=1074)
					{
						ballx1-=5;
						flag1=1;
					}
				}
			if(ballx1>=0 && flag1==1)
			{
				ballx1-=5;
				bally1-=3;
				if(ballx1<=5)
				{
					ballx1+=5;
					flag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				bally1=1377;
			}
			if(bally2>60)
			{
				if(ballx2<=1080 && flag2==0)
				{
					bally2-=3;
					ballx2-=4;
					if(ballx2<=4)
					{
					ballx2+=4;
					flag2=1;
					}
				}
			if(ballx2>0 && flag2==1)
			{
				bally2-=3;
				ballx2+=4;
				if(ballx2>=1076)
				{
					ballx2-=6;
					flag2=0;
				}
			}
		}
			else
			{
			
				full+=2;
				bally2=2277;
			}
			if(bally3>60)
			{
				if(ballx3<=1080 && flag3==0)
				{
					bally3-=3;
					ballx3+=5;
					if(ballx3>=1074)
					{
						ballx3-=5;
						flag3=1;
					}

				}
				if(ballx3>=0 && flag3==1)
				{
					ballx3-=5;
					bally3-=3;
					if(ballx3<=5)
					{
						ballx3+=5;
						flag3=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally3=3177;
			}
			if(bally4>60)
			{
			bally4-=3;
			}
			else
			{
				full+=2;
				bally4=4077;
				ballx4=rand()%1070;
			}
			if(bally5>60)
			{
				if(ballx5<=1080 && flag5==0)
				{
					bally5-=3;
					ballx5-=4;
					if(ballx5<=4)
					{
					ballx5+=4;
					flag5=1;
					}
				}
				if(ballx5>0 && flag5==1)
				{
					bally5-=3;
					ballx5+=4;
					if(ballx5>=1076)
					{
						ballx5-=6;
						flag5=0;
					}
				}
			}
			else
			{
				full+=2;
				bally5=4977;
			}
			if(bally6>60)
			{
				if(ballx6<=1080 && flag6==0)
				{
					bally6-=3;
					ballx6+=5;
					if(ballx6>=1074)
					{
						ballx6-=5;
						flag6=1;
					}

				}
				if(ballx6>=0 && flag6==1)
				{
					ballx6-=5;
					bally6-=3;
					if(ballx6<=5)
					{
						ballx6+=5;
						flag6=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally6=5877;
			}
			if(bally7>60)
			{
			bally7-=3;
			}
			else
			{
				full+=2;
				bally7=6777;
				ballx7=rand()%1070;
			}
			if(bally8>60)
			{
				if(ballx8<=1080 && flag8==0)
				{
					bally8-=3;
					ballx8-=4;
					if(ballx8<=4)
					{
					ballx8+=4;
					flag8=1;
					}
				}
			if(ballx8>0 && flag8==1)
			{
				bally8-=3;
				ballx8+=4;
				if(ballx8>=1076)
				{
					ballx8-=6;
					flag8=0;
				}
			}
			}
			else
			{
				full+=2;
				bally8=7677;
			}
			if(bally9>60)
			{
				if(ballx9<=1080 && flag9==0)
				{
					bally9-=3;
					ballx9-=4;
					if(ballx9<=4)
					{
					ballx9+=4;
					flag9=1;
					}
				}
			if(ballx9>0 && flag9==1)
			{
				bally9-=3;
				ballx9+=4;
				if(ballx9>=1076)
				{
					ballx9-=6;
					flag9=0;
				}
			}
			
			}
			else
			{
				full+=2;
				bally9=8577;
			}
			if(bally10>60)
			{
			bally10-=3;
			}
			else
			{
				full+=2;
				bally10=9477;
				ballx10=rand()%1070;
			}
	}
}
void balldrop()

{
	if(level1==1 && level==2)
	{
		if(level==2)
		{
			if(full==60)
			{
				if(score>=50)
				{
					level = 11;
		
				}
				else
				{
					level = 12;
					ar[10]=score;
					printf(" \n\n %d\n\n",ar[i]);
					FILE *cn;
					cn=fopen("normal.txt","w");
	
					for(i=0;i<11;i++)
					{
						for(j=i;j<11;j++)
						{
							if(ar[i]<ar[j])
							{
								temp=ar[i];
								ar[i]=ar[j];
								ar[j]=temp;
							}
						}
					}
					for(i=0;i<11;i++)
					 fprintf(cn,"%d\n",ar[i]);
					fclose(cn);									

				}
			}
		}
		if((bally==imagey+70 || bally==imagey+71 ) && (ballx>=imagex && ballx <= imagex+128))
		{
			score+=2;
		}
		
		if((bally1==imagey+70 || bally1==imagey+71 ) && (ballx1>=imagex && ballx1<= imagex+128))
		{
			score+=2;
		}
	
		if((bally2==imagey+70 || bally2==imagey+71 ) && (ballx2>=imagex && ballx2<= imagex+128))
		{
			score+=2;
		}
		
		if((bally3==imagey+70 || bally3==imagey+71 ) && (ballx3>=imagex && ballx3<= imagex+128))
		{
			score+=2;
		}
		
		if((bally4==imagey+70 || bally4==imagey+71 ) && (ballx4>=imagex && ballx4<= imagex+128))
		{
			score+=2;
		}
		
		if((bally5==imagey+70 || bally5==imagey+71 ) && (ballx5>=imagex && ballx5<= imagex+128))
		{
			score+=2;
		}
		
		if((bally6==imagey+70 || bally6==imagey+71 ) && (ballx6>=imagex && ballx6<= imagex+128))
		{
			score+=2;
		}
		
		if((bally7==imagey+70 || bally7==imagey+71 ) && (ballx7>=imagex && ballx7<= imagex+128))
		{
			score+=2;
		}
		
		if((bally8==imagey+70 || bally8==imagey+71 ) && (ballx8>=imagex && ballx8<= imagex+128))
		{
			score+=2;
		}
		
		if((bally9==imagey+70 || bally9==imagey+71 ) && (ballx9>=imagex && ballx9<= imagex+128))
		{
			score+=2;
		}
		
		if((bally10==imagey+71 || bally10==imagey+72 ) && (ballx10>=imagex && ballx10<= imagex+128))
		{
			score+=2;
		}
		if((sqrey>=imagey+66 && sqrey<=imagey+71 ) && (sqrex>=imagex && sqrex<= imagex+128))
		{
			score+=4;
		}
		if((sqrey1>=imagey+66 && sqrey1<=imagey+71 ) && (sqrex1>=imagex && sqrex1<= imagex+128))
		{
			score+=4;
		}
		if((sqrey2>=imagey+66 && sqrey2<=imagey+71 ) && (sqrex2>=imagex && sqrex2<= imagex+128))
		{
			score+=4;
		}
		if((sqrey3>=imagey+66 && sqrey3<=imagey+71 ) && (sqrex3>=imagex && sqrex3<= imagex+128))
		{
			score+=4;
		}
		if((sqrey4>=imagey+66 && sqrey4<=imagey+71 ) && (sqrex4>=imagex && sqrex4<= imagex+128))
		{
			score+=4;
		}
		if((trngly5>=imagey+66 && trngly5<=imagey+71 ) && (trnglx5>=imagex && trnglx5<= imagex+128))
		{
			score+=4;
		}
		if((trngly4>=imagey+66 && trngly4<=imagey+71 ) && (trnglx4>=imagex && trnglx4<= imagex+128))
		{
			score+=3;
		}
		if((trngly3>=imagey+66 && trngly3<=imagey+71 ) && (trnglx3>=imagex && trnglx3<= imagex+128))
		{
			score+=3;
		}
		if((trngly2>=imagey+66 && trngly2<=imagey+71 ) && (trnglx2>=imagex && trnglx2<= imagex+128))
		{
			score+=3;
		}
		if((trngly1>=imagey+66 && trngly1<=imagey+71 ) && (trnglx1>=imagex && trnglx1<= imagex+128))
		{
			score+=3;
		}
		if(trngly1>60)
		{
			if(trnglx1<=1080 && tflag1==0)
			{
				trngly1-=4;
				trnglx1-=5;
				if(trnglx1<=6)
				{
					trnglx1+=6;
					tflag1=1;
				}
			}
			if(trnglx1>0 && tflag1==1)
			{
				trngly1-=4;
				trnglx1+=5;
				if(trnglx1>=1075)
				{
					trnglx1-=6;
					tflag1=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly1=20000;
			}
		if(trngly2>60)
			{
				if(trnglx2<=1080 && tflag2==0)
				{
					trngly2-=4;
					trnglx2+=5;
					if(trnglx2>=1080-37)
					{
						trnglx2-=5;
						tflag2=1;
					}
				}
			if(trnglx2>=0 && tflag2==1)
			{
				trnglx2-=5;
				trngly2-=4;
				if(trnglx2<=5+32)
				{
					trnglx2+=5;
					tflag2=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly2=30000;
			}
		if(trngly3>60)
			{
				if(trnglx3<=1080 && tflag3==0)
				{
					trngly3-=4;
					trnglx3+=5;
					if(trnglx3>=1080-37)
					{
						trnglx3-=5;
						tflag3=1;
					}
				}
			if(trnglx3>=0 && tflag3==1)
			{
				trnglx3-=5;
				trngly3-=4;
				if(trnglx3<=5+32)
				{
					trnglx3+=5;
					tflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly3=40000;
			}
		if(trngly4>60)
		{
			if(trnglx4<=1080 && tflag1==0)
			{
				trngly4-=4;
				trnglx4-=5;
				if(trnglx4<=6)
				{
					trnglx4+=6;
					tflag4=1;
				}
			}
			if(trnglx4>0 && tflag4==1)
			{
				trngly4-=4;
				trnglx4+=5;
				if(trnglx4>=1075)
				{
					trnglx4-=6;
					tflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly4=50000;
			}
		if(trngly5>60)
		{
			if(trnglx5<=1080 && tflag1==0)
			{
				trngly5-=4;
				trnglx5-=5;
				if(trnglx5<=6)
				{
					trnglx5+=6;
					tflag5=1;
				}
			}
			if(trnglx5>0 && tflag5==1)
			{
				trngly5-=4;
				trnglx5+=5;
				if(trnglx5>=1075)
				{
					trnglx5-=6;
					tflag5=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly5=50000;
			}
		if(sqrey>60)
		{
			if(sqrex<=1080 && sflag==0)
			{
				sqrey-=4;
				sqrex-=5;
				if(sqrex<=6)
				{
					sqrex+=6;
					sflag=1;
				}
			}
			if(sqrex>0 && sflag==1)
			{
				sqrey-=4;
				sqrex+=5;
				if(sqrex>=1075)
				{
					sqrex-=6;
					sflag=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey=10586;
			}

		if(sqrey1>60)
			{
				if(sqrex1<=1080 && sflag1==0)
				{
					sqrey1-=4;
					sqrex1+=5;
					if(sqrex1>=1080-37)
					{
						sqrex1-=5;
						sflag1=1;
					}
				}
			if(sqrex1>=0 && sflag1==1)
			{
				sqrex1-=5;
				sqrey1-=4;
				if(sqrex1<=5+32)
				{
					sqrex1+=5;
					sflag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey1=20000;
			}

		if(sqrey2>60)
		{
			if(sqrex2<=1080 && sflag2==0)
			{
				sqrey2-=4;
				sqrex2-=5;
				if(sqrex2<=6)
				{
					sqrex2+=6;
					sflag2=1;
				}
			}
			if(sqrex2>0 && sflag2==1)
			{
				sqrey2-=4;
				sqrex2+=5;
				if(sqrex2>=1075)
				{
					sqrex2-=6;
					sflag2=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey2=30000;
			}
		if(sqrey3>60)
			{
				if(sqrex3<=1080 && sflag3==0)
				{
					sqrey3-=4;
					sqrex3+=5;
					if(sqrex3>=1074)
					{
						sqrex3-=5;
						sflag3=1;
					}
				}
			if(sqrex3>=0 && sflag3==1)
			{
				sqrex3-=5;
				sqrey3-=4;
				if(sqrex3<=5)
				{
					sqrex3+=5;
					sflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey3=40000;
			}
		if(sqrey4>60)
		{
			if(sqrex4<=1080 && sflag4==0)
			{
				sqrey4-=4;
				sqrex4-=5;
				if(sqrex4<=6)
				{
					sqrex4+=6;
					sflag4=1;
				}
			}
			if(sqrex4>0 && sflag4==1)
			{
				sqrey4-=4;
				sqrex4+=5;
				if(sqrex4>=1075)
				{
					sqrex4-=6;
					sflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey4=50000;
			}

			if(bally>60)
			{
				if(ballx<=1080 && flag==0)
				{
					bally-=2;
					ballx-=5;
					if(ballx<=6)
					{
						ballx+=6;
						flag=1;
					}
				}
				if(ballx>0 && flag==1)
				{
					bally-=2;
					ballx+=5;
					if(ballx>=1075)
					{
						ballx-=6;
						flag=0;
					}
				}	
			}
			else
			{
				full+=2;
				bally=980;
			}
			if(bally1>60)
			{
				if(ballx1<=1080 && flag1==0)
				{
					bally1-=2;
					ballx1+=5;
					if(ballx1>=1074)
					{
						ballx1-=5;
						flag1=1;
					}
				}
			if(ballx1>=0 && flag1==1)
			{
				ballx1-=5;
				bally1-=2;
				if(ballx1<=5)
				{
					ballx1+=5;
					flag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				bally1=1377;
			}
			if(bally2>60)
			{
				if(ballx2<=1080 && flag2==0)
				{
					bally2-=2;
					ballx2-=4;
					if(ballx2<=4)
					{
					ballx2+=4;
					flag2=1;
					}
				}
			if(ballx2>0 && flag2==1)
			{
				bally2-=2;
				ballx2+=4;
				if(ballx2>=1076)
				{
					ballx2-=6;
					flag2=0;
				}
			}
		}
			else
			{
			
				full+=2;
				bally2=2277;
			}
			if(bally3>60)
			{
				if(ballx3<=1080 && flag3==0)
				{
					bally3-=2;
					ballx3+=5;
					if(ballx3>=1074)
					{
						ballx3-=5;
						flag3=1;
					}

				}
				if(ballx3>=0 && flag3==1)
				{
					ballx3-=5;
					bally3-=2;
					if(ballx3<=5)
					{
						ballx3+=5;
						flag3=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally3=3177;
			}
			if(bally4>60)
			{
			bally4-=2;
			}
			else
			{
				full+=2;
				bally4=4077;
				ballx4=rand()%1080;
			}
			if(bally5>60)
			{
				if(ballx5<=1080 && flag5==0)
				{
					bally5-=2;
					ballx5-=4;
					if(ballx5<=4)
					{
					ballx5+=4;
					flag5=1;
					}
				}
				if(ballx5>0 && flag5==1)
				{
					bally5-=2;
					ballx5+=4;
					if(ballx5>=1076)
					{
						ballx5-=6;
						flag5=0;
					}
				}
			}
			else
			{
				full+=2;
				bally5=4977;
			}
			if(bally6>60)
			{
				if(ballx6<=1080 && flag6==0)
				{
					bally6-=2;
					ballx6+=5;
					if(ballx6>=1074)
					{
						ballx6-=5;
						flag6=1;
					}

				}
				if(ballx6>=0 && flag6==1)
				{
					ballx6-=5;
					bally6-=2;
					if(ballx6<=5)
					{
						ballx6+=5;
						flag6=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally6=5877;
			}
			if(bally7>60)
			{
			bally7-=2;
			}
			else
			{
				full+=2;
				bally7=6777;
				ballx7=rand()%1080;
			}
			if(bally8>60)
			{
				if(ballx8<=1080 && flag8==0)
				{
					bally8-=2;
					ballx8-=4;
					if(ballx8<=4)
					{
					ballx8+=4;
					flag8=1;
					}
				}
			if(ballx8>0 && flag8==1)
			{
				bally8-=2;
				ballx8+=4;
				if(ballx8>=1076)
				{
					ballx8-=6;
					flag8=0;
				}
			}
			}
			else
			{
				full+=2;
				bally8=7677;
			}
			if(bally9>60)
			{
				if(ballx9<=1080 && flag9==0)
				{
					bally9-=2;
					ballx9-=4;
					if(ballx9<=4)
					{
					ballx9+=4;
					flag9=1;
					}
				}
			if(ballx9>0 && flag9==1)
			{
				bally9-=2;
				ballx9+=4;
				if(ballx9>=1076)
				{
					ballx9-=6;
					flag9=0;
				}
			}
			
			}
			else
			{
				full+=2;
				bally9=8577;
			}
			if(bally10>60)
			{
			bally10-=2;
			}
			else
			{
				full+=2;
				bally10=9477;
				ballx10=rand()%1080;
			}
	}
	if(level1==2 && level==2)
	{
		if(level==2)
		{
			if(full==90)
			{
				if(score>=165)
				{
					level = 11;
		
				}
				else
				{
					level = 12;
					ar[10]=score;
				
					FILE *cn;
					cn=fopen("normal.txt","w");
	
					for(i=0;i<11;i++)
					{
						for(j=i;j<11;j++)
						{
							if(ar[i]<ar[j])
							{
								temp=ar[i];
								ar[i]=ar[j];
								ar[j]=temp;
							}
						}
					}
					for(i=0;i<10;i++)
					 fprintf(cn,"%d\n",ar[i]);
					fclose(cn);	
				}
			}
		}
		if((bally>=imagey+69 && bally<=imagey+71 ) && (ballx>=imagex && ballx <= imagex+128))
		{
			score+=2;
		}
		
		if((bally1>=imagey+69 && bally1<=imagey+71 ) && (ballx1>=imagex && ballx1<= imagex+128))
		{
			score+=2;
		}
	
		if((bally2>=imagey+69 && bally2<=imagey+71 ) && (ballx2>=imagex && ballx2<= imagex+128))
		{
			score+=2;
		}
		
		if((bally3>=imagey+69 && bally3<=imagey+71 ) && (ballx3>=imagex && ballx3<= imagex+128))
		{
			score+=2;
		}
		
		if((bally4>=imagey+69 && bally4<=imagey+71 ) && (ballx4>=imagex && ballx4<= imagex+128))
		{
			score+=2;
		}
		
		if((bally5>=imagey+69 && bally5<=imagey+71 ) && (ballx5>=imagex && ballx5<= imagex+128))
		{
			score+=2;
		}
		
		if((bally6>=imagey+69 && bally6<=imagey+71 ) && (ballx6>=imagex && ballx6<= imagex+128))
		{
			score+=2;
		}
		
		if((bally7>=imagey+69 && bally7<=imagey+71 ) && (ballx7>=imagex && ballx7<= imagex+128))
		{
			score+=2;
		}
		
		if((bally8>=imagey+69 && bally8<=imagey+71 ) && (ballx8>=imagex && ballx8<= imagex+128))
		{
			score+=2;
		}
		
		if((bally9>=imagey+69 && bally9<=imagey+71 ) && (ballx9>=imagex && ballx9<= imagex+128))
		{
			score+=2;
		}
		
		if((bally10>=imagey+69 && bally10<=imagey+72 ) && (ballx10>=imagex && ballx10<= imagex+128))
		{
			score+=2;
		}
		if((sqrey>=imagey+65 && sqrey<=imagey+71 ) && (sqrex>=imagex && sqrex<= imagex+128))
		{
			score+=4;
		}
		if((sqrey1>=imagey+65 && sqrey1<=imagey+71 ) && (sqrex1>=imagex && sqrex1<= imagex+128))
		{
			score+=4;
		}
		if((sqrey2>=imagey+65 && sqrey2<=imagey+71 ) && (sqrex2>=imagex && sqrex2<= imagex+128))
		{
			score+=4;
		}
		if((sqrey3>=imagey+65 && sqrey3<=imagey+71 ) && (sqrex3>=imagex && sqrex3<= imagex+128))
		{
			score+=4;
		}
		if((sqrey4>=imagey+65 && sqrey4<=imagey+71 ) && (sqrex4>=imagex && sqrex4<= imagex+128))
		{
			score+=4;
		}
		if((trngly5>=imagey+65 && trngly5<=imagey+71 ) && (trnglx5>=imagex && trnglx5<= imagex+128))
		{
			score+=3;
		}
		if((trngly4>=imagey+65 && trngly4<=imagey+71 ) && (trnglx4>=imagex && trnglx4<= imagex+128))
		{
			score+=3;
		}
		if((trngly3>=imagey+65 && trngly3<=imagey+71 ) && (trnglx3>=imagex && trnglx3<= imagex+128))
		{
			score+=3;
		}
		if((trngly2>=imagey+65 && trngly2<=imagey+71 ) && (trnglx2>=imagex && trnglx2<= imagex+128))
		{
			score+=3;
		}
		if((trngly1>=imagey+65 && trngly1<=imagey+71 ) && (trnglx1>=imagex && trnglx1<= imagex+128))
		{
			score+=3;
		}
		if(trngly1>60)
		{
			if(trnglx1<=1080 && tflag1==0)
			{
				trngly1-=5;
				trnglx1-=5;
				if(trnglx1<=6)
				{
					trnglx1+=6;
					tflag1=1;
				}
			}
			if(trnglx1>0 && tflag1==1)
			{
				trngly1-=5;
				trnglx1+=5;
				if(trnglx1>=1075)
				{
					trnglx1-=6;
					tflag1=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly1=20000;
			}
		if(trngly2>60)
			{
				if(trnglx2<=1080 && tflag2==0)
				{
					trngly2-=5;
					trnglx2+=5;
					if(trnglx2>=1080-37)
					{
						trnglx2-=5;
						tflag2=1;
					}
				}
			if(trnglx2>=0 && tflag2==1)
			{
				trnglx2-=5;
				trngly2-=5;
				if(trnglx2<=5+32)
				{
					trnglx2+=5;
					tflag2=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly2=30000;
			}
		if(trngly3>60)
			{
				if(trnglx3<=1080 && tflag3==0)
				{
					trngly3-=5;
					trnglx3+=5;
					if(trnglx3>=1080-37)
					{
						trnglx3-=5;
						tflag3=1;
					}
				}
			if(trnglx3>=0 && tflag3==1)
			{
				trnglx3-=5;
				trngly3-=5;
				if(trnglx3<=5+32)
				{
					trnglx3+=5;
					tflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly3=40000;
			}
		if(trngly4>60)
		{
			if(trnglx4<=1080 && tflag1==0)
			{
				trngly4-=5;
				trnglx4-=5;
				if(trnglx4<=6)
				{
					trnglx4+=6;
					tflag4=1;
				}
			}
			if(trnglx4>0 && tflag4==1)
			{
				trngly4-=5;
				trnglx4+=5;
				if(trnglx4>=1075)
				{
					trnglx4-=6;
					tflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly4=50000;
			}
		if(trngly5>60)
		{
			if(trnglx5<=1080 && tflag1==0)
			{
				trngly5-=5;
				trnglx5-=5;
				if(trnglx5<=6)
				{
					trnglx5+=6;
					tflag5=1;
				}
			}
			if(trnglx5>0 && tflag5==1)
			{
				trngly5-=5;
				trnglx5+=5;
				if(trnglx5>=1075)
				{
					trnglx5-=6;
					tflag5=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly5=50000;
			}
		if(sqrey>60)
		{
			if(sqrex<=1080 && sflag==0)
			{
				sqrey-=5;
				sqrex-=5;
				if(sqrex<=6)
				{
					sqrex+=6;
					sflag=1;
				}
			}
			if(sqrex>0 && sflag==1)
			{
				sqrey-=5;
				sqrex+=5;
				if(sqrex>=1075)
				{
					sqrex-=6;
					sflag=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey=10586;
			}

		if(sqrey1>60)
			{
				if(sqrex1<=1080 && sflag1==0)
				{
					sqrey1-=5;
					sqrex1+=5;
					if(sqrex1>=1080-37)
					{
						sqrex1-=5;
						sflag1=1;
					}
				}
			if(sqrex1>=0 && sflag1==1)
			{
				sqrex1-=5;
				sqrey1-=5;
				if(sqrex1<=5+32)
				{
					sqrex1+=5;
					sflag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey1=20000;
			}

		if(sqrey2>60)
		{
			if(sqrex2<=1080 && sflag2==0)
			{
				sqrey2-=5;
				sqrex2-=5;
				if(sqrex2<=6)
				{
					sqrex2+=6;
					sflag2=1;
				}
			}
			if(sqrex2>0 && sflag2==1)
			{
				sqrey2-=5;
				sqrex2+=5;
				if(sqrex2>=1075)
				{
					sqrex2-=6;
					sflag2=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey2=30000;
			}
		if(sqrey3>60)
			{
				if(sqrex3<=1080 && sflag3==0)
				{
					sqrey3-=5;
					sqrex3+=5;
					if(sqrex3>=1074)
					{
						sqrex3-=5;
						sflag3=1;
					}
				}
			if(sqrex3>=0 && sflag3==1)
			{
				sqrex3-=5;
				sqrey3-=5;
				if(sqrex3<=5)
				{
					sqrex3+=5;
					sflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey3=40000;
			}
		if(sqrey4>60)
		{
			if(sqrex4<=1080 && sflag4==0)
			{
				sqrey4-=5;
				sqrex4-=5;
				if(sqrex4<=6)
				{
					sqrex4+=6;
					sflag4=1;
				}
			}
			if(sqrex4>0 && sflag4==1)
			{
				sqrey4-=5;
				sqrex4+=5;
				if(sqrex4>=1075)
				{
					sqrex4-=6;
					sflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey4=50000;
			}

			if(bally>60)
			{
				if(ballx<=1080 && flag==0)
				{
					bally-=3;
					ballx-=5;
					if(ballx<=6)
					{
						ballx+=6;
						flag=1;
					}
				}
				if(ballx>0 && flag==1)
				{
					bally-=3;
					ballx+=5;
					if(ballx>=1075)
					{
						ballx-=6;
						flag=0;
					}
				}	
			}
			else
			{
				full+=2;
				bally=980;
			}
			if(bally1>60)
			{
				if(ballx1<=1080 && flag1==0)
				{
					bally1-=3;
					ballx1+=5;
					if(ballx1>=1074)
					{
						ballx1-=5;
						flag1=1;
					}
				}
			if(ballx1>=0 && flag1==1)
			{
				ballx1-=5;
				bally1-=3;
				if(ballx1<=5)
				{
					ballx1+=5;
					flag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				bally1=1377;
			}
			if(bally2>60)
			{
				if(ballx2<=1080 && flag2==0)
				{
					bally2-=3;
					ballx2-=4;
					if(ballx2<=4)
					{
					ballx2+=4;
					flag2=1;
					}
				}
			if(ballx2>0 && flag2==1)
			{
				bally2-=3;
				ballx2+=4;
				if(ballx2>=1076)
				{
					ballx2-=6;
					flag2=0;
				}
			}
		}
			else
			{
			
				full+=2;
				bally2=2277;
			}
			if(bally3>60)
			{
				if(ballx3<=1080 && flag3==0)
				{
					bally3-=3;
					ballx3+=5;
					if(ballx3>=1074)
					{
						ballx3-=5;
						flag3=1;
					}

				}
				if(ballx3>=0 && flag3==1)
				{
					ballx3-=5;
					bally3-=3;
					if(ballx3<=5)
					{
						ballx3+=5;
						flag3=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally3=3177;
			}
			if(bally4>60)
			{
			bally4-=3;
			}
			else
			{
				full+=2;
				bally4=4077;
				ballx4=rand()%1080;
			}
			if(bally5>60)
			{
				if(ballx5<=1080 && flag5==0)
				{
					bally5-=3;
					ballx5-=4;
					if(ballx5<=4)
					{
					ballx5+=4;
					flag5=1;
					}
				}
				if(ballx5>0 && flag5==1)
				{
					bally5-=3;
					ballx5+=4;
					if(ballx5>=1076)
					{
						ballx5-=6;
						flag5=0;
					}
				}
			}
			else
			{
				full+=2;
				bally5=4977;
			}
			if(bally6>60)
			{
				if(ballx6<=1080 && flag6==0)
				{
					bally6-=3;
					ballx6+=5;
					if(ballx6>=1074)
					{
						ballx6-=5;
						flag6=1;
					}

				}
				if(ballx6>=0 && flag6==1)
				{
					ballx6-=5;
					bally6-=3;
					if(ballx6<=5)
					{
						ballx6+=5;
						flag6=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally6=5877;
			}
			if(bally7>60)
			{
			bally7-=3;
			}
			else
			{
				full+=2;
				bally7=6777;
				ballx7=rand()%1080;
			}
			if(bally8>60)
			{
				if(ballx8<=1080 && flag8==0)
				{
					bally8-=3;
					ballx8-=4;
					if(ballx8<=4)
					{
					ballx8+=4;
					flag8=1;
					}
				}
			if(ballx8>0 && flag8==1)
			{
				bally8-=3;
				ballx8+=4;
				if(ballx8>=1076)
				{
					ballx8-=6;
					flag8=0;
				}
			}
			}
			else
			{
				full+=2;
				bally8=7677;
			}
			if(bally9>60)
			{
				if(ballx9<=1080 && flag9==0)
				{
					bally9-=3;
					ballx9-=4;
					if(ballx9<=4)
					{
					ballx9+=4;
					flag9=1;
					}
				}
			if(ballx9>0 && flag9==1)
			{
				bally9-=3;
				ballx9+=4;
				if(ballx9>=1076)
				{
					ballx9-=6;
					flag9=0;
				}
			}
			
			}
			else
			{
				full+=2;
				bally9=8577;
			}
			if(bally10>60)
			{
			bally10-=3;
			}
			else
			{
				full+=2;
				bally10=9477;
				ballx10=rand()%1080;
			}
	}
	if(level1==3 && level==2)
	{
		if(level==2)
		{
			if(full==100)
			{
				if(score>=300)
				{
					level = 11;
		
				}
				else
				{
					level = 12;
					ar[10]=score;
					printf(" \n\n %d\n\n",ar[i]);
					FILE *cn;
					cn=fopen("normal.txt","w");
	
					for(i=0;i<11;i++)
					{
						for(j=i;j<11;j++)
						{
							if(ar[i]<ar[j])
							{
								temp=ar[i];
								ar[i]=ar[j];
								ar[j]=temp;
							}
						}
					}
					for(i=0;i<11;i++)
					 fprintf(cn,"%d\n",ar[i]);
					fclose(cn);	
				}
			}
		}
		if((bally>=imagey+68 && bally<=imagey+71 ) && (ballx>=imagex && ballx <= imagex+128))
		{
			score+=2;
		}
		
		if((bally1>=imagey+68 && bally1<=imagey+71 ) && (ballx1>=imagex && ballx1<= imagex+128))
		{
			score+=2;
		}
	
		if((bally2>=imagey+68 && bally2<=imagey+71 ) && (ballx2>=imagex && ballx2<= imagex+128))
		{
			score+=2;
		}
		
		if((bally3>=imagey+68 && bally3<=imagey+71 ) && (ballx3>=imagex && ballx3<= imagex+128))
		{
			score+=2;
		}
		
		if((bally4>=imagey+68 && bally4<=imagey+71 ) && (ballx4>=imagex && ballx4<= imagex+128))
		{
			score+=2;
		}
		
		if((bally5>=imagey+68 && bally5<=imagey+71 ) && (ballx5>=imagex && ballx5<= imagex+128))
		{
			score+=2;
		}
		
		if((bally6>=imagey+68 && bally6<=imagey+71 ) && (ballx6>=imagex && ballx6<= imagex+128))
		{
			score+=2;
		}
		
		if((bally7>=imagey+68 && bally7<=imagey+71 ) && (ballx7>=imagex && ballx7<= imagex+128))
		{
			score+=2;
		}
		
		if((bally8>=imagey+68 && bally8<=imagey+71 ) && (ballx8>=imagex && ballx8<= imagex+128))
		{
			score+=2;
		}
		
		if((bally9>=imagey+68 && bally9<=imagey+71 ) && (ballx9>=imagex && ballx9<= imagex+128))
		{
			score+=2;
		}
		
		if((bally10>=imagey+68 && bally10<=imagey+72 ) && (ballx10>=imagex && ballx10<= imagex+128))
		{
			score+=2;
		}
		if((sqrey>=imagey+64 && sqrey<=imagey+71 ) && (sqrex>=imagex && sqrex<= imagex+128))
		{
			score+=4;
		}
		if((sqrey1>=imagey+64 && sqrey1<=imagey+71 ) && (sqrex1>=imagex && sqrex1<= imagex+128))
		{
			score+=4;
		}
		if((sqrey2>=imagey+64 && sqrey2<=imagey+71 ) && (sqrex2>=imagex && sqrex2<= imagex+128))
		{
			score+=4;
		}
		if((sqrey3>=imagey+64 && sqrey3<=imagey+71 ) && (sqrex3>=imagex && sqrex3<= imagex+128))
		{
			score+=4;
		}
		if((sqrey4==imagey+64 && sqrey4<=imagey+71 ) && (sqrex4>=imagex && sqrex4<= imagex+128))
		{
			score+=4;
		}
		if((trngly5>=imagey+64 && trngly5<=imagey+71 ) && (trnglx5>=imagex && trnglx5<= imagex+128))
		{
			score+=3;
		}
		if((trngly4>=imagey+64 && trngly4<=imagey+71 ) && (trnglx4>=imagex && trnglx4<= imagex+128))
		{
			score+=3;
		}
		if((trngly3>=imagey+64 && trngly3<=imagey+71 ) && (trnglx3>=imagex && trnglx3<= imagex+128))
		{
			score+=3;
		}
		if((trngly2>=imagey+64 && trngly2<=imagey+71 ) && (trnglx2>=imagex && trnglx2<= imagex+128))
		{
			score+=3;
		}
		if((trngly1>=imagey+64 && trngly1<=imagey+71 ) && (trnglx1>=imagex && trnglx1<= imagex+128))
		{
			score+=3;
		}
		if(trngly1>60)
		{
			if(trnglx1<=1080 && tflag1==0)
			{
				trngly1-=5;
				trnglx1-=5;
				if(trnglx1<=6)
				{
					trnglx1+=6;
					tflag1=1;
				}
			}
			if(trnglx1>0 && tflag1==1)
			{
				trngly1-=5;
				trnglx1+=5;
				if(trnglx1>=1075)
				{
					trnglx1-=6;
					tflag1=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly1=20000;
			}
		if(trngly2>60)
			{
				if(trnglx2<=1080 && tflag2==0)
				{
					trngly2-=5;
					trnglx2+=5;
					if(trnglx2>=1080-37)
					{
						trnglx2-=5;
						tflag2=1;
					}
				}
			if(trnglx2>=0 && tflag2==1)
			{
				trnglx2-=5;
				trngly2-=5;
				if(trnglx2<=5+32)
				{
					trnglx2+=5;
					tflag2=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly2=30000;
			}
		if(trngly3>60)
			{
				if(trnglx3<=1080 && tflag3==0)
				{
					trngly3-=5;
					trnglx3+=5;
					if(trnglx3>=1080-37)
					{
						trnglx3-=5;
						tflag3=1;
					}
				}
			if(trnglx3>=0 && tflag3==1)
			{
				trnglx3-=5;
				trngly3-=5;
				if(trnglx3<=5+32)
				{
					trnglx3+=5;
					tflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly3=40000;
			}
		if(trngly4>60)
		{
			if(trnglx4<=1080 && tflag1==0)
			{
				trngly4-=5;
				trnglx4-=5;
				if(trnglx4<=6)
				{
					trnglx4+=6;
					tflag4=1;
				}
			}
			if(trnglx4>0 && tflag4==1)
			{
				trngly4-=5;
				trnglx4+=5;
				if(trnglx4>=1075)
				{
					trnglx4-=6;
					tflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly4=50000;
			}
		if(trngly5>60)
		{
			if(trnglx5<=1080 && tflag1==0)
			{
				trngly5-=5;
				trnglx5-=5;
				if(trnglx5<=6)
				{
					trnglx5+=6;
					tflag5=1;
				}
			}
			if(trnglx5>0 && tflag5==1)
			{
				trngly5-=5;
				trnglx5+=5;
				if(trnglx5>=1075)
				{
					trnglx5-=6;
					tflag5=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly5=50000;
			}
		if(sqrey>60)
		{
			if(sqrex<=1080 && sflag==0)
			{
				sqrey-=5;
				sqrex-=5;
				if(sqrex<=6)
				{
					sqrex+=6;
					sflag=1;
				}
			}
			if(sqrex>0 && sflag==1)
			{
				sqrey-=5;
				sqrex+=5;
				if(sqrex>=1075)
				{
					sqrex-=6;
					sflag=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey=10586;
			}

		if(sqrey1>60)
			{
				if(sqrex1<=1080 && sflag1==0)
				{
					sqrey1-=5;
					sqrex1+=5;
					if(sqrex1>=1080-37)
					{
						sqrex1-=5;
						sflag1=1;
					}
				}
			if(sqrex1>=0 && sflag1==1)
			{
				sqrex1-=5;
				sqrey1-=5;
				if(sqrex1<=5+32)
				{
					sqrex1+=5;
					sflag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey1=20000;
			}

		if(sqrey2>60)
		{
			if(sqrex2<=1080 && sflag2==0)
			{
				sqrey2-=5;
				sqrex2-=5;
				if(sqrex2<=6)
				{
					sqrex2+=6;
					sflag2=1;
				}
			}
			if(sqrex2>0 && sflag2==1)
			{
				sqrey2-=5;
				sqrex2+=5;
				if(sqrex2>=1075)
				{
					sqrex2-=6;
					sflag2=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey2=30000;
			}
		if(sqrey3>60)
			{
				if(sqrex3<=1080 && sflag3==0)
				{
					sqrey3-=5;
					sqrex3+=5;
					if(sqrex3>=1074)
					{
						sqrex3-=5;
						sflag3=1;
					}
				}
			if(sqrex3>=0 && sflag3==1)
			{
				sqrex3-=5;
				sqrey3-=5;
				if(sqrex3<=5)
				{
					sqrex3+=5;
					sflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey3=40000;
			}
		if(sqrey4>60)
		{
			if(sqrex4<=1080 && sflag4==0)
			{
				sqrey4-=5;
				sqrex4-=5;
				if(sqrex4<=6)
				{
					sqrex4+=6;
					sflag4=1;
				}
			}
			if(sqrex4>0 && sflag4==1)
			{
				sqrey4-=5;
				sqrex4+=5;
				if(sqrex4>=1075)
				{
					sqrex4-=6;
					sflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey4=50000;
			}

			if(bally>60)
			{
				if(ballx<=1080 && flag==0)
				{
					bally-=4;
					ballx-=5;
					if(ballx<=6)
					{
						ballx+=6;
						flag=1;
					}
				}
				if(ballx>0 && flag==1)
				{
					bally-=4;
					ballx+=5;
					if(ballx>=1075)
					{
						ballx-=6;
						flag=0;
					}
				}	
			}
			else
			{
				full+=2;
				bally=980;
			}
			if(bally1>60)
			{
				if(ballx1<=1080 && flag1==0)
				{
					bally1-=4;
					ballx1+=5;
					if(ballx1>=1074)
					{
						ballx1-=5;
						flag1=1;
					}
				}
			if(ballx1>=0 && flag1==1)
			{
				ballx1-=5;
				bally1-=4;
				if(ballx1<=5)
				{
					ballx1+=5;
					flag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				bally1=1377;
			}
			if(bally2>60)
			{
				if(ballx2<=1080 && flag2==0)
				{
					bally2-=4;
					ballx2-=4;
					if(ballx2<=4)
					{
					ballx2+=4;
					flag2=1;
					}
				}
			if(ballx2>0 && flag2==1)
			{
				bally2-=4;
				ballx2+=4;
				if(ballx2>=1076)
				{
					ballx2-=6;
					flag2=0;
				}
			}
		}
			else
			{
			
				full+=2;
				bally2=2277;
			}
			if(bally3>60)
			{
				if(ballx3<=1080 && flag3==0)
				{
					bally3-=4;
					ballx3+=5;
					if(ballx3>=1074)
					{
						ballx3-=5;
						flag3=1;
					}

				}
				if(ballx3>=0 && flag3==1)
				{
					ballx3-=5;
					bally3-=4;
					if(ballx3<=5)
					{
						ballx3+=5;
						flag3=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally3=3177;
			}
			if(bally4>60)
			{
			bally4-=4;
			}
			else
			{
				full+=2;
				bally4=4077;
				ballx4=rand()%1080;
			}
			if(bally5>60)
			{
				if(ballx5<=1080 && flag5==0)
				{
					bally5-=4;
					ballx5-=4;
					if(ballx5<=4)
					{
					ballx5+=4;
					flag5=1;
					}
				}
				if(ballx5>0 && flag5==1)
				{
					bally5-=4;
					ballx5+=4;
					if(ballx5>=1076)
					{
						ballx5-=6;
						flag5=0;
					}
				}
			}
			else
			{
				full+=2;
				bally5=4977;
			}
			if(bally6>60)
			{
				if(ballx6<=1080 && flag6==0)
				{
					bally6-=4;
					ballx6+=5;
					if(ballx6>=1074)
					{
						ballx6-=5;
						flag6=1;
					}

				}
				if(ballx6>=0 && flag6==1)
				{
					ballx6-=5;
					bally6-=4;
					if(ballx6<=5)
					{
						ballx6+=5;
						flag6=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally6=5877;
			}
			if(bally7>60)
			{
			bally7-=3;
			}
			else
			{
				full+=2;
				bally7=6777;
				ballx7=rand()%1080;
			}
			if(bally8>60)
			{
				if(ballx8<=1080 && flag8==0)
				{
					bally8-=4;
					ballx8-=4;
					if(ballx8<=4)
					{
					ballx8+=4;
					flag8=1;
					}
				}
			if(ballx8>0 && flag8==1)
			{
				bally8-=4;
				ballx8+=4;
				if(ballx8>=1076)
				{
					ballx8-=6;
					flag8=0;
				}
			}
			}
			else
			{
				full+=2;
				bally8=7677;
			}
			if(bally9>60)
			{
				if(ballx9<=1080 && flag9==0)
				{
					bally9-=4;
					ballx9-=4;
					if(ballx9<=4)
					{
					ballx9+=4;
					flag9=1;
					}
				}
			if(ballx9>0 && flag9==1)
			{
				bally9-=4;
				ballx9+=4;
				if(ballx9>=1076)
				{
					ballx9-=6;
					flag9=0;
				}
			}
			
			}
			else
			{
				full+=2;
				bally9=8577;
			}
			if(bally10>60)
			{
			bally10-=4;
			}
			else
			{
				full+=2;
				bally10=9477;
				ballx10=rand()%1080;
			}
	}
	if(level1==4 && level==2)
	{
		if(level==2)
		{
			if(full==110)
			{
				if(score>=500)
				{
					level = 11;
		
				}
				else
				{
					level = 12;
					ar[10]=score;
					printf(" \n\n %d\n\n",ar[i]);
					FILE *cn;
					cn=fopen("normal.txt","w");
	
					for(i=0;i<11;i++)
					{
						for(j=i;j<11;j++)
						{
							if(ar[i]<ar[j])
							{
								temp=ar[i];
								ar[i]=ar[j];
								ar[j]=temp;
							}
						}
					}
					for(i=0;i<11;i++)
					 fprintf(cn,"%d\n",ar[i]);
					fclose(cn);									

				}
			}
		}
		if((bally>=imagey+67 && bally<=imagey+71 ) && (ballx>=imagex && ballx <= imagex+128))
		{
			score+=2;
		}
		
		if((bally1>=imagey+67 && bally1<=imagey+71 ) && (ballx1>=imagex && ballx1<= imagex+128))
		{
			score+=2;
		}
	
		if((bally2>=imagey+67 && bally2<=imagey+71 ) && (ballx2>=imagex && ballx2<= imagex+128))
		{
			score+=2;
		}
		
		if((bally3>=imagey+67 && bally3<=imagey+71 ) && (ballx3>=imagex && ballx3<= imagex+128))
		{
			score+=2;
		}
		
		if((bally4>=imagey+67 && bally4<=imagey+71 ) && (ballx4>=imagex && ballx4<= imagex+128))
		{
			score+=2;
		}
		
		if((bally5>=imagey+67 && bally5<=imagey+71 ) && (ballx5>=imagex && ballx5<= imagex+128))
		{
			score+=2;
		}
		
		if((bally6>=imagey+67 && bally6<=imagey+71 ) && (ballx6>=imagex && ballx6<= imagex+128))
		{
			score+=2;
		}
		
		if((bally7>=imagey+67 && bally7<=imagey+71 ) && (ballx7>=imagex && ballx7<= imagex+128))
		{
			score+=2;
		}
		
		if((bally8>=imagey+67 && bally8<=imagey+71 ) && (ballx8>=imagex && ballx8<= imagex+128))
		{
			score+=2;
		}
		
		if((bally9>=imagey+67 && bally9<=imagey+71 ) && (ballx9>=imagex && ballx9<= imagex+128))
		{
			score+=2;
		}
		
		if((bally10>=imagey+68 && bally10<=imagey+72 ) && (ballx10>=imagex && ballx10<= imagex+128))
		{
			score+=2;
		}
		if((sqrey>=imagey+64 && sqrey<=imagey+71 ) && (sqrex>=imagex && sqrex<= imagex+128))
		{
			score+=4;
		}
		if((sqrey1>=imagey+64 && sqrey1<=imagey+71 ) && (sqrex1>=imagex && sqrex1<= imagex+128))
		{
			score+=4;
		}
		if((sqrey2>=imagey+64 && sqrey2<=imagey+71 ) && (sqrex2>=imagex && sqrex2<= imagex+128))
		{
			score+=4;
		}
		if((sqrey3>=imagey+64 && sqrey3<=imagey+71 ) && (sqrex3>=imagex && sqrex3<= imagex+128))
		{
			score+=4;
		}
		if((sqrey4==imagey+64 && sqrey4<=imagey+71 ) && (sqrex4>=imagex && sqrex4<= imagex+128))
		{
			score+=4;
		}
		if((trngly5>=imagey+64 && trngly5<=imagey+71 ) && (trnglx5>=imagex && trnglx5<= imagex+128))
		{
			score+=3;
		}
		if((trngly4>=imagey+64 && trngly4<=imagey+71 ) && (trnglx4>=imagex && trnglx4<= imagex+128))
		{
			score+=3;
		}
		if((trngly3>=imagey+64 && trngly3<=imagey+71 ) && (trnglx3>=imagex && trnglx3<= imagex+128))
		{
			score+=3;
		}
		if((trngly2>=imagey+64 && trngly2<=imagey+71 ) && (trnglx2>=imagex && trnglx2<= imagex+128))
		{
			score+=3;
		}
		if((trngly1>=imagey+64 && trngly1<=imagey+71 ) && (trnglx1>=imagex && trnglx1<= imagex+128))
		{
			score+=3;
		}
		if(trngly1>60)
		{
			if(trnglx1<=1080 && tflag1==0)
			{
				trngly1-=4;
				trnglx1-=5;
				if(trnglx1<=6)
				{
					trnglx1+=6;
					tflag1=1;
				}
			}
			if(trnglx1>0 && tflag1==1)
			{
				trngly1-=4;
				trnglx1+=5;
				if(trnglx1>=1075)
				{
					trnglx1-=6;
					tflag1=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly1=20000;
			}
		if(trngly2>60)
			{
				if(trnglx2<=1080 && tflag2==0)
				{
					trngly2-=4;
					trnglx2+=5;
					if(trnglx2>=1080-37)
					{
						trnglx2-=5;
						tflag2=1;
					}
				}
			if(trnglx2>=0 && tflag2==1)
			{
				trnglx2-=5;
				trngly2-=4;
				if(trnglx2<=5+32)
				{
					trnglx2+=5;
					tflag2=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly2=30000;
			}
		if(trngly3>60)
			{
				if(trnglx3<=1080 && tflag3==0)
				{
					trngly3-=4;
					trnglx3+=5;
					if(trnglx3>=1080-37)
					{
						trnglx3-=5;
						tflag3=1;
					}
				}
			if(trnglx3>=0 && tflag3==1)
			{
				trnglx3-=5;
				trngly3-=4;
				if(trnglx3<=5+32)
				{
					trnglx3+=5;
					tflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly3=40000;
			}
		if(trngly4>60)
		{
			if(trnglx4<=1080 && tflag1==0)
			{
				trngly4-=4;
				trnglx4-=5;
				if(trnglx4<=6)
				{
					trnglx4+=6;
					tflag4=1;
				}
			}
			if(trnglx4>0 && tflag4==1)
			{
				trngly4-=4;
				trnglx4+=5;
				if(trnglx4>=1075)
				{
					trnglx4-=6;
					tflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly4=50000;
			}
		if(trngly5>60)
		{
			if(trnglx5<=1080 && tflag1==0)
			{
				trngly5-=4;
				trnglx5-=5;
				if(trnglx5<=6)
				{
					trnglx5+=6;
					tflag5=1;
				}
			}
			if(trnglx5>0 && tflag5==1)
			{
				trngly5-=4;
				trnglx5+=5;
				if(trnglx5>=1075)
				{
					trnglx5-=6;
					tflag5=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly5=50000;
			}
		if(sqrey>60)
		{
			if(sqrex<=1080 && sflag==0)
			{
				sqrey-=4;
				sqrex-=5;
				if(sqrex<=6)
				{
					sqrex+=6;
					sflag=1;
				}
			}
			if(sqrex>0 && sflag==1)
			{
				sqrey-=4;
				sqrex+=5;
				if(sqrex>=1075)
				{
					sqrex-=6;
					sflag=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey=10586;
			}

		if(sqrey1>60)
			{
				if(sqrex1<=1080 && sflag1==0)
				{
					sqrey1-=4;
					sqrex1+=5;
					if(sqrex1>=1080-37)
					{
						sqrex1-=5;
						sflag1=1;
					}
				}
			if(sqrex1>=0 && sflag1==1)
			{
				sqrex1-=5;
				sqrey1-=4;
				if(sqrex1<=5+32)
				{
					sqrex1+=5;
					sflag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey1=20000;
			}

		if(sqrey2>60)
		{
			if(sqrex2<=1080 && sflag2==0)
			{
				sqrey2-=4;
				sqrex2-=5;
				if(sqrex2<=6)
				{
					sqrex2+=6;
					sflag2=1;
				}
			}
			if(sqrex2>0 && sflag2==1)
			{
				sqrey2-=4;
				sqrex2+=5;
				if(sqrex2>=1075)
				{
					sqrex2-=6;
					sflag2=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey2=30000;
			}
		if(sqrey3>60)
			{
				if(sqrex3<=1080 && sflag3==0)
				{
					sqrey3-=4;
					sqrex3+=5;
					if(sqrex3>=1074)
					{
						sqrex3-=5;
						sflag3=1;
					}
				}
			if(sqrex3>=0 && sflag3==1)
			{
				sqrex3-=5;
				sqrey3-=4;
				if(sqrex3<=5)
				{
					sqrex3+=5;
					sflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey3=40000;
			}
		if(sqrey4>60)
		{
			if(sqrex4<=1080 && sflag4==0)
			{
				sqrey4-=4;
				sqrex4-=5;
				if(sqrex4<=6)
				{
					sqrex4+=6;
					sflag4=1;
				}
			}
			if(sqrex4>0 && sflag4==1)
			{
				sqrey4-=4;
				sqrex4+=5;
				if(sqrex4>=1075)
				{
					sqrex4-=6;
					sflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey4=50000;
			}

			if(bally>60)
			{
				if(ballx<=1080 && flag==0)
				{
					bally-=5;
					ballx-=5;
					if(ballx<=6)
					{
						ballx+=6;
						flag=1;
					}
				}
				if(ballx>0 && flag==1)
				{
					bally-=5;
					ballx+=5;
					if(ballx>=1075)
					{
						ballx-=6;
						flag=0;
					}
				}	
			}
			else
			{
				full+=2;
				bally=980;
			}
			if(bally1>60)
			{
				if(ballx1<=1080 && flag1==0)
				{
					bally1-=5;
					ballx1+=5;
					if(ballx1>=1074)
					{
						ballx1-=5;
						flag1=1;
					}
				}
			if(ballx1>=0 && flag1==1)
			{
				ballx1-=5;
				bally1-=5;
				if(ballx1<=5)
				{
					ballx1+=5;
					flag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				bally1=1377;
			}
			if(bally2>60)
			{
				if(ballx2<=1080 && flag2==0)
				{
					bally2-=5;
					ballx2-=4;
					if(ballx2<=4)
					{
					ballx2+=4;
					flag2=1;
					}
				}
			if(ballx2>0 && flag2==1)
			{
				bally2-=5;
				ballx2+=4;
				if(ballx2>=1076)
				{
					ballx2-=6;
					flag2=0;
				}
			}
		}
			else
			{
			
				full+=2;
				bally2=2277;
			}
			if(bally3>60)
			{
				if(ballx3<=1080 && flag3==0)
				{
					bally3-=5;
					ballx3+=5;
					if(ballx3>=1074)
					{
						ballx3-=5;
						flag3=1;
					}

				}
				if(ballx3>=0 && flag3==1)
				{
					ballx3-=5;
					bally3-=5;
					if(ballx3<=5)
					{
						ballx3+=5;
						flag3=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally3=3177;
			}
			if(bally4>60)
			{
			bally4-=5;
			}
			else
			{
				full+=2;
				bally4=4077;
				ballx4=rand()%1080;
			}
			if(bally5>60)
			{
				if(ballx5<=1080 && flag5==0)
				{
					bally5-=5;
					ballx5-=4;
					if(ballx5<=4)
					{
					ballx5+=4;
					flag5=1;
					}
				}
				if(ballx5>0 && flag5==1)
				{
					bally5-=5;
					ballx5+=4;
					if(ballx5>=1076)
					{
						ballx5-=6;
						flag5=0;
					}
				}
			}
			else
			{
				full+=2;
				bally5=4977;
			}
			if(bally6>60)
			{
				if(ballx6<=1080 && flag6==0)
				{
					bally6-=5;
					ballx6+=5;
					if(ballx6>=1074)
					{
						ballx6-=5;
						flag6=1;
					}

				}
				if(ballx6>=0 && flag6==1)
				{
					ballx6-=5;
					bally6-=2;
					if(ballx6<=5)
					{
						ballx6+=5;
						flag6=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally6=5877;
			}
			if(bally7>60)
			{
			bally7-=5;
			}
			else
			{
				full+=2;
				bally7=6777;
				ballx7=rand()%1080;
			}
			if(bally8>60)
			{
				if(ballx8<=1080 && flag8==0)
				{
					bally8-=5;
					ballx8-=4;
					if(ballx8<=4)
					{
					ballx8+=4;
					flag8=1;
					}
				}
			if(ballx8>0 && flag8==1)
			{
				bally8-=5;
				ballx8+=4;
				if(ballx8>=1076)
				{
					ballx8-=6;
					flag8=0;
				}
			}
			}
			else
			{
				full+=2;
				bally8=7677;
			}
			if(bally9>60)
			{
				if(ballx9<=1080 && flag9==0)
				{
					bally9-=5;
					ballx9-=4;
					if(ballx9<=4)
					{
					ballx9+=4;
					flag9=1;
					}
				}
			if(ballx9>0 && flag9==1)
			{
				bally9-=5;
				ballx9+=4;
				if(ballx9>=1076)
				{
					ballx9-=6;
					flag9=0;
				}
			}
			
			}
			else
			{
				full+=2;
				bally9=8577;
			}
			if(bally10>60)
			{
			bally10-=5;
			}
			else
			{
				full+=2;
				bally10=9477;
				ballx10=rand()%1080;
			}
	}
	if(level1==5 && level==2)
	{
		if(level==2)
		{
			if(full==110)
			{
				if(score>=800)
				{
					level = 80;
		
				}
				else
				{
					level = 12;
					ar[10]=score;
					printf(" \n\n %d\n\n",ar[i]);
					FILE *cn;
					cn=fopen("normal.txt","w");
	
					for(i=0;i<11;i++)
					{
						for(j=i;j<11;j++)
						{
							if(ar[i]<ar[j])
							{
								temp=ar[i];
								ar[i]=ar[j];
								ar[j]=temp;
							}
						}
					}
					for(i=0;i<11;i++)
					 fprintf(cn,"%d\n",ar[i]);
					fclose(cn);									

				}
			}
		}
		if((bally>=imagey+66 && bally<=imagey+71 ) && (ballx>=imagex && ballx <= imagex+128))
		{
			score+=2;
		}
		
		if((bally1>=imagey+66 && bally1<=imagey+71 ) && (ballx1>=imagex && ballx1<= imagex+128))
		{
			score+=2;
		}
	
		if((bally2>=imagey+66 && bally2<=imagey+71 ) && (ballx2>=imagex && ballx2<= imagex+128))
		{
			score+=2;
		}
		
		if((bally3>=imagey+66 && bally3<=imagey+71 ) && (ballx3>=imagex && ballx3<= imagex+128))
		{
			score+=2;
		}
		
		if((bally4>=imagey+66 && bally4<=imagey+71 ) && (ballx4>=imagex && ballx4<= imagex+128))
		{
			score+=2;
		}
		
		if((bally5>=imagey+66 && bally5<=imagey+71 ) && (ballx5>=imagex && ballx5<= imagex+128))
		{
			score+=2;
		}
		
		if((bally6>=imagey+66 && bally6<=imagey+71 ) && (ballx6>=imagex && ballx6<= imagex+128))
		{
			score+=2;
		}
		
		if((bally7>=imagey+66 && bally7<=imagey+71 ) && (ballx7>=imagex && ballx7<= imagex+128))
		{
			score+=2;
		}
		
		if((bally8>=imagey+66 && bally8<=imagey+71 ) && (ballx8>=imagex && ballx8<= imagex+128))
		{
			score+=2;
		}
		
		if((bally9>=imagey+66 && bally9<=imagey+71 ) && (ballx9>=imagex && ballx9<= imagex+128))
		{
			score+=2;
		}
		
		if((bally10>=imagey+66 && bally10<=imagey+72 ) && (ballx10>=imagex && ballx10<= imagex+128))
		{
			score+=2;
		}
		if((sqrey>=imagey+62 && sqrey<=imagey+71 ) && (sqrex>=imagex && sqrex<= imagex+128))
		{
			score+=4;
		}
		if((sqrey1>=imagey+62 && sqrey1<=imagey+71 ) && (sqrex1>=imagex && sqrex1<= imagex+128))
		{
			score+=4;
		}
		if((sqrey2>=imagey+62 && sqrey2<=imagey+71 ) && (sqrex2>=imagex && sqrex2<= imagex+128))
		{
			score+=4;
		}
		if((sqrey3>=imagey+62 && sqrey3<=imagey+71 ) && (sqrex3>=imagex && sqrex3<= imagex+128))
		{
			score+=4;
		}
		if((sqrey4==imagey+62 && sqrey4<=imagey+71 ) && (sqrex4>=imagex && sqrex4<= imagex+128))
		{
			score+=4;
		}
		if((trngly5>=imagey+62 && trngly5<=imagey+71 ) && (trnglx5>=imagex && trnglx5<= imagex+128))
		{
			score+=3;
		}
		if((trngly4>=imagey+62 && trngly4<=imagey+71 ) && (trnglx4>=imagex && trnglx4<= imagex+128))
		{
			score+=3;
		}
		if((trngly3>=imagey+62 && trngly3<=imagey+71 ) && (trnglx3>=imagex && trnglx3<= imagex+128))
		{
			score+=3;
		}
		if((trngly2>=imagey+62 && trngly2<=imagey+71 ) && (trnglx2>=imagex && trnglx2<= imagex+128))
		{
			score+=3;
		}
		if((trngly1>=imagey+62 && trngly1<=imagey+71 ) && (trnglx1>=imagex && trnglx1<= imagex+128))
		{
			score+=3;
		}
		if(trngly1>60)
		{
			if(trnglx1<=1080 && tflag1==0)
			{
				trngly1-=7;
				trnglx1-=5;
				if(trnglx1<=6)
				{
					trnglx1+=6;
					tflag1=1;
				}
			}
			if(trnglx1>0 && tflag1==1)
			{
				trngly1-=7;
				trnglx1+=5;
				if(trnglx1>=1075)
				{
					trnglx1-=6;
					tflag1=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly1=20000;
			}
		if(trngly2>60)
			{
				if(trnglx2<=1080 && tflag2==0)
				{
					trngly2-=7;
					trnglx2+=5;
					if(trnglx2>=1080-37)
					{
						trnglx2-=5;
						tflag2=1;
					}
				}
			if(trnglx2>=0 && tflag2==1)
			{
				trnglx2-=5;
				trngly2-=7;
				if(trnglx2<=5+32)
				{
					trnglx2+=5;
					tflag2=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly2=30000;
			}
		if(trngly3>60)
			{
				if(trnglx3<=1080 && tflag3==0)
				{
					trngly3-=7;
					trnglx3+=5;
					if(trnglx3>=1080-37)
					{
						trnglx3-=5;
						tflag3=1;
					}
				}
			if(trnglx3>=0 && tflag3==1)
			{
				trnglx3-=5;
				trngly3-=7;
				if(trnglx3<=5+32)
				{
					trnglx3+=5;
					tflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				trngly3=40000;
			}
		if(trngly4>60)
		{
			if(trnglx4<=1080 && tflag1==0)
			{
				trngly4-=7;
				trnglx4-=5;
				if(trnglx4<=6)
				{
					trnglx4+=6;
					tflag4=1;
				}
			}
			if(trnglx4>0 && tflag4==1)
			{
				trngly4-=7;
				trnglx4+=5;
				if(trnglx4>=1075)
				{
					trnglx4-=6;
					tflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly4=50000;
			}
		if(trngly5>60)
		{
			if(trnglx5<=1080 && tflag1==0)
			{
				trngly5-=7;
				trnglx5-=5;
				if(trnglx5<=6)
				{
					trnglx5+=6;
					tflag5=1;
				}
			}
			if(trnglx5>0 && tflag5==1)
			{
				trngly5-=7;
				trnglx5+=5;
				if(trnglx5>=1075)
				{
					trnglx5-=6;
					tflag5=0;
				}
			}	
		}
			else
			{
				full+=2;
				trngly5=50000;
			}
		if(sqrey>60)
		{
			if(sqrex<=1080 && sflag==0)
			{
				sqrey-=7;
				sqrex-=5;
				if(sqrex<=6)
				{
					sqrex+=6;
					sflag=1;
				}
			}
			if(sqrex>0 && sflag==1)
			{
				sqrey-=7;
				sqrex+=5;
				if(sqrex>=1075)
				{
					sqrex-=6;
					sflag=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey=10586;
			}

		if(sqrey1>60)
			{
				if(sqrex1<=1080 && sflag1==0)
				{
					sqrey1-=7;
					sqrex1+=5;
					if(sqrex1>=1080-37)
					{
						sqrex1-=5;
						sflag1=1;
					}
				}
			if(sqrex1>=0 && sflag1==1)
			{
				sqrex1-=5;
				sqrey1-=7;
				if(sqrex1<=5+32)
				{
					sqrex1+=5;
					sflag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey1=20000;
			}

		if(sqrey2>60)
		{
			if(sqrex2<=1080 && sflag2==0)
			{
				sqrey2-=7;
				sqrex2-=5;
				if(sqrex2<=6)
				{
					sqrex2+=6;
					sflag2=1;
				}
			}
			if(sqrex2>0 && sflag2==1)
			{
				sqrey2-=7;
				sqrex2+=5;
				if(sqrex2>=1075)
				{
					sqrex2-=6;
					sflag2=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey2=30000;
			}
		if(sqrey3>60)
			{
				if(sqrex3<=1080 && sflag3==0)
				{
					sqrey3-=7;
					sqrex3+=5;
					if(sqrex3>=1074)
					{
						sqrex3-=5;
						sflag3=1;
					}
				}
			if(sqrex3>=0 && sflag3==1)
			{
				sqrex3-=5;
				sqrey3-=7;
				if(sqrex3<=5)
				{
					sqrex3+=5;
					sflag3=0;
				}
		
			}
		}
			else
			{
				full+=2;
				sqrey3=40000;
			}
		if(sqrey4>60)
		{
			if(sqrex4<=1080 && sflag4==0)
			{
				sqrey4-=7;
				sqrex4-=5;
				if(sqrex4<=6)
				{
					sqrex4+=6;
					sflag4=1;
				}
			}
			if(sqrex4>0 && sflag4==1)
			{
				sqrey4-=7;
				sqrex4+=5;
				if(sqrex4>=1075)
				{
					sqrex4-=6;
					sflag4=0;
				}
			}	
		}
			else
			{
				full+=2;
				sqrey4=50000;
			}

			if(bally>60)
			{
				if(ballx<=1080 && flag==0)
				{
					bally-=6;
					ballx-=5;
					if(ballx<=6)
					{
						ballx+=6;
						flag=1;
					}
				}
				if(ballx>0 && flag==1)
				{
					bally-=6;
					ballx+=5;
					if(ballx>=1075)
					{
						ballx-=6;
						flag=0;
					}
				}	
			}
			else
			{
				full+=2;
				bally=980;
			}
			if(bally1>60)
			{
				if(ballx1<=1080 && flag1==0)
				{
					bally1-=6;
					ballx1+=5;
					if(ballx1>=1074)
					{
						ballx1-=5;
						flag1=1;
					}
				}
			if(ballx1>=0 && flag1==1)
			{
				ballx1-=5;
				bally1-=6;
				if(ballx1<=5)
				{
					ballx1+=5;
					flag1=0;
				}
		
			}
		}
			else
			{
				full+=2;
				bally1=1377;
			}
			if(bally2>60)
			{
				if(ballx2<=1080 && flag2==0)
				{
					bally2-=6;
					ballx2-=4;
					if(ballx2<=4)
					{
					ballx2+=4;
					flag2=1;
					}
				}
			if(ballx2>0 && flag2==1)
			{
				bally2-=6;
				ballx2+=4;
				if(ballx2>=1076)
				{
					ballx2-=6;
					flag2=0;
				}
			}
		}
			else
			{
			
				full+=2;
				bally2=2277;
			}
			if(bally3>60)
			{
				if(ballx3<=1080 && flag3==0)
				{
					bally3-=6;
					ballx3+=5;
					if(ballx3>=1074)
					{
						ballx3-=5;
						flag3=1;
					}

				}
				if(ballx3>=0 && flag3==1)
				{
					ballx3-=5;
					bally3-=6;
					if(ballx3<=5)
					{
						ballx3+=5;
						flag3=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally3=3177;
			}
			if(bally4>60)
			{
			bally4-=6;
			}
			else
			{
				full+=2;
				bally4=4077;
				ballx4=rand()%1080;
			}
			if(bally5>60)
			{
				if(ballx5<=1080 && flag5==0)
				{
					bally5-=6;
					ballx5-=4;
					if(ballx5<=4)
					{
					ballx5+=4;
					flag5=1;
					}
				}
				if(ballx5>0 && flag5==1)
				{
					bally5-=6;
					ballx5+=4;
					if(ballx5>=1076)
					{
						ballx5-=6;
						flag5=0;
					}
				}
			}
			else
			{
				full+=2;
				bally5=4977;
			}
			if(bally6>60)
			{
				if(ballx6<=1080 && flag6==0)
				{
					bally6-=6;
					ballx6+=5;
					if(ballx6>=1074)
					{
						ballx6-=5;
						flag6=1;
					}

				}
				if(ballx6>=0 && flag6==1)
				{
					ballx6-=6;
					bally6-=2;
					if(ballx6<=5)
					{
						ballx6+=5;
						flag6=0;
					}
		
				}

			}
			else
			{
				full+=2;
				bally6=5877;
			}
			if(bally7>60)
			{
			bally7-=6;
			}
			else
			{
				full+=2;
				bally7=6777;
				ballx7=rand()%1080;
			}
			if(bally8>60)
			{
				if(ballx8<=1080 && flag8==0)
				{
					bally8-=6;
					ballx8-=4;
					if(ballx8<=4)
					{
					ballx8+=4;
					flag8=1;
					}
				}
			if(ballx8>0 && flag8==1)
			{
				bally8-=6;
				ballx8+=4;
				if(ballx8>=1076)
				{
					ballx8-=6;
					flag8=0;
				}
			}
			}
			else
			{
				full+=2;
				bally8=7677;
			}
			if(bally9>60)
			{
				if(ballx9<=1080 && flag9==0)
				{
					bally9-=6;
					ballx9-=4;
					if(ballx9<=4)
					{
					ballx9+=4;
					flag9=1;
					}
				}
			if(ballx9>0 && flag9==1)
			{
				bally9-=6;
				ballx9+=4;
				if(ballx9>=1076)
				{
					ballx9-=6;
					flag9=0;
				}
			}
			
			}
			else
			{
				full+=2;
				bally9=8577;
			}
			if(bally10>60)
			{
			bally10-=6;
			}
			else
			{
				full+=2;
				bally10=9477;
				ballx10=rand()%1080;
			}
	}
}


void iDraw()
{
	if(level == 0)
	{
		iClear();
		iShowBMP(0,0,"front.bmp");
	}
	if(level ==1)
	{
		iClear();
		iShowBMP(0,0,"2nd.bmp");
	
	}
	if(level==9)
	{
		iClear();
		iShowBMP(0,0,"options.bmp");
	}
	if(level==8)
	{
		iClear();
		iShowBMP(0,0,"highscore.bmp");
		
	}
	if(level==21)
	{
		iClear();
		iShowBMP(0,0,"help.bmp");
		
	}

	if(level==50)
	{
		iClear();
		iShowBMP(0,0,"cradits.bmp");
	}
	
	if(level==18)
	{
	iClear();
	iShowBMP(0,0,"time up.bmp");
	iText(450,350,"YOUR SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(650,350,ch,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450,300,"HIGH SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	itoa(br[0],ju,10);
	iText(650,300,ju,GLUT_BITMAP_TIMES_ROMAN_24);

	}
	if(level==80)
	{
	iClear();
	iShowBMP(0,0,"you win.bmp");
	iText(450,250,"YOUR SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(650,250,ch,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450,200,"HIGH SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	itoa(br[0],ju,10);
	iText(650,200,ju,GLUT_BITMAP_TIMES_ROMAN_24);

	}
	if(level==11)
	{
	iClear();
	iShowBMP(0,0,"levelup.bmp");
	}
	if(level==12)
	{
	iClear();
	iShowBMP(0,0,"gameover.bmp");
	iText(450,250,"YOUR SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(650,250,ch,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450,200,"HIGH SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	itoa(br[0],ju,10);
	iText(650,200,ju,GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if(level==13)
	{
		iClear();
		iShowBMP(0,0,"gamemode.bmp");
		
	}
	if(level==70)
	{
		iClear();
		iShowBMP(0,0,"exit.bmp");
	}
	if(level ==24)
	{
		iClear();
		iShowBMP(0,0,"score.bmp");
		iSetColor(255,0,0);
		itoa(br[0],ju,10);
		iText(362,490,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(br[1],ju,10);
		iText(362,450,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(br[2],ju,10);
		iText(362,410,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(br[3],ju,10);
		iText(362,370,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(br[4],ju,10);
		iText(362,330,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(br[5],ju,10);
		iText(362,290,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(br[6],ju,10);
		iText(362,250,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(br[7],ju,10);
		iText(362,210,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(br[8],ju,10);
		iText(362,170,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(br[9],ju,10);
		iText(362,130,ju,GLUT_BITMAP_TIMES_ROMAN_24);

	}
	if(level ==25)
	{
		iClear();
		iShowBMP(0,0,"score.bmp");
		iSetColor(0,0,255);
		itoa(ar[0],ju,10);
		iText(362,490,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(ar[1],ju,10);
		iText(362,450,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(ar[2],ju,10);
		iText(362,410,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(ar[3],ju,10);
		iText(362,370,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(ar[4],ju,10);
		iText(362,330,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(ar[5],ju,10);
		iText(362,290,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(ar[6],ju,10);
		iText(362,250,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(ar[7],ju,10);
		iText(362,210,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(ar[8],ju,10);
		iText(362,170,ju,GLUT_BITMAP_TIMES_ROMAN_24);
		itoa(ar[9],ju,10);
		iText(362,130,ju,GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if(level==17)
	{
	iClear();
	iSetColor(255,0,0);
	iFilledCircle(ballx,bally,12);
	iSetColor(255,0,255);
	iFilledCircle(ballx1,bally1,12);
	iSetColor(0,0,255);
	iFilledCircle(ballx2,bally2,12);
	iSetColor(255,255,0);
	iFilledCircle(ballx3,bally3,12);
	iSetColor(0,255,0);
	iFilledCircle(ballx4,bally4,12);
	iSetColor(255,255,255);
	iFilledCircle(ballx5,bally5,12);
	iSetColor(0,0,255);
	iFilledCircle(ballx6,bally6,12);
	iSetColor(0,0,255);
	iFilledCircle(ballx7,bally7,12);
	iSetColor(255,0,0);
	iFilledCircle(ballx8,bally8,12);
	iSetColor(255,0,0);
	iFilledCircle(ballx9,bally9,12);
	iSetColor(0,255,0);
	iFilledCircle(ballx10,bally10,12);
	iSetColor(0,255,0);
	iFilledRectangle(sqrex,sqrey,22,22);
	iSetColor(255,0,0);
	iFilledRectangle(sqrex1,sqrey1,22,22);
	iSetColor(0,0,255);
	iFilledRectangle(sqrex2,sqrey2,22,22);
	iSetColor(255,0,255);
	iFilledRectangle(sqrex3,sqrey3,22,22);
	iSetColor(255,255,255);
	iFilledRectangle(sqrex4,sqrey4,22,22);
	iSetColor(255,255,255);
	iFilledEllipse(trnglx1,trngly1,20,15);
	iSetColor(255,0,255);
	iFilledEllipse(trnglx2,trngly2,20,15);
	iSetColor(255,0,0);
	iFilledEllipse(trnglx3,trngly3,20,15);
	iSetColor(0,0,255);
	iFilledEllipse(trnglx4,trngly4,20,15);
	iSetColor(0,255,0);
	iFilledEllipse(trnglx5,trngly5,20,15);
	iShowBMP(imagex,imagey,"bas.bmp");
	
	iSetColor(255,0,0);
	itoa(score,ch,10);
	iText(450,580,"YOUR SCORE : ",GLUT_BITMAP_9_BY_15);
	iText(580,580,ch,GLUT_BITMAP_9_BY_15);
	iText(900,580,"TIME : ",GLUT_BITMAP_9_BY_15);
	itoa(t,nu,10);
	iText(1000,580,nu,GLUT_BITMAP_9_BY_15);
	}
	if(level ==2)
	{
	iClear();
	iSetColor(255,0,0);
	iFilledCircle(ballx,bally,12);
	iSetColor(255,0,255);
	iFilledCircle(ballx1,bally1,12);
	iSetColor(0,0,255);
	iFilledCircle(ballx2,bally2,12);
	iSetColor(255,255,0);
	iFilledCircle(ballx3,bally3,12);
	iSetColor(0,255,0);
	iFilledCircle(ballx4,bally4,12);
	iSetColor(255,255,255);
	iFilledCircle(ballx5,bally5,12);
	iSetColor(0,0,255);
	iFilledCircle(ballx6,bally6,12);
	iSetColor(0,0,255);
	iFilledCircle(ballx7,bally7,12);
	iSetColor(255,0,0);
	iFilledCircle(ballx8,bally8,12);
	iSetColor(255,0,0);
	iFilledCircle(ballx9,bally9,12);
	iSetColor(0,255,0);
	iFilledCircle(ballx10,bally10,12);
	iSetColor(0,255,0);
	iFilledRectangle(sqrex,sqrey,16,16);
	iSetColor(255,0,0);
	iFilledRectangle(sqrex1,sqrey1,16,16);
	iSetColor(0,0,255);
	iFilledRectangle(sqrex2,sqrey2,16,16);
	iSetColor(255,0,255);
	iFilledRectangle(sqrex3,sqrey3,16,16);
	iSetColor(255,255,255);
	iFilledRectangle(sqrex4,sqrey4,16,16);
	iSetColor(255,255,255);
	iFilledEllipse(trnglx1,trngly1,16,10);
	iSetColor(255,0,255);
	iFilledEllipse(trnglx2,trngly2,16,10);
	iSetColor(255,0,0);
	iFilledEllipse(trnglx3,trngly3,16,10);
	iSetColor(0,0,255);
	iFilledEllipse(trnglx4,trngly4,16,10);
	iSetColor(0,255,0);
	iFilledEllipse(trnglx5,trngly5,16,10);
	iShowBMP(imagex,imagey,"bas.bmp");
	itoa(score,ch,10);
	iSetColor(255,0,0);
	
	iText(450,580,"YOUR SCORE : ",GLUT_BITMAP_9_BY_15);
	iText(580,580,ch,GLUT_BITMAP_9_BY_15);
	iText(900,580,"Level : ",GLUT_BITMAP_9_BY_15);
	itoa(level1,nu,10);
	iText(1000,580,nu,GLUT_BITMAP_9_BY_15);
	
	}

}
void iMouseMove(int mx, int my)
{
	
	if(mx<1080-128 && mx>1)
	{
		imagex=mx;
	}
	else
	{
		if(mx>1080-128){
			imagex=1080-128;
		}
		else if(mx<1)
		{
			imagex=1;
		}
	
	}
}
void iMouse(int button, int state, int mx, int my)
{
	
	printf("%d  %d ",mx,my);
	
	
	if(level==1)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if((mx>=117 && mx<=175) && (my>=393 && my<=414))
			{
				level=2;
				level1=1;
			}
			else if((mx>=120 && mx<=264) && (my>=326 && my<=349))
			{
				level=13;
			}
			else if((mx>=119 && mx<=217) && (my>=253 && my<=276))
			{
				level=9;
			}
			else if((mx>=116 && mx<=261) && (my>=114 && my<=133))
			{
				level=8;
			}
			else if((mx>=116 && mx<=212) && (my>=186 && my<=207))
			{
				level=50;
			}
			else if((mx>=111 && mx<=169) && (my>=48 && my<=63))
			{
				level=70;
			}
		}
		
	}
	if(level==70)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			
			if((mx>=222 && mx<=314) && (my>=281 && my<=326))
			{
				exit(0);
			}
			else if((mx>=669 && mx<=778) && (my>=284 && my<=333))
			{
				level=1;
			}
		}
	
	}
	if(level==50)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if((mx>=60 && mx<=256) && (my>=539 && my<=567))
			{
				level=1;
			}

		}
	}
	if(level==8)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if((mx>=41 && mx<=237) && (my>=541 && my<=583))
			{
				level=1;
			
			}
			else if((mx>=257 && mx<=440) && (my>=398 && my<=424))
			{

				level = 24;
			}
			else if((mx>=254 && mx<=359) && (my>=315 && my<=329))
			{
				level = 25;
			}
		}
	}
	if(level==24)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if((mx>=21 && mx<=216) && (my>=541 && my<=569))
			{
				level=8;
			}
		}
	
	}
	if(level==25)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if((mx>=21 && mx<=216) && (my>=541 && my<=569))
			{
				level=8;
			}
		}
	
	}
	if(level==9)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if((mx>=332 && mx<=449) && (my>=366 && my<=391))
			{
				if(musicon==1)
				{
					musicon=0;
					PlaySound(0,0,0);

				}
				else if(musicon==0)
				{
					musicon=1;
					PlaySound("music\\shapeofyou.wav",NULL,SND_LOOP | SND_ASYNC);
				}
			}
			else if((mx>=46 && mx<=227) && (my>=506 && my<=558))
			{
				level=1;
			}
			else if((mx>=326 && mx<=401) && (my>=284 && my<=309))
			{
				level=21;
			}


		}

	}
	if(level==21)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if((mx>=33 && mx<=229) && (my>=507 && my<=555))
			{
				level=9;
			}
		}
	
	}
	if(level==13)
			{ 
				if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
				{
					if((mx>=37 && mx<=162) && (my>=535 && my<=560))
					{
						level=1;
					}
					else if((mx>=206 && mx<=386) && (my>=266 && my<=299))
					{
						level=2;
						level1=1;
					}
					else if((mx>=205 && mx<=422) && (my>=184 && my<=210))
					{
						 ballx=rand()%1080,ballx1=rand()%1080,ballx2=rand()%1080,ballx3=rand()%1080,ballx4=rand()%1080,ballx5=rand()%1080,ballx6=rand()%1080,ballx7=rand()%1080,ballx8=rand()%1080,ballx9=rand()%1080,ballx10=rand()%1080;
						 bally=980,bally1=1377,bally2=2277,bally3=3177,bally4=4077,bally5=4977,bally6=5877,bally7=6777,bally8=7677,bally9=8577,bally10=9477;
						 sqrex=rand()%1080,sqrex1=rand()%1080,sqrex2=rand()%1080,sqrex3=rand()%1080,sqrex4=rand()%1080;
						 sqrey=8000,sqrey1=2488,sqrey2=5555,sqrey3=4288,sqrey4=6875;
						 trnglx1=rand()%1080,trnglx2=rand()%1080,trnglx3=rand()%1080,trnglx4=rand()%1080,trnglx5=rand()%1080;
						 trngly1=7500,trngly2=2600,trngly3=5700,trngly4=4400,trngly5=7000;
						 tflag1=0,tflag5=0,tflag2=0,tflag3=0,tflag4=0;
						 sflag1=0,sflag2=0,sflag3=0,sflag4=0,sflag=0;
						 score=0,full=0,life=0,sfl=0;
						 flag=0,flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag6=0,flag7=0,flag8=0,flag9=0,flag10=0;
						 t=101;
						 level=17;
						if(sfl==0)
						{
							iSetTimer(10,timetravel);
							iSetTimer(1000,timef);
							sfl=1;
						}
					}

				}
			}
	
	if(level==2)
	{
		if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(mx<1080-128 && mx>1){
				imagex=mx;
			}
			
			else
			{
				if(mx>1080-128){
					imagex=1080-128;
				}
				else if(mx<1)
				{
				imagex=1;
				}

	
			}

		}	
	}
if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
{

	if(mx<=1080-128){
		imagex=mx;
	}
	else
	{
		if(mx>0){
			imagex=1080-128;
		}
		else
		{
			imagex=0;
		}
	
	}

}

}
void iKeyboard(unsigned char key)
{
	if(level==18)
	{
		if(key==' ')
		{
			level=1;
			score=0;
			full=0;
		}
	}

	if(level==12)
	{
		if(key==' ')
		{
		level=1;
		score=0;
		full =0;
		level1=0;
		ballx=rand()%1080,ballx1=rand()%1080,ballx2=rand()%1080,ballx3=rand()%1080,ballx4=rand()%1080,ballx5=rand()%1080,ballx6=rand()%1080,ballx7=rand()%1080,ballx8=rand()%1080,ballx9=rand()%1080,ballx10=rand()%1080;
		bally=9000,bally1=1377,bally2=2277,bally3=3177,bally4=4077,bally5=4977,bally6=5877,bally7=6777,bally8=7677,bally9=8577,bally10=9477;
		trnglx1=rand()%1080,trnglx2=rand()%1080,trnglx3=rand()%1080,trnglx4=rand()%1080,trnglx5=rand()%1080;
		trngly1=7500,trngly2=2600,trngly3=5700,trngly4=4400,trngly5=7000;
		sqrex=rand()%1080,sqrex1=rand()%1080,sqrex2=rand()%1080,sqrex3=rand()%1080,sqrex4=rand()%1080;
		sqrey=8000,sqrey1=2488,sqrey2=5555,sqrey3=4288,sqrey4=6875;

		}
	}
	if(level==11)
	{
		if(key==' ')
			{
				level1++;
				level=2;
				full=0;
				ballx=rand()%1080,ballx1=rand()%1080,ballx2=rand()%1080,ballx3=rand()%1080,ballx4=rand()%1080,ballx5=rand()%1080,ballx6=rand()%1080,ballx7=rand()%1080,ballx8=rand()%1080,ballx9=rand()%1080,ballx10=rand()%1080;
				bally=9000,bally1=1377,bally2=2277,bally3=3177,bally4=4077,bally5=4977,bally6=5877,bally7=6777,bally8=7677,bally9=8577,bally10=9477;
				trnglx1=rand()%1080,trnglx2=rand()%1080,trnglx3=rand()%1080,trnglx4=rand()%1080,trnglx5=rand()%1080;
				trngly1=7500,trngly2=2600,trngly3=5700,trngly4=4400,trngly5=7000;
				sqrex=rand()%1080,sqrex1=rand()%1080,sqrex2=rand()%1080,sqrex3=rand()%1080,sqrex4=rand()%1080;
				sqrey=8000,sqrey1=2488,sqrey2=5555,sqrey3=4288,sqrey4=6875;
			}
		}
		if(level ==0)
		{
			if(key==' ')
			{
				level =1;		
			}
		}
	
}
void iSpecialKeyboard(unsigned char key)
{
	if(level ==0)
	{
		if(key==GLUT_KEY_F1)
		{
			level =1;		
		}
	
	}
	if(level == 2)
	{
		if(key==GLUT_KEY_F1)
		{
			if(timer == 0)
			{
				iPauseTimer(timer);
				timer=1;
			}
			else
			{
				timer = 0;
				iResumeTimer(timer);
			}
		
		}

		if(key==GLUT_KEY_RIGHT)
		{
			if(imagex<1080-128)
			{
				imagex+=40;
			}
			else
			{
				imagex=1080-128;
			}
		}
		else if(key==GLUT_KEY_LEFT)
		{
			if(imagex>=1)
			{
				imagex-=40;
			}
			else
			{
				imagex=1;
			}
		}
	}

}
int main()
{
	FILE *cn,*ct;
	cn=fopen("normal.txt","r");
	ct=fopen("time.txt","r");
	for(i=0;i<10;i++)
		{
		fscanf(cn,"%d",&ar[i]);
		fscanf(ct,"%d",&br[i]);
		
		}
	ar[10]=score;
	br[10]=score;
	fclose(cn);
	fclose(ct);
		

	if(level1!=0)
	{
		iSetTimer(12,balldrop);
		
	}
	
	if(musicon)
	{
		PlaySound("music\\shapeofyou.wav",NULL,SND_LOOP | SND_ASYNC);
	}
	iInitialize(1080, 600);

	return 0;
}