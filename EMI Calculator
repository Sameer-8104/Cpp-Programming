
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"---input Section---"<<endl;
    int P;
    int N;
    float R;
    float anual_rate;
    float EMI;
    cout<<"Loan Amount := "<<endl;
    cin>>P;
    
    cout<<"Tenure (Years) := "<<endl;
    cin>>N;
    N = N * 12;
    
    cout<<"Interest Rate (% P.A.) := "<<endl;
    cin>>anual_rate;
    R = anual_rate/(12*100);
    
    cout<<"\n---output Section---\n";
    EMI = (P * R * pow(1 + R, N)) / (pow(1 + R, N) -1);
    cout<<"\nMonthly Home Loan EMI\n"<<EMI;
    
    cout<<"\nView Details";
    cout<<"\nPrincipal Amount\n"<<P;
    
    int payable;
    payable = EMI * N;
    
    int I_amount;
    I_amount = payable - P;
    
    cout<<"\nInterest Amount\n"<<I_amount;
    cout<<"\nTotal Amount Payable\n"<<payable;

    return 0;
}
