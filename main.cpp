#include<iostream>

using namespace std;
void mencloths();
void shirtlist();
void paintlist();
void mencasual();
void mencasualtwo();
void menformal();
void womencloth();
void menshoe();
void womenshoe();
void formalshoe();
void discount();
int main()
{
    int a,b,c;
    cout<<"**********************************************************"<<endl;
    cout<<"                                                          "<<endl;
    cout<<"           Welcome To our  Fashion Store                  "<<endl;
    cout<<"                                                          "<<endl;
    cout<<"**********************************************************"<<endl;
    cout<<"                                                 "<<endl;
    cout<<"  *   Press 1 for Cloths   * "<<endl;
    cout<<"  *   Press 2 for Shoes    * "<<endl;
    cout<<"  *   Press 3 for Exit     * "<<endl;
    cin>>a;
    if(a==1)
    {
        cout<<" **************************************"<<endl;
        cout<<"      Thanks For Choosing Cloths       "<<endl;
        cout<<" **************************************"<<endl;
        cout<<" "<<endl;
        cout<<"  Press 1 For Men Cloths "<<endl;
        cout<<"  press 2 for women cloths"<<endl;
        cout<<"  press 3 for exit        "<<endl;
        cin>>b;
        if(b==1)
        {
             mencloths();
        }
        else if (b==2)
        {
         womencloth();
        }}
    else if(a==2)
    {
        cout<<" ***************************************"<<endl;
        cout<<"       Thanks for choosing Shoes        "<<endl;
        cout<<" ***************************************"<<endl;
        cout<<" "<<endl;
        cout<<" *   Press 1 for men shoes   * "<<endl;
        cout<<" *   Press 2 for women shoes * "<<endl;
        cout<<" *   Press 3 for exit "<<endl;
        cin>>c;
        if(c==1)
       {
       menshoe();
       }
       else if(c==2)
       {
           womenshoe();
       }

    }
    else{
        cout<<endl;
    }
    return 0;
}

void menshoe()
{

    int i,j;
    double n;
     int Amount=100;
    int Samount=200;
    int Tamount=300;
    double Discount,totalAmount;
  int d,h;
    char e[10],f[10],g[10];
cout<<" ============================================== "<<endl;
cout<<"             Thanks for choosing men shoes     "<<endl;
cout<<" ============================================== "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
cout<<" * Press 1 for sports shoes *"<<endl;
cout<<" * press 2 for formal shoes *"<<endl;
cin>>d;
if(d==1){
    cout<<" *****Thanks For choosing sports shoes ****** "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" * Enter your Brand name : ";
    cin>>e;
    cout<<" * Enter your Size : ";
    cin>>f;
    cout<<" * Enter your color : ";
    cin>>g;
    cout<<"         "<<endl;
    cout<<"         "<<endl;
    
   cout<<e<<","<<f<<","<<g<<endl;

    cout<<" * perss 1 for  running shoes    : "<<endl;
    cout<<" * press 2 for football shoes    : "<<endl;
    cin>>h;
    if(h==1){
         cout<<" ******* Thanks for taking running shoes ******* "<<endl;
     cout<<"           "<<endl;
     cout<<" press 1 to make payment "<<endl;
     cout<<" press 2 to take discount "<<endl;
     cout<<" press 3 for back to list "<<endl;
     cin>>j;
     if (j==1){
         cout<<"**************** Thanks for visting ********************* "<<endl;
         cout<<"**************** Have  a  good day! ********************* "<<endl;  
     }
     if(j==2){
         cout<<" ********** how much you dicount you want ************  : "<<endl;
         cout<<" ********* write in number only           ***********   : ";
         cin>>n;
         cout<<" "<<endl;
         
         

       Discount=n/100*Amount;
    totalAmount=Amount-Discount;
    cout<<" "<<endl;
    cout<<" Your Ammount is "<<totalAmount<<endl;  
    cout<<" "<<endl;
    cout<<"**************** Thanks for visting ********************* "<<endl;
    cout<<"**************** Have  a  good day! ********************* "<<endl;           

     }
    
    while(j==3);

    }
    else if (h==2)
    {
 cout<<" ******* Thanks for taking football shoes ******* "<<endl;
     cout<<"           "<<endl;
     cout<<" press 1 to make payment "<<endl;
     cout<<" press 2 to take discount "<<endl;
     cout<<" press 3 for back to list "<<endl;
     cin>>j;
     if (j==1){
         cout<<"**************** Thanks for visting ********************* "<<endl;
         cout<<"**************** Have  a  good day! ********************* "<<endl;  
     }
     if(j==2){
         cout<<" ********** how much you dicount you want ************  : "<<endl;
         cout<<" ********* write in number only           ***********   : ";
         cin>>n;
         cout<<" "<<endl;
         
         

       Discount=n/100*Tamount;
    totalAmount=Tamount-Discount;
    cout<<" "<<endl;
    cout<<" Your Ammount is "<<totalAmount<<endl;  
    cout<<" "<<endl;
    cout<<"**************** Thanks for visting ********************* "<<endl;
    cout<<"**************** Have  a  good day! ********************* "<<endl;           

     }}
    

     
    
    while(j==3);}





    else if(d==2)
    {
        formalshoe();
    }}

    




