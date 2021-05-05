
/*************
 Driver program to test below functions
 
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
****************/

class Polynomial {
    public:
    int size;
    int *degCoeff;   
    // Name of your array (Don't change this)
    Polynomial()
    {
        degCoeff=new int[5];
        size=5;
        for(int i=0;i<size;i++)
        {
            degCoeff[i]=0;
        }
    }
    Polynomial(Polynomial const &p)
    {
        this->degCoeff=new int[p.size];
        this->size=p.size;
        for(int i=0;i<size;i++)
        {
            degCoeff[i]=p.degCoeff[i];
        }
    }
     Polynomial operator =(Polynomial const &p)
    {
        this->degCoeff=new int[p.size];
        this->size=p.size;
        for(int i=0;i<size;i++)
        {
            degCoeff[i]=p.degCoeff[i];
        }
         return *this;
    }
    void setCoefficient(int degree,int coeff)
    {
        if(degree<size)
            degCoeff[degree]=coeff;
        else
        {
     
                 this->size=degree+1;
            this->setCoefficient(degree,coeff);
        }
    }
    Polynomial operator +(Polynomial p)
    {
        int maxsize=this->size>p.size?this->size:p.size;
        Polynomial f;
        
        if(maxsize==this->size)
        {
            for(int i=p.size;i<maxsize;i++)
            {
                p.degCoeff[i]=0;
            }
        }
        else
        {
            for(int i=size;i<maxsize;i++)
            {
                degCoeff[i]=0;
            }
        }
        for(int i=0;i<maxsize;i++)
        {
            f.setCoefficient(i,degCoeff[i]+p.degCoeff[i]);
        }
        return f;
    }
    // Complete the class
        Polynomial operator -(Polynomial p)
    {
        int maxsize=this->size>p.size?this->size:p.size;
        Polynomial f;
       
        if(maxsize==this->size)
        {
            for(int i=p.size;i<maxsize;i++)
            {
                p.degCoeff[i]=0;
            }
        }
        else
        {
            for(int i=size;i<maxsize;i++)
            {
                degCoeff[i]=0;
            }
        }
        for(int i=0;i<maxsize;i++)
        {
            f.setCoefficient(i,degCoeff[i]-p.degCoeff[i]);
        }
            return f;
    }
    Polynomial operator*(Polynomial const &p)
    {
        Polynomial f;
       
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<p.size;j++)
            {
                f.setCoefficient(i*j,f.degCoeff[i*j]+degCoeff[i]*p.degCoeff[j]);
            }
        }
        return f;
    }
    void print()
    {
        for(int i=0;i<size;i++)
        {
            if(degCoeff[i]!=0)
            cout<<degCoeff[i]<<"x"<<i<<" ";
        }
    }
    
};
