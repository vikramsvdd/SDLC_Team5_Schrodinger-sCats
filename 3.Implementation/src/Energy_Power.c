
#include"com.h"


double energy_r(double signalReal[],double signalImag[],int n)
{
	double energyReal = 0;
    for(int i=0;i<n;i++)
    {
        energyReal=energyReal+(signalReal[i]*signalReal[i])-(signalImag[i]*signalImag[i]);
        
    }
    
    return energyReal;
    
}

double energy_i(double signalReal[],double signalImag[],int n)
{
	double energyImag = 0;
	for(int i=0;i<n;i++)
    {
         energyImag=energyImag+2*signalReal[i]*signalImag[i];
        
    }
    
    return energyImag;


}


double power_r(double energyReal,int n){

	double powerReal = energyReal/n;
	return powerReal;
}


double power_i(double energyImag,int n){

	double powerImag = energyImag/n;
	return powerImag;

}

 
    
   
int io_Energy_Power(){

	int n;
	printf("\nEnter the length of Discrete signal : ");
	scanf("%d",&n);
	if((n<=0)&&(isalpha(n)==0)&&(ispunct(n)==0))
	{
	printf("\nEnter Valid N\n");
	}
	else{
		double signalReal[100];
   		double signalImag[100];
    	double energyReal=0,energyImag=0,powerReal=0,powerImag=0;
		printf("\nEnter real and Imaginary values:\n");
		for(int i=0;i<n;i++){
			 scanf("%lf %lf",&signalReal[i],&signalImag[i]);
		}
		energyReal = energy_r(signalReal,signalImag,n);
		energyImag = energy_i(signalReal,signalImag,n);
		powerReal = power_r(energyReal,n);
		powerImag = power_i(energyImag,n);
		printf("\n Energy is %lf + (%lf)i.",energyReal,energyImag);
		printf("\n Power is %lf + (%lf)i.",powerReal,powerImag);
	
	}
}

    
    
    

