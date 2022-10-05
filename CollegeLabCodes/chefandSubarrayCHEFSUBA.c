#include<stdio.h>
#include<string.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) > (y)) ? (y) : (x))
int indices[300009], addition[100009]={}, one[100009]={}, maximum[100009]={};
char str[100009];
int main()
{
  char ch;
  int a,n,b,spot=0,structure,request,input,j,l=1,r=1,cnt,version,weight;
  scanf("%d%d%d",&n, &structure, &request);

  for(input=1; input<=n; input++){
    scanf("%d",&version);
    addition[input] = addition[input-1] + version;
  }

  structure = min(structure, n);
  if(n==1){

    scanf("%s",str);
    for(j = 0; j <request; j++){
       if(str[j]=='!')
        continue;
       else
        printf("%d",version);
    }
  }

  else{
  for(input = 1; input <= n; input++){

    if(( input + structure - 1 )<= n)
        one[input] = addition[input + structure - 1] - addition[input - 1];
    else
        one[input] = addition[n] - addition[input - 1] + addition[(input + structure - 1) % n];
  }

  for(input = 2; ((input + structure - 1) % n) != 2; input++){

    if(input == 2)
        indices[r] = 2;
  
    else{

        while(( one[indices[r]] <= one[input] )&&( r >= l))
            r--;
        indices[++r] = input;
    }
  }

  maximum[1] = one[indices[l]];   weight = (input-2);   input = input%n;

  if(input==0)
    input=n;

  for(j = 2; j <=n ; j++){
        a=1;
        while(a == 1){

            if(input < indices[l]){

                if(((indices[l] + weight - 1) > n)&&(((indices[l] + weight - 1) % n) < input)&&(spot != 1)){
                    if(l == r)
                        spot=1;
                    else
                        l++;
                }
                else
                    a=0;
            }

            else if(input > indices[l]){

                if(((indices[l] + weight - 1) < input)&&(spot != 1)){
                    if(l == r)
                        spot=1;
                    else
                        l++;
                }
                else
                    a=0;
            }
        }

        if(spot == 1)
            indices[r] = input;

        else{
            while(( one[indices[r]] <= one[input] )&&( r >= l))
                r--;
            indices[++r] = input;
        }

        spot=0;
        input = (input+1)%n;
        if(input == 0)
            input=n;
        maximum[j] = one[indices[l]];;
  }
  scanf("%s",str);
  b = n;
  for(j = 0; j <request; j++){
        if(str[j]=='!'){
            if(b == 1)
                b = n;
            else
                b--;
        }
        else{
            if(structure == 1 && addition[n]>0)
                printf("1\n");
            else
                printf("%d\n",maximum[b]);
        }
  }
  }
  return 0;
}
