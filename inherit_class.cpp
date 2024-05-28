/*2. Create two class named A and B, A has a int data with some value on 
   protected scope, try to acess that data with inherited class B of A.
    let a = 5; on A's protected scope, display it with display() function 
    defiend on class B.*/
    #include<iostream>
    using namespace std;
    class Mom
    {
        protected: 
            int DNA;
            int Characteristics;
        public:
            Mom(int D, int C)
            {
                DNA = D;
                Characteristics = C;
            }
        virtual void display()
        {
            cout<<"Mom\'s DNA = "<<DNA<<endl;
            cout<<"Mom\'s Characteristics = "<<Characteristics<<endl;
        }
    };
    class Child : protected Mom
    {
        public:
            Child(int D, int C) : Mom(D,C) 
            {
                DNA = D;
                Characteristics = C;
            }
        void display() override
        {
            cout<<"Child\'s DNA = "<<DNA<<endl;
            cout<<"Child\'s Characteristics = "<<Characteristics<<endl;
        }
    };
    int main()
    {
        Mom m(123, 998);
        Child c(123, 998);
        m.display();
        c.display();
        return 0;
    }