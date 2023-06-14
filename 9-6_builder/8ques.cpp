#include<iostream>

using namespace std;

class bank{

	public:
	    bank(){
	    	int bankid = 2266;
			int bal=230000;
	   	    
			cout<<"Your bank id  is :"<<bankid<<endl;
	   	    cout<<"Your total bank Balance is :"<<bal<<endl;
	   	    
	   	    cout<<"your bank Balance is update succesfull"<<endl;
	   	    
	    }
		~bank(){
			cout<<"Thanks for mony tranfer ";
		}	                                	
	    	
	    	        
};
int main(){
	
	bank obj;
			
	return 0;		
}