void womenshoe()
{

   int i,j;
    double n;
     int Amount=100;
    int Samount=200;
    int Tamount=300;
    double Discount,totalAmount;
  int d,h;
    char e[10],f[10],g[10];
cout<<" ============================================== "<<endl;
cout<<"             Thanks for choosing women shoes    "<<endl;
cout<<" ============================================== "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
cout<<" * Press 1 for sports shoes *"<<endl;
cout<<" * press 2 for formal shoes *"<<endl;
cin>>d;
if(d==1){
    cout<<" *****Thanks For choosing sports shoes ****** "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" * Enter your Brand name : ";
    cin>>e;
    cout<<" * Enter your Size : ";
    cin>>f;
    cout<<" * Enter your color : ";
    cin>>g;
    cout<<"         "<<endl;
    cout<<"         "<<endl;
    
   cout<<e<<","<<f<<","<<g<<endl;

    cout<<" * perss 1 for  running shoes    : "<<endl;
    cout<<" * press 2 for football shoes    : "<<endl;
    cin>>h;
    if(h==1){
         cout<<" ******* Thanks for taking running shoes ******* "<<endl;
     cout<<"           "<<endl;
     cout<<" press 1 to make payment "<<endl;
     cout<<" press 2 to take discount "<<endl;
     cout<<" press 3 for back to list "<<endl;
     cin>>j;
     if (j==1){
         cout<<"**************** Thanks for shopping ********************* "<<endl;
         cout<<"**************** Have  a  good day! ********************* "<<endl;  
     }
     if(j==2){
         cout<<" ********** how much you dicount you want ************  : "<<endl;
         cout<<" ********* write in number only           ***********   : ";
         cin>>n;
         cout<<" "<<endl;
         
         

       Discount=n/100*Amount;
    totalAmount=Amount-Discount;
    cout<<" "<<endl;
    cout<<" Your discount is "<<totalAmount<<endl;  
    cout<<" "<<endl;
    cout<<"**************** Thanks for shopping ********************* "<<endl;
    cout<<"**************** Have  a  good day! ********************* "<<endl;           

     }
    
    while(j==3);

    }
    else if (h==2)
    {

 cout<<" *****Thanks For choosing sports shoes ****** "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" * Enter your Brand name : ";
    cin>>e;
    cout<<" * Enter your Size : ";
    cin>>f;
    cout<<" * Enter your color : ";
    cin>>g;
    cout<<"         "<<endl;
    cout<<"         "<<endl;
    
   cout<<e<<","<<f<<","<<g<<endl;

    cout<<" * perss 1 for  running shoes   ($100) : "<<endl;
    cout<<" * press 2 for football shoes   ($300) : "<<endl;
    cin>>h;
    if(h==1){
         cout<<" ******* Thanks for taking football shoes ******* "<<endl;
     cout<<"           "<<endl;
     cout<<" press 1 to make payment "<<endl;
     cout<<" press 2 to take discount "<<endl;
     cout<<" press 3 for back to list "<<endl;
     cin>>j;
     if (j==1){
         cout<<"**************** Thanks for shopping ********************* "<<endl;
         cout<<"**************** Have  a  good day! ********************* "<<endl;  
     }
     if(j==2){
         cout<<" ********** how much you dicount you want ************  : "<<endl;
         cout<<" ********* write in number only           ***********   : ";
         cin>>n;
         cout<<" "<<endl;
         
         

       Discount=n/100*Tamount;
    totalAmount=Tamount-Discount;
    cout<<" "<<endl;
    cout<<" Your Ammount is "<<totalAmount<<endl;  
    cout<<" "<<endl;
    cout<<"**************** Thanks for shopping ********************* "<<endl;
    cout<<"**************** Have  a  good day! ********************* "<<endl;           

     }
    
    while(j==3);

    }}}



    else if(d==2){

formalshoe();


    }


}





