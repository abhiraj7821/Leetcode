class Solution:
    def countPrimes(self, n: int) -> int:
        if(n<=1):
            return 0
        prime=[True]*(n)
        prime[0]=prime[1]=False
        #num-> (2->sqrt(n)+1)
        for num in range(2,int(n**0.5)+1):
            #if prime[num] = True then its already prime
            if(prime[num]==True):
                #start-num*num, end=n+1, hope=num
                for j in range(num*num,n,num):
                    prime[j]=False
        return len([index for index,ele in enumerate(prime) if ele])