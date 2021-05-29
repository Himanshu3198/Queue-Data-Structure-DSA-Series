// circular tour  time complexity O(n)
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       
       int start=0,end=1;
       
       int cur_petrol=p[start].petrol-p[start].distance;
       
       while(end!=start or cur_petrol<0){
           
           
           while(start!=end and cur_petrol<0){
               
               cur_petrol-=p[start].petrol-p[start].distance;
               start=(start+1)%n;
               
               if(start==0){
                   return -1;
               }
           }
           
           cur_petrol+=p[end].petrol-p[end].distance;
           end=(end+1)%n;
       }
       
       return start;
    }
};