void formalshoe()
{
     int i,j;
    double n;
     int Amount=100;
    int Samount=200;
    int Tamount=300;
    double Discount,totalAmount;
  int d,h;
    char e[10],f[10],g[10];
     cout<<" *****Thanks For choosing formal shoes ****** "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" * Enter your Brand name : ";
    cin>>e;
    cout<<" * Enter your Size : ";
    cin>>f;
    cout<<" * Enter your color : ";
    cin>>g;
    cout<<"         "<<endl;
    cout<<"         "<<endl;
    
   cout<<e<<","<<f<<","<<g<<endl;
do{
    cout<<" * perss 1 for  simple formal shoes  ($100)  : "<<endl;
    cout<<" * press 2 for high neck shoes ($300)   : "<<endl;
    cin>>h;
    if(h==1){
         cout<<" ******* Thanks for taking simple formal shoes ******* "<<endl;
     cout<<"           "<<endl;
     cout<<" press 1 to make payment "<<endl;
     cout<<" press 2 to take discount "<<endl;
     cout<<" press 3 for back to list "<<endl;
     cin>>j;
     if (j==1){
         cout<<"**************** Thanks for visting ********************* "<<endl;
         cout<<"**************** Have  a  good day! ********************* "<<endl;  
     }
     if(j==2){
         cout<<" ********** how much you dicount you want ************  : "<<endl;
         cout<<" ********* write in number only           ***********   : ";
         cin>>n;
         cout<<" "<<endl;
         
         

       Discount=n/100*Amount;
    totalAmount=Amount-Discount;
    cout<<" "<<endl;
    cout<<" Your Ammount is "<<totalAmount<<endl;  
    cout<<" "<<endl;
    cout<<"**************** Thanks for visting ********************* "<<endl;
    cout<<"**************** Have  a  good day! ********************* "<<endl;           

     }
    
    while(j==3);

    }
    
    else if(h==2)
    {

         cout<<" ******* Thanks for taking high neck  shoes ******* "<<endl;
     cout<<"           "<<endl;
     cout<<" press 1 to make payment "<<endl;
     cout<<" press 2 to take discount "<<endl;
     cout<<" press 3 for back to list "<<endl;
     cin>>j;
     if (j==1){
         cout<<"**************** Thanks for visting ********************* "<<endl;
         cout<<"**************** Have  a  good day! ********************* "<<endl;  
     }
     if(j==2){
         cout<<" ********** how much you dicount you want ************  : "<<endl;
         cout<<" ********* write in number only           ***********   : ";
         cin>>n;
         cout<<""<<endl;
         

       Discount=n/100*Tamount;
    totalAmount=Tamount-Discount;
    cout<<" "<<endl;
    cout<<" Your Ammount is "<<totalAmount<<endl;  
    cout<<" "<<endl;
    cout<<"**************** Thanks for visting ********************* "<<endl;
    cout<<"**************** Have  a  good day! ********************* "<<endl;           

     }}}
    
    while(j==3);

    }





































