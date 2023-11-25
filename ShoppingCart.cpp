#include<bits/stdc++.h>
using namespace std;

class Basket{
  public: 
    vector<string>Product;
    vector<int>UnitPrice;
    vector<int>GST;
    vector<int>Quantity;

    Basket( vector<string>Product,vector<int>UnitPrice,vector<int>GST, vector<int>Quantity){
        this->Product = Product;
        this->UnitPrice = UnitPrice;
        this->GST = GST;
        this->Quantity = Quantity;
    }
    
    int maximumGST(vector<int>&GST){
      int maxGst = INT_MIN;
      int ind; 
      for(int i=0;i<GST.size();i++){
        if(GST[i]>maxGst){
            maxGst = GST[i];
            ind = i;
        }
      }
      return ind;
    }

    int totalAmount(vector<int>&UnitPrice){
        int sumOfPrice = 0;
        for(int i=0;i<UnitPrice.size();i++){
            sumOfPrice += UnitPrice[i];
        }
        return sumOfPrice;
    }

};

int main(){
    vector<string>Product = {"Leather wallet","Umbrella","Cigarette","Honey"};
    vector<int>UnitPrice = {1100,900,200,100};
    vector<int>GST= {18,12,28,0};
    vector<int>Quantity = {1,4,3,2};

    Basket b = Basket(Product,UnitPrice,GST,Quantity);


    int index =  b.maximumGST(GST);
    cout<<"The maximum Gst for the product is "<<Product[index]<<endl;

    int total = b.totalAmount(UnitPrice);
    cout<<"The total amount to be paid is "<<total<<endl;


}