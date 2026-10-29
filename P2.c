#include<stdio.h>
int main()
{
  int a[50], n, i, j, pos, item, ch,temp;
  printf("Enter size : ");
  scanf("%d", &n);
  printf("Enter elements : ");
  for(i=0; i<n; i++)
     scanf("%d",&a[i]);
  do
  {
     printf("\n 1.Insert\n 2.Delete\n 3.Search\n 4.Sort\n 5.Display\n 6.Exit");
     printf("\nEnter choice : ");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1: printf("Enter position and item : ");
                scanf("%d%d",&pos,&item);
                for(i=n; i>=pos;i--)
                   a[i] = a[i-1];
                a[pos-1] = item;
                n++;
                break;
        case 2: printf("Enter position : ");
                scanf("%d",&pos);
                for(i=pos-1; i<n-1; i++)
                   a[i] = a[i+1];
                n--;
                break;
        case 3: printf("Enter item : ");
                scanf("%d",&item);
                for(i=0; i<n; i++)
                   if(a[i]==item)
                break;
                if(i<n)
                   printf("Found at position %d", i+1);
                else
                   printf("Not Found");
                break;
        case 4: for(i=0; i<n-1; i++)
                   for(j=0; j<n-i-1; j++)
                      if(a[j]>a[j+1])
                      {
                         temp = a[j];
                         a[j] = a[j+1];
                         a[j+1] = temp;
                      }
                      printf("Sorted");
                      break;
        case 5: for(i=0; i<n; i++)
                     printf("%d ",a[i]);
                  break;
        case 6: break;
        default : printf("Invalid Choice");
     }
   }while(ch!=6);
  return 0;  
}

