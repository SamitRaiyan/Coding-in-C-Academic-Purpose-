#include<bits/stdc++.h>
using namespace std;
main()
{
    int Bengali,English,ICT,Math,Science,result,GPA;
    // Mark Input part : 

    cout << "Input the obtained marks : "<< endl;
    cout << "Bengali : ";
    cin >> Bengali;
   
    cout << "English : ";
    cin >> English;
   
    cout << "ICT : ";
    cin >> ICT;
    
    cout << "Math : ";
    cin >> Math;
    
    cout << "Science : ";
    cin >> Science;
    // Pass or fail
    if(Bengali < 33 || English < 33 || ICT < 33 || Math < 33 || Science < 33){
        cout << "Result : Failed" << endl << "Grade : F";
        
    }
    else{
        float total = (Bengali+English+ Math+ICT+Science)/5;
        
        if(total <100 && total < 79){
             
        }
    }









    return 0;
}