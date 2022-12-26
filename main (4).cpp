/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  
    int a;
    
    
    cout <<"informe o valor"<<endl;
    cin >>a;
    
    como  fazer multiplicacao de forma facil
    /*  
    cout <<  "multiplicacao"<< " 1 vzs 10 ="<< 1 * a<<endl;
    cout << "multiplicacao"<<" 2 vzs 10 =" <<2 * a <<endl;
    cout << "multiplicacao"<<" 3 vzs 10 ="<<3 * a<<endl;
    cout << "multiplicado"<<" 4 vzs 10 = "<<4 * a<<endl;
    cout << "multiplicado"<<" 5 vzs 10 = "<<5 * a<<endl;
    cout << "multiplicado"<<" 6 vzs 10 = "<<6 * a<<endl;
    cout << "multiplicado"<<" 7 vzs 10 = "<<7 * a <<endl;
    cout << "multiplicado"<<" 8 vzs 10 ="<< 8 * a<<endl;
    cout << "multiplicado"<<" 9 vzs 10 ="<< 9 * a<<endl;
    cout << "multiplicado"<<" 10 vzs 10 ="<<10 * a<< endl;
    */
    segunda forma de fazer multiplicado usando for 
    
    for(int i=1; i <= 10;++i){
        cout<<"multiplicado " << i<< " vzs "<<a<<" = "<<i * a<<endl;
        
        
    }
    
    
        return 0;
}
