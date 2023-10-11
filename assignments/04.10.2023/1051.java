class Solution {
    public int heightChecker(int[] heights) {
        int b[] = new int[heights.length];
        for(int i=0;i<b.length;i++){
            b[i] = heights[i];
        }
        for(int i=0;i<heights.length;i++){
            for(int j=i;j<heights.length;j++){
                int temp = heights[i];
                if(heights[i]>heights[j]){
                    temp = heights[j];
                    heights[j] = heights[i];
                    heights[i] = temp;
                }
            }
        }

        int count = 0;
        for(int i=0;i<heights.length;i++){
            if(b[i]==heights[i]){
                count++;
            }
        }
        return heights.length-count;
    }
}