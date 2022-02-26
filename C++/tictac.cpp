#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char a[3][3]={NULL};
	int c1,c2,cnt=0,flag=0;
	 
	 while(cnt!=5)
	 {
	 	cout<<"Player 1, Mark your Position";
	 	cout<<"\n Enter the index Positions in the range of 0-2";
	 	cin>>c1>>c2;
	 	a[c1][c2]='X';
	 	cnt++;
	 	if(cnt>=3)
	    {
	    for(int i=0;i<3;i++)
		{
			if(flag==1)
			break;
		for(int j=0;j<3;j++)
		{
			if(a[i][j]=='X')
			{
				if(i==0)
				{
				 if(j==0||j==1||j==2)
				 {
				if(a[i+1][j]=='X')
				{
				if(a[i+2][j]=='X')
				{
				cout<<"Player One Wins !!!";	
				flag=1;
				break;
				}
			    }
			   }
			   if(j==0)
			   {
			   
				if(a[i][j+1]=='X')
				{
				if(a[i][j+2]=='X')
				{
				cout<<"Player One Wins !!!";
				flag=1;
				break;
			    }
				}
			 }
			    if(j==0)
			    {
	
				if(a[i+1][j+1]=='X')
				{
				if(a[i+2][j+2]=='X')
				{
				cout<<"Player One Wins !!!";	
				flag=1;
				break;
			    }
				}
			   }
			    if(j==2)
			    {
			    
				if(a[i+1][j-1]=='X')
				{
				if(a[i+2][j-2]=='X')
				{
				cout<<"Player One Wins !!!";	
				flag=1;
				break;
				}
			}
		}

			else if(i==1)
			{
				if(j==0||j==1||j==2)
				{
			if(a[i+1][j]=='X')
				{
				if(a[i-1][j]=='X')
				{
				cout<<"Player One Wins !!!";
				flag=1;
				break;
			    }
				}
			}
			      if(j==0)
			      {
				if(a[i][j+1]=='X')
				{
				if(a[i][j+2]=='X')
				{
				cout<<"Player One Wins !!!";
				flag=1;
				break;
			    }
				}
			  }
				if(j==1)
				{
				if(a[i+1][j+1]=='X')
				{
				if(a[i-1][j-1]=='X')
				{
				
				cout<<"Player One Wins !!!";	
				flag=1;
				break;
			    }
				}
			}
				if(j==1)
				{
				if(a[i+1][j-1]=='X')
				{
				if(a[i-1][j+1]=='X')
				{
				cout<<"Player One Wins !!!";	
				flag=1;
				break;
			     }
			     
				}
			}
				}
				else if(i==2)
				{
				if(j==0)
				{
					
				if(a[i][j+1]=='X')
				{
				if(a[i][j+2]=='X')
				{
				cout<<"Player One Wins !!!";	
				flag=1;
				break;
				}	
				}
			   }
			     
			     if(j==0)
			     {
			     
				if(a[i-1][j+1]=='X')
				{
				if(a[i-2][j+2]=='X')
				{
				cout<<"Player One Wins !!!";	
				flag=1;
				break;
				}	
				}
			}
			}
		}	
   }
    }
}
}
    
    if(flag==1)
    break;
    else if(cnt==5)
    break;
		 cout<<"Player 2, It's your turn";
	 	cin>>c1>>c2;
	 	a[c1][c2]='O';
	 	if(cnt>=3)
	    {
	    for(int i=0;i<3;i++)
		{
			if(flag==1)
			break;
		for(int j=0;j<3;j++)
		{
			if(a[i][j]=='O')
			{
				if(i==0)
				{
				if(j==0||j==1||j==2)
				{
				if(a[i+1][j]=='O')
				{
				if(a[i+2][j]=='O')
				{
				cout<<"Player Two Wins !!!";	
				flag=1;
				break;
				}
			    }
			   }
			   if(j==0)
			   {
				if(a[i][j+1]=='O')
				{
				if(a[i][j+2]=='O')
				{
				cout<<"Player Two Wins !!!";
				flag=1;
				break;
			    }
				}
			}
				if(j==0)
				{
				
				if(a[i+1][j+1]=='O')
				{
				if(a[i+2][j+2]=='O')
				{
				cout<<"Player Two Wins !!!";	
				flag=1;
				break;
			    }
				}
			  }
				if(j==2)
				{
				if(a[i+1][j-1]=='O')
				{
				if(a[i+2][j-2]=='O')
				{
				cout<<"Player Two Wins !!!";	
				flag=1;
				break;
				}
			}
		}
			}
			else if(i==1)
			{
			if(j==0||j==1||j==2)
			{
				
			if(a[i+1][j]=='O')
				{
				if(a[i-1][j]=='O')
				{
				cout<<"Player Two Wins !!!";
				flag=1;
				break;
			    }
				}
			}
			   if(j==0)
                {
                			
				if(a[i][j+1]=='O')
				{
				if(a[i][j+2]=='O')
				{
				cout<<"Player Two Wins !!!";
				flag=1;
				break;
			    }
				}
			}
			     if(j==1)
			     {
			     
				if(a[i+1][j+1]=='O')
				{
				if(a[i-1][j-1]=='O')
				{
				cout<<"Player Two Wins !!!";	
				flag=1;
				break;
			    }
				}
			 }
				if(j==1)
				{
				
				if(a[i+1][j-1]=='O')
				{
				if(a[i-1][j+1]=='O')
				{
				cout<<"Player Two Wins !!!";	
				flag=1;
				break;
			     }
			     
				}
			  }
				}
				else if(i==2)
				{
					if(j==0)
					{
				if(a[i][j+1]=='O')
				{
				if(a[i][j+2]=='O')
				{
				cout<<"Player Two Wins !!!";	
				flag=1;
				break;
				}	
				}
			    }
			       if(j==0)
			       {
			       
					if(a[i-1][j+1]=='O')
				{
				if(a[i-2][j+2]=='O')
				{
				cout<<"Player Two Wins !!!";	
				flag=1;
				break;
				}	
				}
			}
			}
		}	
   }
    }  
      }

    if(flag==1)
    break;
}
if(flag==0)
cout<<"Match Drawn, Nobody Wins!!!!!!!!";
return 0;
}
