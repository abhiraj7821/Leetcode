import java.util.Map;
class Solution {
    public int firstUniqChar(String s) {
        Map<Character,Integer> charCountMap=new LinkedHashMap<>();
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            charCountMap.put(ch,charCountMap.getOrDefault(ch,0)+1);
        }
        // Convert map keys into a list for index-based access
        List<Character> keys = new ArrayList<>(charCountMap.keySet());

        // Step 2: Find the first character with count 1
        for(int i=0;i<keys.size();i++){
            char key=keys.get(i);
            if(charCountMap.get(key)==1){
                return s.indexOf(key);
            }
        }
        return -1;
    }
}