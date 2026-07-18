class Solution:
    def garbageCollection(self, garbage: List[str], travel: List[int]) -> int:
        pick_p=0
        pick_g=0
        pick_m=0

        travel_p=0
        travel_g=0
        travel_m=0

        last_p=0
        last_g=0
        last_m=0

        # Calculate pick time and travel time
        for i in range(len(garbage)):
            string=garbage[i]
            for ch in string:
                if(ch=='P'):
                    pick_p+=1
                    last_p=i
                elif(ch=='G'):
                    pick_g+=1
                    last_g=i
                elif(ch=='M'):
                    pick_m+=1
                    last_m=i
        
        # Calculate travel time
        for i in range(last_p):
            travel_p+=travel[i]

        for i in range(last_g):
            travel_g+=travel[i]

        for i in range(last_m):
            travel_m+=travel[i]
        
        ans=(pick_p+travel_p)+(pick_g+travel_g)+(pick_m+travel_m)
        return ans

