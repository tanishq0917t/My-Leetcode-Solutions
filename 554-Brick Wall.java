public class Solution {
    public int leastBricks(List<List<Integer>> wall) {
        if (wall == null || wall.size() == 0) return 0;
        Map<Integer, Integer> map = new HashMap<>();
        int count = 0;
        for (List<Integer> list : wall) {
            int end = 0;
            //cannot count the last edge cause it will be the max ending 
            for (int i = 0; i < list.size() - 1; i++) {
                end += list.get(i);
                map.put(end, map.getOrDefault(end, 0) + 1);
                count = Math.max(count, map.get(end));
            }
        }
        return wall.size() - count;
    }
}
