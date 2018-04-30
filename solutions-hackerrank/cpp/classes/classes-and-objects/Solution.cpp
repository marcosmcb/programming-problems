class Student{
  
    private:
        int sub[5];
    
    public: 
        void Input()
        {
            for(int i=0; i < 5; i++)
                cin >> sub[i];
        }
        int CalculateTotalScore()
        {
            int sum = 0;
            
            for(int i=0; i < 5; i++)
                sum += sub[i];
            
            return sum;
        }
    
};