void mencloths()
{
    int d,h;
    char e[10],f[10],g[10];
cout<<" ============================================== "<<endl;
cout<<"             Thanks for choosing men cloths     "<<endl;
cout<<" ============================================== "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
cout<<" * Press 1 for sports cloths *"<<endl;
cout<<" * press 2 for casual cloths *"<<endl;
cout<<" * Press 3 for formal cloths *"<<endl;
cin>>d;
if(d==1){
    cout<<" *****Thanks For choosing sports Cloths ****** "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" * Enter your Brand name : ";
    cin>>e;
    cout<<" * Enter your Size : ";
    cin>>f;
    cout<<" * Enter your color : ";
    cin>>g;
    cout<<"         "<<endl;
    cout<<"         "<<endl;
    cout<<" * perss 1 for T-Shirts , upper , Jackets  :  "<<endl;
    cout<<" * press 2 for lowers   , jeans shorts ,  simple shorts   :  "<<endl;
    cin>>h;
    if(h==1){
        shirtlist();

    }
    else if(h==2){
      paintlist();
    } }

    else if (d==2)
    {
        cout<<" *****Thanks For choosing casual Cloths ****** "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" * Enter your Brand name : ";
    cin>>e;
    cout<<" * Enter your Size : ";
    cin>>f;
    cout<<" * Enter your color : ";
    cin>>g;
    cout<<"         "<<endl;
    cout<<"         "<<endl;
    cout<<" * perss 1 for  Shirts , Hoodies ,  snow Jackets  :  "<<endl;
    cout<<" * press 2 for  sweaters , sleepwears , jeans    :  "<<endl;
    cin>>h;
    if(h==1)
    {
       mencasual();
    }
    else if (h==2)
    {
     mencasualtwo();
    }}

    else if(d==3)
    {

         cout<<" *****Thanks For choosing casual Cloths ****** "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" * Enter your Brand name : ";
    cin>>e;
    cout<<" * Enter your Size : ";
    cin>>f;
    cout<<" * Enter your color : ";
    cin>>g;
    cout<<"         "<<endl;
    cout<<"         "<<endl;
    cout<<" * perss 1 for  Shirts , Hoodies ,  snow Jackets  :  "<<endl;
    cout<<" * press 2 for  sweaters , sleepwears , jeans    :  "<<endl;
    cin>>h;
    if(h==1){
        menformal();

    }

    }

}
void shirtlist()
{
    int i,j;
     int Amount=100;
    int Samount=200;
    int Tamount=300;
    double Discount,totalAmount;
    do{
    cout<<" press 1 to buy T-shirt"<<Amount<<"($100) "<<endl;
    cout<<" press 2 to buy upper  ($200)"<<endl;
    cout<<" press 3 to buy Jacket  ($300)"<<endl;
    cout<<" press 4 to exit"<<endl;
    cin>>i;
    if (i==1)
    {
     cout<<" ******* Thanks for taking T-Shirt ******* "<<endl;
     cout<<"           "<<endl;
     cout<<" press 1 to make payment "<<endl;
     cout<<" press 2 to take discount "<<endl;
     cout<<" press 3 for back to list "<<endl;
     cin>>j;
     if (j==1){
         cout<<"**************** Thanks for visting ********************* "<<endl;
         cout<<"**************** Have  a  good day! ********************* "<<endl;  
     }
     if(j==2){
       Discount=10/100*Amount;
    totalAmount=Amount-Discount;
    cout<<" "<<endl;
    cout<<" Your Ammount is "<<totalAmount<<endl;  
    cout<<" "<<endl;
    cout<<"**************** Thanks for visting ********************* "<<endl;
    cout<<"**************** Have  a  good day! ********************* "<<endl;           

     }
    
    while(j==3);

    }

    
         else if(i==2){
            cout<<" *************** Thanks for taking upper  ************* "<<endl;
             cout<<"           "<<endl;
     cout<<" press 1 to make payment "<<endl;
     cout<<" press 2 to take discount "<<endl;
     cout<<" press 3 for back to list "<<endl;
     cin>>j;
     if (j==1){
         cout<<"**************** Thanks for visting ********************* "<<endl;
         cout<<"**************** Have  a  good day! ********************* "<<endl;  
     }
     else if(j==2)
     {
          Discount=10/100*Samount;
    totalAmount=Samount-Discount;
    cout<<" "<<endl;
    cout<<" Your Ammount is $"<<totalAmount<<endl;  
    cout<<" "<<endl;
    cout<<"**************** Thanks for visting ********************* "<<endl;
    cout<<"**************** Have  a  good day! ********************* "<<endl;  
     }
     while(j==3);}





     else if(i==3)
     {
         cout<<"******************* Thanks for taking jacket ******************** "<<endl;
          cout<<"           "<<endl;
     cout<<" press 1 to make payment "<<endl;
     cout<<" press 2 to take discount "<<endl;
     cout<<" press 3 for back to list "<<endl;
     cin>>j;
     if (j==1){
         cout<<"**************** Thanks for visting ********************* "<<endl;
         cout<<"**************** Have  a  good day! ********************* "<<endl;  
     }
     else if (j==2){
          Discount=10/100*Tamount;
    totalAmount=Tamount-Discount;
    cout<<" "<<endl;
    cout<<" Your Ammount is $"<<totalAmount<<endl;  
    cout<<" "<<endl;
    cout<<"**************** Thanks for visting ********************* "<<endl;
    cout<<"**************** Have  a  good day! ********************* "<<endl;  
     }}}
     while(j==3);
}


