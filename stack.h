class stack{
    private:
        int sizeOfS;
        int* S;
        int top;
    public:
        stack(int s);
        void push(int e);
        void pop();
        const int& Top() const;
        int size() const;
        bool empty() const;
        void print() const;
};