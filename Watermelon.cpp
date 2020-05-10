  #include <iostream>

    using namespace std;

    int main()
    {   int w,flag=0;
        cin >>w;
        //if (w%2==0){
            if((w>=1 && w<=3) || w==5){
            cout <<"NO";
            }
            else if (w%2==0){
             if((w-(w/2))%2==0){
            cout<<"YES";


            }
            else {
           // cout <<()w-(w/2)%2;
            for(int i=2;i<=w/2;i+=2){
                    if ((w-i)%2==0){

                        flag=1;;
                        break;
                    }
                //    else {
                  //          flag=0;

                    //}
                }
                if(flag==0)
                {
                    cout<<"NO";
                }
                else {
                 cout <<"YES";
                 }
            }
            }

            else if(w>=6){
                //cout<<w;

                for(int i=2;i<=w/2;i+=2){
                    if ((w-i)%2==0){

                        flag=1;;
                        break;
                    }
                    else {
                            flag=0;

                    }
                }
                if(flag==0)
                {
                    cout<<"NO";
                }
                else {
                 cout <<"YES";
                 }
            }



}
