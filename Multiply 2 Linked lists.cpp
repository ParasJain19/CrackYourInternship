
class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        if(first==nullptr || second ==nullptr)
        return 0;
        const int mod=1e9 +7;
        long long n1=0;
        while(first!=nullptr)
        {
            n1=(n1*10+first->data)%mod;
            first=first->next;
        }
        long long n2=0;
        while(second!=nullptr)
        {
            n2=(n2*10+second->data)%mod;
            second=second->next;
        }
        long long n3=n1*n2;
        
        n3=n3 %mod;
        return n3;
    }
};
