#include <bits/stdc++.h>
using namespace std;
int main(){
    double m_cost,tip_percent,tax_percent;
    int m_tip,m_tax,total_cost=0;
    //int result;
    cin>>m_cost;
    cin>>m_tip;
    cin>>m_tax;
    
    tip_percent=(m_cost*m_tip)/100;
    tax_percent=(m_tax*m_cost)/100;
    /*cout<<setprecision(2)<<fixed<<m_cost<<endl;
    cout<<setprecision(1)<<fixed<<tip_percent<<endl;
    cout<<setprecision(2)<<fixed<<tax_percent<<endl;*/
    total_cost= int (round(m_cost+tip_percent+tax_percent));
    //result=round(total_cost);
    cout<<total_cost<<endl;
}
