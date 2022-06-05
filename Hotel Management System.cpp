#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;

    //Quantity of each item
    int Qrooms= 0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qpizza=0;
    //Food Items sold
    int Srooms= 0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Spizza=0;
    //Total price of items
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_pizza=0;


    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta :";
    cin>>Qpasta;
    cout<<"\n Quantity of burger :";
    cin>>Qburger;
    cout<<"\n noodles :"   ;
    cin>>Qnoodles;
    cout<<"\n Shake :" ;
    cin>>Qshake;
    cout<<"\n pizza :";
    cin>>Qpizza;


    m:
    cout<<"\n\t\t\t Please select from the menu option ";
    cout<<"\n\n1) Rooms ";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles ";
    cout<<"\n5) shake";
    cout<<"\n6) Pizza  ";
    cout<<"\n7) Information regarding sales and collection ";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice!";
    cin>>choice;

    switch(choice)

    {
        case 1: 
        cout<<"\n\n Enter the number of rooms you want :";

        cin>>quant;
        if (Qrooms-Srooms >=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms = Total_rooms + quant*1200;
            cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you!";


        }
        else
        cout<<"\n\t Only"<<Qrooms-Srooms<<" Rooms remaining in hotel";
        break;

        case 2: 
        cout<<"\n\n Enter Pasta quantity :";

        cin>>quant;
        if(Qpasta-Spasta >=quant)
        {
            Spasta=Spasta + quant;
            Total_pasta = Total_pasta+quant*250 ;
            cout<<"\n\n\t\t"<<quant<<" pasta is the order!";
            
            
        }
        else 

        cout<<"\n\t only"<<Qpasta-Spasta<<" pasta remaining in hotel!";
        break;

           case 3: 
        cout<<"\n\n Enter Burger quantity :";

        cin>>quant;
        if(Qburger-Sburger >=quant)
        {
            Sburger=Sburger + quant;
            Total_burger = Total_burger+quant*250 ;
            cout<<"\n\n\t\t"<<quant<<" burger is the order!";
            
            
        }
        else 

        cout<<"\n\t only"<<Qburger-Sburger<<" burger remaining in hotel!";
        break;

           case 4: 
        cout<<"\n\n Enter Noodle quantity :";

        cin>>quant;
        if(Qnoodles-Snoodles >=quant)
        {
            Snoodles=Snoodles + quant;
            Total_noodles = Total_noodles+quant*250 ;
            cout<<"\n\n\t\t"<<quant<< " noodles is the order!";
            
            
        }
        else 

        cout<<"\n\t only"<<Qpasta-Spasta<<" noodles remaining in hotel!";
        break;

           case 5: 
        cout<<"\n\n Enter shakes quantity :";

        cin>>quant;
        if(Qshake-Sshake >=quant)
        {
            Sshake=Sshake + quant;
            Total_shake = Total_shake+quant*250 ;
            cout<<"\n\n\t\t"<<quant<<" shake is the order!";
            
            
        }
        else 

        cout<<"\n\t only"<<Qshake-Sshake<<" shake remaining in hotel!";
        break;

           case 6: 
        cout<<"\n\n Enter Pizza quantity :";

        cin>>quant;
        if(Qpizza-Spizza >=quant)
        {
            Spizza=Spizza + quant;
            Total_pizza = Total_pizza+quant*250 ;
            cout<<"\n\n\t\t"<<quant<<" pizza is the order!";
            
            
        }
        else 

        cout<<"\n\t only"<<Qpizza-Spizza<<"Pizzas remaining in hotel!";
        break;

        case 7:
        cout<<"\n\t\tDetails of sales and collection ";
        cout<<"\n\n Number of rooms we had :"<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
        cout<<"\n\n Remaining rooms:"<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day:"<<Total_rooms;


 
        cout<<"\n\n Number of Pastas we had :"<<Qpasta;
        cout<<"\n\n Number of Pastas we sold "<<Spasta;
        cout<<"\n\n Remaining Pastas:"<<Qpasta-Spasta;
        cout<<"\n\n Total Pasta collection for the day:"<<Total_pasta;

        cout<<"\n\n Number of burgers we had :"<<Qburger;
        cout<<"\n\n Number of burgers we sold "<<Sburger;
        cout<<"\n\n Remaining burgers:"<<Qburger-Sburger;
        cout<<"\n\n Total burger collection for the day:"<<Total_burger;


        cout<<"\n\n Number of noodles we had :"<<Qnoodles;
        cout<<"\n\n Number of noodles we sold "<<Snoodles;
        cout<<"\n\n Remaining noodles:"<<Qnoodles-Snoodles;
        cout<<"\n\n Total noodles collection for the day:"<<Total_noodles;


        cout<<"\n\n Number of shake we had :"<<Qshake;
        cout<<"\n\n Number of shake we sold "<<Sshake;
        cout<<"\n\n Remaining shake:"<<Qshake-Sshake;
        cout<<"\n\n Total shake collection for the day:"<<Total_shake;


        cout<<"\n\n Number of pizza we had :"<<Qpizza;
        cout<<"\n\n Number of pizza we sold "<<Spizza;
        cout<<"\n\n Remaining noodles:"<<Qpizza-Spizza;
        cout<<"\n\n Total pizza collection for the day:"<<Total_pizza;


        case 8:
        exit(0);

        default:
        cout<<"\n Please select the numbers mentioned above!";




        
    }
    goto m ;

}