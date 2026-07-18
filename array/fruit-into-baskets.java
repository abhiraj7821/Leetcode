class Solution {
    public int totalFruit(int[] fruits) {
        int r=0;
        int l=0;
        int maxLen=0;
        int k=2;
        HashMap<Integer,Integer> map = new HashMap<>();

        while(r < fruits.length){
            if(map.get(fruits[r])==null){
                map.put(fruits[r],0);
            }
            map.put(fruits[r],map.get(fruits[r])+1);
            if(map.size()>k){
                map.put(fruits[l],map.get(fruits[l])-1);
                if(map.get(fruits[l])==0){
                    map.remove(fruits[l]);
                }
                l++;
            }
            if(map.size()<=k){
                if(maxLen<(r-l+1)){
                    maxLen=(r-l+1);
                }
            }
            r++;
        }
        return maxLen;
    }
}